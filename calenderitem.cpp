#include "calenderitem.h"

Calenderitem::Calenderitem()
{
}

QString Calenderitem::GetTitleItem() const
{
    return m_titleItem;
}

void Calenderitem::setTitleItem(const QString &titleItem)
{
    m_titleItem = titleItem;
}

QString Calenderitem::GetTimeForWhen() const
{
    return m_timeForWhen;
}

void Calenderitem::setTimeForWhen(const QString &timeForWhen)
{
    m_timeForWhen = timeForWhen;
}
