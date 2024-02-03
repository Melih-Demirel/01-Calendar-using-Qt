#include "calender.h"

Calender::Calender()
{
    //addCalenderItem();
}

Calender::Calender(const QString &userName)
{
    mCalenderName = userName;
}

void Calender::addCalenderItem()
{
    Event *a= new Event;
    m_items.push_back(a);
    a->setTitleItem("Kerem jarig");
    qDebug() << m_items[0]->GetTitleItem();

}

QString Calender::getCalenderName() const
{
    return mCalenderName;
}

void Calender::setCalenderName(const QString &calenderName)
{
    mCalenderName = calenderName;
}

