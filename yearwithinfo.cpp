#include "yearwithinfo.h"

Year::Year()
{
}
void Year::q()
{
    qDebug() << m_year;
    qDebug() << m_countOfFebruaryDays;
    qDebug() << m_firstDayOfYear;
}
void Year::setDayMonthNames()
{
    QStringList dayNames = {"Monday","Tuesday","Wednesday","Thurday","Friday","Saturday","Sunday"};
}
void Year::setLineWithYearInfo(const QString &lineWithYearInfo)
{
    m_lineWithYearInfo = lineWithYearInfo;
}
void Year::decodeLineWithYearInfoToMembers()
{
    QString buffer;
    int q=0;
    int b=0;
    
    for(int i=0;i<4;i++)
    {
        buffer[i] = m_lineWithYearInfo[i];
    }
    m_year = buffer;
    buffer="";

    for(int i=4;i<6;i++)
    {
        buffer[q]=m_lineWithYearInfo[i];
        q++;
    }
    m_firstDayOfYear = buffer;
    buffer="";

    for(int i=6;i<8;i++)
    {
        buffer[b]=m_lineWithYearInfo[i];
        b++;
    }
    int n = buffer.toInt();
    m_countOfFebruaryDays = n;
    buffer="";
}
