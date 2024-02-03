#ifndef APP_H
#define APP_H

#include "calender.h"
#include "date.h"
#include "yearwithinfo.h"

#include <QList>

class App
{
public:
    App();
    ~App();
    void readAndDecodeFileWithData();
    void fillListAndGenerateDays();
    void transformDataToMembersOfDaysList();
    void t();
    void decodeMonthNumbertoMonthName();
    void setDayNameToEachDate();
    void addCalenderUser(const QString &userName);
    const QList<Calender *>& getCalenderList() const { return mCalenders; }
private:
    QList <Year *> mYearList;
    QList<QList<QList<Date *> > > mDaysList; // = m_days[year][month][day]




    QList <Calender *> mCalenders;
    Calender* mCurrentUser;


    int mAantalGegevenJarenInTextFile=0;
};

#endif // APP_H
