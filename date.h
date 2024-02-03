#ifndef DATE_H
#define DATE_H

#include <QString>
#include <QDebug>

class Date
{
public:
    Date();
    int getDay() const {return m_dayNumber;}
    int getMonth() const {return m_monthNumber;}
    int getYear() const {return m_year;}
    QString getDayName() const {return m_dayName;}
    QString getMonthName() const {return m_monthName;}




    ////////////////////////////
    void setDate(int month, int day, int year);
    void setDayName(const QString &dayName);
    void setMonthName(const QString &monthName);
    void q();
    void setMonthNameWithNumber();

private:
    int m_year =0;
    int m_dayNumber =0;
    int m_monthNumber =0;

    QString m_dayName;
    QString m_monthName;

};

#endif // DATE_H
