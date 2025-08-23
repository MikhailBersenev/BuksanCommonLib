#include "test_CDatabaseConnection.h"
#include "db/CDatabaseConnectionPSQL.h"

test_CDatabaseConnection::test_CDatabaseConnection(QObject *parent)
    : QObject{parent}
{
    m_Connection = new CDatabaseConnectionPSQL(this);


}

void test_CDatabaseConnection::test_fCreateConnection()
{
    CDatabaseConnection::SDBConnection lConnection;
    lConnection.nPort = 5432;
    lConnection.strDBName = "buksandb";
    lConnection.strHostName = "localhost";
    lConnection.strUserName = "postgres";
    lConnection.strPassword = "12345678";
    QVERIFY(m_Connection->fCreateConnection(lConnection));

}
