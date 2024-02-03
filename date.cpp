#include "date.h"

Date::Date()
{

}
void Date::q()
{
    qDebug() << m_dayNumber<<m_monthName<< m_year<< m_dayName;
}
void Date::setDate(int day, int month, int year)
{
    m_dayNumber = day;
    m_monthNumber = month;
    m_year= year;
}
void Date::setDayName(const QString &dayName)
{
    m_dayName = dayName;
}
void Date::setMonthName(const QString &monthName)
{
    m_monthName = monthName;
}
void Date::setMonthNameWithNumber()
{
    if(m_monthNumber==0)
        m_monthName= "January";
    if(m_monthNumber==1)
        m_monthName= "February";
    if(m_monthNumber==2)
        m_monthName= "March";
    if(m_monthNumber==3)
        m_monthName= "April";
    if(m_monthNumber==4)
        m_monthName= "May";
    if(m_monthNumber==5)
        m_monthName= "June";
    if(m_monthNumber==6)
        m_monthName= "July";
    if(m_monthNumber==7)
        m_monthName= "August";
    if(m_monthNumber==8)
        m_monthName= "September";
    if(m_monthNumber==9)
        m_monthName= "October";
    if(m_monthNumber==10)
        m_monthName= "November";
    if(m_monthNumber==11)
        m_monthName= "December";
}
