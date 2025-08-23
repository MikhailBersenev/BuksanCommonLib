#include <QCoreApplication>
#include <QtTest>
#include "db/test_CDatabaseConnection.h"
// add necessary includes here
#if 0
class MainTest : public QObject
{
    Q_OBJECT

public:
    MainTest();
    ~MainTest();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();
};

MainTest::MainTest() {}

MainTest::~MainTest() {}

void MainTest::initTestCase() {}

void MainTest::cleanupTestCase() {}

void MainTest::test_case1() {

}
#endif

QTEST_MAIN(test_CDatabaseConnection)

//#include "tst_maintest.moc"
