#ifndef TEST_CDATABASECONNECTION_H
#define TEST_CDATABASECONNECTION_H

#include <QObject>
#include <QTest>
#include "db/CDatabaseConnection.h"

class test_CDatabaseConnection : public QObject
{
    Q_OBJECT
public:
    explicit test_CDatabaseConnection(QObject *parent = nullptr);


private:
    CDatabaseConnection* m_Connection;
private slots:
    void test_fCreateConnection();

signals:
};

#endif // TEST_CDATABASECONNECTION_H
