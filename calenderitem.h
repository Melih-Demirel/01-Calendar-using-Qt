#ifndef CALENDERITEM_H
#define CALENDERITEM_H
#include "date.h"
#include <QString>


class Calenderitem
{
public:
    Calenderitem();

    QString GetTitleItem() const;
    void setTitleItem(const QString &GetTitleItem);

    QString GetTimeForWhen() const;
    void setTimeForWhen(const QString &GetTimeForWhen);

private:
    Date m_dateOfItem;
    QString m_titleItem;
    QString m_timeForWhen;
    QString m_typeOfItem;
};

#endif // CALENDERITEM_H
