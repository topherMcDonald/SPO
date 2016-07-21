#pragma once
#include <QObject>

/* Forward reference to classes */
class MainView;
class SetupTab;
class AddLineItem;

class Startup final : public QObject    //not intended to be a base class, mark final
{
    Q_OBJECT
public:
    explicit Startup();
    void show() const;                  // will launch app instead of main.cpp
    ~Startup();
private:
    SetupTab& m_setupTab;               //Reference member for setuptab
    AddLineItem& m_addlineitem;         //Reference member for mainview
    MainView& m_mainView;               //Reference member for mainview

    QString ReadXmlFile();
    explicit Startup(const Startup& rhs) = delete;
    Startup& operator= (const Startup& rhs) = delete;

    void ParseXmlData();
};


