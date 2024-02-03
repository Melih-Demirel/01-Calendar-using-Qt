#ifndef CALENDER_H
#define CALENDER_H

#include <QString>
#include <QList>
#include <QTextStream>
#include <QFile>
#include <iostream>
#include <QDebug>


#include "task.h"
#include "calenderitem.h"
#include "specialday.h"
#include "evenement.h"

class Calender
{
public:
    Calender();
    Calender(const QString &userName);
    void addCalenderItem();
    QString getCalenderName() const;
    void setCalenderName(const QString &getCalenderName);

private:
    QString mCalenderName;
    QList <Calenderitem*> m_items; // std::vector same
};

#endif // CALENDER_H
