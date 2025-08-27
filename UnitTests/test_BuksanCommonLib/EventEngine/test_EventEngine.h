#ifndef TEST_EVENTENGINE_H
#define TEST_EVENTENGINE_H

#include <QObject>

class test_EventEngine : public QObject
{
    Q_OBJECT
public:
    explicit test_EventEngine(QObject *parent = nullptr);

signals:
};

#endif // TEST_EVENTENGINE_H
