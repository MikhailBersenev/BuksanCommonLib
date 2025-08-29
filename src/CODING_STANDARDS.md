# Стандарты кодирования BuksanCommonLib

## Венгерская нотация

В проекте используется венгерская нотация для именования переменных и методов.

### Префиксы для типов данных

| Тип | Префикс | Пример |
|-----|---------|--------|
| `bool` | `b` | `m_bIsValid`, `bResult` |
| `char` | `ch` | `m_chSymbol`, `chInput` |
| `int`, `qint32` | `n` | `m_nCount`, `nIndex` |
| `long`, `qint64` | `n` | `m_nUserId`, `nRightId` |
| `float` | `f` | `m_fValue`, `fRatio` |
| `double` | `d` | `m_dPrecision`, `dAccuracy` |
| `QString` | `str` | `m_strName`, `strDescription` |
| `QDate` | `date` | `m_dateCreated`, `dateExpiry` |
| `QDateTime` | `dateTime` | `m_dateTimeLast`, `dateTimeStart` |
| `QTime` | `time` | `m_timeStart`, `timeEnd` |
| `QObject*` | `p` | `m_pParent`, `pChild` |
| `QWidget*` | `p` | `m_pMainWindow`, `pButton` |
| `CSecLabeledObject::SecurityLabel` | `l` | `m_lSecurityLabel`, `lMandatoryMark` |

### Префиксы для методов

| Тип метода | Префикс | Пример |
|------------|---------|--------|
| Геттеры | `fGet` | `fGetUserId()`, `fGetDescription()` |
| Сеттеры | `fSet` | `fSetUserId()`, `fSetDescription()` |
| Проверки | `fIs` | `fIsValid()`, `fIsEmpty()` |
| Проверки наличия | `fHas` | `fHasRights()`, `fHasPermission()` |
| Внутренние методы | `f` | `fEmitDataChanged()`, `fValidateInput()` |

### Префиксы для членов класса

| Область видимости | Префикс | Пример |
|-------------------|---------|--------|
| Приватные члены | `m_` | `m_nUserId`, `m_strUsername` |
| Статические члены | `s_` | `s_nInstanceCount` |
| Глобальные переменные | `g_` | `g_nGlobalCounter` |

### Мандатные метки (SecurityLabel)

Для мандатных меток используется структура `CSecLabeledObject::SecurityLabel`:

```cpp
struct SecurityLabel {
    QString strName = "";        // Название метки
    unsigned int nLevel = 0;     // Уровень безопасности
};
```

**Правила использования:**
- Префикс `l` для переменных типа `SecurityLabel`
- Примеры: `m_lMandatoryMark`, `lSecurityLabel`
- При сравнении проверять оба поля: `strName` и `nLevel`

### Примеры использования

```cpp
class CUser : public CSecLabeledObject
{
private:
    qint64 m_nUserId;           // ID пользователя
    QString m_strUsername;       // Имя пользователя
    QDate m_dateAddDate;         // Дата регистрации
    CSecLabeledObject::SecurityLabel m_lRights;  // Мандатная метка

public:
    // Геттеры
    qint64 fGetUserId() const { return m_nUserId; }
    QString fGetUsername() const { return m_strUsername; }
    CSecLabeledObject::SecurityLabel fGetRights() const { return m_lRights; }
    
    // Сеттеры
    void fSetUserId(qint64 nUserId) { m_nUserId = nUserId; }
    void fSetUsername(const QString &strUsername) { m_strUsername = strUsername; }
    void fSetRights(const CSecLabeledObject::SecurityLabel &lRights) { m_lRights = lRights; }
    
    // Проверки
    bool fIsValid() const { return m_nUserId > 0; }
    bool fHasRights() const { return m_lRights.nLevel > 0; }
    
    // Внутренние методы
protected:
    void fEmitDataChanged();
};
```

### Константы и перечисления

```cpp
// Константы
const qint64 MAX_USER_ID = 999999;
const QString DEFAULT_USERNAME = "guest";

// Перечисления
enum class UserStatus {
    Active = 0,
    Inactive = 1,
    Banned = 2
};
```

### Сигналы Qt

Сигналы именуются без префикса, в camelCase:

```cpp
signals:
    void userDataChanged();
    void rightsChanged();
    void securityGroupDataChanged();
```

### Соблюдение стандартов

- Все новые переменные и методы должны использовать венгерскую нотацию
- При рефакторинге существующего кода следует привести к единому стандарту
- Комментарии должны быть на русском языке
- Имена классов начинаются с заглавной буквы и префикса `C`
- Имена методов начинаются с префикса `f` и заглавной буквы
- Мандатные метки всегда используют тип `CSecLabeledObject::SecurityLabel`
- При сравнении `SecurityLabel` проверять оба поля структуры
