#ifndef YEARWITHINFO_H
#define YEARWITHINFO_H

#include <QString>
#include <QTextStream>
#include <QFile>
#include <iostream>
#include <QDebug>

class Year
{
public:
    Year();
    void decodeLineWithYearInfoToMembers();
    void q();
    void setDayMonthNames();
    void setLineWithYearInfo(const QString &lineWithYearInfo);

    int getCountOfFeb() {return m_countOfFebruaryDays;}

    QString getYear() const{return m_year;}
    QString getFirstDayOfYear() const {return m_firstDayOfYear;}

private:
    QString m_year;
    QString m_firstDayOfYear;
    QString m_lineWithYearInfo;

    int m_countOfFebruaryDays;
};

#endif // YEARWITHINFO_H
