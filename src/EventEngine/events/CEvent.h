#ifndef CEVENT_H
#define CEVENT_H

#include <QObject>
#include <QTime>
#include <QDate>

class CEvent : public QObject
{
    Q_OBJECT
public:
    // Общие типы событий (из signatureTypes.csv)
    enum class nSignatureType : int {
        Camera      = 1,  // Событие видеокамеры
        System      = 2,  // Системное событие
        Security    = 3,  // Событие безопасности
        Server      = 4   // Событие сервера
    };

    // Конкретные события (из signature.csv)
    enum class nSignature : int {
        ServerConnect       = 1,  // Подключение к серверу
        UserAuth            = 2,  // Авторизация пользователя
        UserRegister        = 3,  // Регистрация пользователя
        CameraStartRecord   = 4,  // Старт записи с камеры
        CameraScreenshot    = 5,   // Создание скриншота с камеры
        CameraStopRecord    = 6,   // Стоп записи с камеры
        CameraLostConnection = 7, //Потеряно соединение с камерой
        UserChangePassword   = 8, //Изменение пароля пользователя
        UserBanAccount       = 9, //Блокировка пользователя
        UserDeleteAccount    = 10, //Удаление пользователя
        UserChangeUserName   = 11, //Изменение имени пользователя
        UserLogoutAccount    = 12, //Выход из учетной записи
        InternetLostConnection = 13, //Потеряно соединение с Интернетом
        InternetConnectionRecovered = 14, //Соединение с Интернетом восстановлено
        MandaroryMarkChanged   = 15, //Изменение мандатной метки
        UserUnlockAccount      = 16, //Разблокировка пользователя
        NullValue              = 17
    };
    QString  fGetUserName();
    QTime    fGetTime();
    QDate    fGetDate();
    qint64   fGetTimeStamp();
    nSignatureType  fGetType();
    nSignature      fGetSignature();
    QString  fGetHostName();
    QString  fGetFullLog();

    void fSetUserName(QString& lStrUserName);
    void fSetHostName(QString& lStrHostName);


protected:
    explicit CEvent(QObject *parent = nullptr);
    explicit CEvent(CEvent* pEvent);
    QString m_strUserName;
    QTime   m_time;
    QDate   m_date;
    qint64  m_nTimeStamp;
    nSignatureType m_nSignatureType;
    nSignature m_nSignature;
    QString m_strHostName;
    QString m_strFullLog;




signals:
};

#endif // CEVENT_H
