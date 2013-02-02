#ifndef SCOREKEEPER_H
#define SCOREKEEPER_H

#include <QtCore/QList>
#include "scoreentry.h"
#include <mongo/client/dbclient.h>

class QString;

class ScoreKeeper
{
public:
    ScoreKeeper();

    void addHighScore( const ScoreEntry &e );
    void addHighScore( QString name, int score );

    QList<ScoreEntry> getTopScore();

private:
    QList<ScoreEntry> m_highScore;
    mongo::DBClientConnection m_conn;
};

#endif // SCOREKEEPER_H
