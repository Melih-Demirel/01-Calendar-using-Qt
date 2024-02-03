#include "evenement.h"

Event::Event()
{

}

void Event::setBeschrijving(const QString &beschrijving)
{
    m_beschrijving = beschrijving;
}

QString Event::locatie() const
{
    return m_locatie;
}

void Event::setLocatie(const QString &locatie)
{
    m_locatie = locatie;
}

QString Event::beschrijving() const
{
    return m_beschrijving;
}

QStringList Event::deelnemers() const
{
    return m_deelnemers;
}

void Event::setDeelnemers(const QStringList &deelnemers)
{
    m_deelnemers = deelnemers;
}

QString Event::beginuur() const
{
    return m_beginuur;
}

void Event::setBeginuur(const QString &beginuur)
{
    m_beginuur = beginuur;
}

QString Event::einduur() const
{
    return m_einduur;
}

void Event::setEinduur(const QString &einduur)
{
    m_einduur = einduur;
}
