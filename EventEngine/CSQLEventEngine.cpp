#include "CSQLEventEngine.h"

#include <QSqlError>
CSQLEventEngine::CSQLEventEngine(QObject *parent)
    : CEventEngine{parent}
{

}

bool CSQLEventEngine::fSend(CEvent *pEvent)
{
    QString strHostName  = pEvent->fGetHostName();
    QString strTimeStamp = QString::number(pEvent->fGetTimeStamp());
    QString strUserName = pEvent->fGetUserName();
    qint16 nSignature = pEvent->fGetSignature();
    this->fPrepare(strHostName, strTimeStamp);
    this->fSetUser(strUserName);
    this->fSetSignature(nSignature);
    if(!this->fPost(strHostName)) {
        qDebug() << "Unable to send event";
        return false;
    }
    return true;
}

void CSQLEventEngine::fPrepare(QString& lStrHostName, QString& lStrTimeStamp)
{
    m_MainQuery.prepare("INSERT INTO alerts (\"user\", time, date, unixtime, signature, host, \"fullLog\")"
                       " VALUES (:user, :time, :date, :unixtime, :signature, :host, :fulllog);");
    m_MainQuery.bindValue(":host", lStrHostName);
    m_MainQuery.bindValue(":unixtime", lStrTimeStamp);
}
void CSQLEventEngine::fSetUser(QString& strUser)
{
    m_FindItemQuery.prepare("SELECT \"userId\" FROM users WHERE username = :username;");
    m_FindItemQuery.bindValue(":username", strUser);
    if(!m_FindItemQuery.exec())
    {
        qDebug() << "Unable to find user" << m_FindItemQuery.lastError() << m_FindItemQuery.lastQuery();
        return;
    }
    m_FindItemQuery.first();
    m_MainQuery.bindValue(":user", m_FindItemQuery.value(0).toInt());
    m_strFullData = strUser;
}
void CSQLEventEngine::fSetSignature(qint16& nSignature)
{
    m_MainQuery.bindValue(":signature", nSignature);

}
void CSQLEventEngine::fAddFullLogInfo(QString& strInfo)
{
    m_strFullData += " " + strInfo + " ";
}
bool CSQLEventEngine::fPost(QString& lStrHostName)
{
    m_MainQuery.bindValue(":fulllog", fCreateFullLog(m_strFullData, lStrHostName));
    if(!m_MainQuery.exec())
    {
        qDebug() << "Unable to send alert" <<  m_MainQuery.lastError() <<  m_MainQuery.lastQuery();
        return false;
    }
    else
    {
        return true;
    }
}

QString CSQLEventEngine::fCreateFullLog(QString& strData, QString& lStrHostName)
{
    QString l_strResult;
    l_strResult = lStrHostName + " " + QDateTime::currentDateTimeUtc().toString() + " " + strData;
    return l_strResult;
}
