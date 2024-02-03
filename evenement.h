#ifndef EVENEMENT_H
#define EVENEMENT_H
#include <QString>
#include <QStringList>
#include "calenderitem.h"

class Event: public Calenderitem
{
public:
    Event();

    QString beschrijving() const;
    void setBeschrijving(const QString &beschrijving);

    QString locatie() const;
    void setLocatie(const QString &locatie);


    QStringList deelnemers() const;
    void setDeelnemers(const QStringList &deelnemers);

    QString beginuur() const;
    void setBeginuur(const QString &beginuur);

    QString einduur() const;
    void setEinduur(const QString &einduur);

private:
    QString m_beschrijving;
    QString m_locatie;
    QStringList m_deelnemers;
    QString m_beginuur;
    QString m_einduur;

};

#endif // EVENEMENT_H
