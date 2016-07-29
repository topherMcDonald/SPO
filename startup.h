#pragma once
#include <QObject>
#include <QWidget>

/* Forward reference to classes */
class MainView;
class SetupTab;
class AddLineItem;
class SearchDialog;

class Startup final : public QObject    //not intended to be a base class, mark final
{
    Q_OBJECT
public:
    explicit Startup();
    void show() const;                  // will launch app instead of main.cpp
    ~Startup();

public slots:

private:
    AddLineItem& m_addlineitem;         //Reference member for mainview
    SearchDialog& m_search;             //Reference member for SearchDialog
    SetupTab& m_setupTab;               //Reference member for setuptab
    MainView& m_mainView;               //Reference member for mainview

    explicit Startup(const Startup& rhs) = delete;
    Startup& operator= (const Startup& rhs) = delete;

};


