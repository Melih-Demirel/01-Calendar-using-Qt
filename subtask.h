#ifndef SUBTASK_H
#define SUBTASK_H
#include "date.h"
#include <QString>

class Subtask
{
public:
    Subtask();

    enum Prio {LOW=0,NORMAL,HIGH};
    enum Status {TODO=0, BEZIG, KLAAR};
protected:
    Date taskdate;
    Prio taskPrioriteit;
    Status taskStatus;
    QString m_verantwoordelijke;
};

#endif // SUBTASK_H
