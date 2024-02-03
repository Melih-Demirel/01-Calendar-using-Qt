#include "app.h"

App::App()
{
    readAndDecodeFileWithData();
    fillListAndGenerateDays();
    setDayNameToEachDate();
    //t();
}

App::~App()
{
    qDebug() <<"Deconstructor";
}
void App::t()
{
    for(int i=0; i<mAantalGegevenJarenInTextFile;i++)
    {
        mYearList[i]->q();
    }
}
void App::setDayNameToEachDate()
{
    QStringList daysInWeek = {"Mo","Tu","We","Th","Fr","Sa","Su"};
    for(int year=0 ; year < mAantalGegevenJarenInTextFile; year++)
    {
        QString firstDayOfYear = mYearList[year]->getFirstDayOfYear();
        int numberReferingToWhichDay=0;

        //- Find what day the year starts with and = taht number -/////
        for(int i=0;i<daysInWeek.size();i++)
        {
            if(daysInWeek[i]==firstDayOfYear)
                numberReferingToWhichDay=i;
        }
        // /////

        for(int month=0; month<12 ;month++)
        {
          if (month ==0 || month== 2 || month== 4 || month== 6 || month==7 || month== 9 || month==11)
          {
              for(int day=0;day<31;day++)
              {
                  mDaysList[year][month][day]->setDayName(daysInWeek[numberReferingToWhichDay]);        // If it hits Sunday, we set the int back to zero so it can start again form monday
                  if(numberReferingToWhichDay==6)
                      numberReferingToWhichDay=0;
                  else {
                      numberReferingToWhichDay++;
                  }

              }
          }
          if (month== 1)
          {
              for(int day=0; day<(mYearList[year]->getCountOfFeb());day++)
              {
                  mDaysList[year][month][day]->setDayName(daysInWeek[numberReferingToWhichDay]);
                  if(numberReferingToWhichDay==6)
                      numberReferingToWhichDay=0;
                  else {
                      numberReferingToWhichDay++;
                  }
              }
          }
          if (month ==3 || month== 5 || month== 8 || month== 10)
          {
              for(int day=0; day<30;day++)
              {
                  mDaysList[year][month][day]->setDayName(daysInWeek[numberReferingToWhichDay]);
                  if(numberReferingToWhichDay==6)
                      numberReferingToWhichDay=0;
                  else {
                      numberReferingToWhichDay++;
                  }
              }
          }
        }
    }
}

void App::addCalenderUser(const QString &userName)
{
    Calender* newUser = new Calender(userName);
    mCalenders.push_back(newUser);
}


void App::fillListAndGenerateDays()
{
    Date * a;;
    QList <Date *> temp;
    QList <QList <Date *> > tempMonth;



    for(int year=0 ; year < mAantalGegevenJarenInTextFile; year++)
    {
        for(int month=0; month<12 ;month++)
        {
          if (month ==0 || month== 2 || month== 4 || month== 6 || month==7 || month== 9 || month==11)
          {
              for(int day=0;day<31;day++)
              {
                  a  = new Date();                                                   // Elke dag wordt er aan object een new Date() =. Deze wordt dan geplaatst in een temp QList<Date *>. Na x dagen (hangt af van maand en jaar) wordt
                  a->setDate(day+1, month, mYearList[year]->getYear().toInt());        // deze toegevoegd om een tempMonthlist. Na deze moet men direct de temp weer leegmaken zodat dagen van een volgende maand niet in de vorige zitten.
                  a->setMonthNameWithNumber();
                  temp.append(a);                                                   // Na 1 jaar wordt de tempMontlist toegevoegd op m_days ( de mainlist) en leeggemaakt.
              }
              tempMonth.append(temp);
              temp.clear();
          }
          if (month== 1)
          {
              for(int day=0; day<(mYearList[year]->getCountOfFeb());day++)
              {
                  a = new Date;
                  a->setDate(day+1, month, mYearList[year]->getYear().toInt());
                  a->setMonthNameWithNumber();
                  temp.append(a);
              }
              tempMonth.append(temp);
              temp.clear();
          }
          if (month ==3 || month== 5 || month== 8 || month== 10)
          {
              for(int day=0; day<30;day++)
              {
                  a = new Date;
                  a->setDate(day+1, month, mYearList[year]->getYear().toInt());
                  a->setMonthNameWithNumber();
                  temp.append(a);
              }
              tempMonth.append(temp);
              temp.clear();
          }
        }
        mDaysList.append(tempMonth);
        tempMonth.clear();
    }
}
void App::readAndDecodeFileWithData()
{
    QString fileLine;
    QString buffer;


    QFile file(QString(":/data/Data/days.txt"));
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
            return;

    QTextStream in(&file);
    while (!in.atEnd())
    {
        QString a = in.readAll();
        fileLine = a;
    }

    // File has been read. Now Every line gets an object of YearswithInfo

    Year *aYear;
    for(int i=0;i<fileLine.size();i++)
    {
        if(fileLine[i]=="\n")                         // Als men aan deze aankomt, moet de buffer terug leeg worden zodat die gevuld kan worden met volgende line.
        {
            aYear = new Year();
            aYear->setLineWithYearInfo(buffer);
            aYear->decodeLineWithYearInfoToMembers();
            mYearList.append(aYear);
            buffer = "";
            mAantalGegevenJarenInTextFile++;
        }
        else
        {
            buffer.push_back(fileLine[i]);
        }
    }
    // Als men geen \n tegenkomt betekent dit ofwel geen data ofwel 1 jaar gegeven, in principe zou het meest logische 1 jaar zijn dus gaat ze 1 object aanmaken.
    aYear = new Year();
    aYear->setLineWithYearInfo(buffer);
    aYear->decodeLineWithYearInfoToMembers();
    mYearList.append(aYear);
    mAantalGegevenJarenInTextFile++; // Laaste lijn heeft geen \n
}
