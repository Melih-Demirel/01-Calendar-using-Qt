#include "task.h"

Task::Task()
{

}

Task::Task(const QString &verantwoordelijke, Task::Prio taskPrio, Task::Status taskStatus)
{
    m_verantwoordelijke = verantwoordelijke;
    m_taskStatus = taskStatus;
    m_taskPrioriteit = taskPrio;
}

void Task::setTaskPrioriteit(const Task::Prio taskPrioriteit)
{
    m_taskPrioriteit = taskPrioriteit;
}

void Task::setTaskStatus(const Task::Status taskStatus)
{
    m_taskStatus = taskStatus;
}

QString Task::verantwoordelijke() const
{
    return m_verantwoordelijke;
}

void Task::setVerantwoordelijke(const QString &verantwoordelijke)
{
    m_verantwoordelijke = verantwoordelijke;
}
