#ifndef TASK_H
#define TASK_H

#include <QString>
#include <QList>
#include <iostream>
#include "date.h"
#include "calenderitem.h"

class Task: public Calenderitem
{
public:

    enum Prio {LOW,NORMAL,HIGH};
    enum Status {TODO, BEZIG, KLAAR};

    Task();
    Task(const QString &verantwoordelijke, Prio taskPrio, Status taskStatus);

    void setTaskPrioriteit(const Prio taskPrioriteit);
    void setTaskStatus(const Status taskStatus);

    QString verantwoordelijke() const;
    void setVerantwoordelijke(const QString &verantwoordelijke);

private:
    QList <Task *> m_subtaken;
    QString m_verantwoordelijke;

    Prio m_taskPrioriteit;
    Status m_taskStatus;
};

#endif // TASK_H
