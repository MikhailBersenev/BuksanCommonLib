#ifndef CSQLEVENTENGINE_H
#define CSQLEVENTENGINE_H

#include <QSqlQuery>

#include "CEventEngine.h"

class CSQLEventEngine : public CEventEngine
{
public:
    explicit CSQLEventEngine(QObject *parent = nullptr);
    virtual bool fSend(CEvent* pEvent) override;


private:
     void fPrepare(QString& lStrHostName, QString& lStrTimeStamp);
     void fSetUser(QString& strUser);
     void fSetSignature(CEvent::nSignature& nSignature);
     void fAddFullLogInfo(QString& strInfo);
    bool fPost(QString& lStrHostName);
     /** @brief Main SQL query object for alert operations */
     QSqlQuery m_MainQuery;

     /** @brief SQL query object for finding user information */
     QSqlQuery m_FindItemQuery;

     /**
     * @brief Creates a formatted log entry with timestamp and metadata
     * @param strData The raw data to format
     * @return Formatted log string with timestamp and system information
     *
     * Generates a structured log entry including timestamp, IP address,
     * and formatted event data.
     */
     QString fCreateFullLog(QString& strData, QString& lStrHostName);

     /** @brief Accumulated log data for the current alert */
     QString m_strFullData;

};

#endif // CSQLEVENTENGINE_H
