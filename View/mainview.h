#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <QMainWindow>
#include <View/setuptab.h>
#include <View/addlineitem.h>

namespace Ui {
    class MainView;
}

class SetupTab;
class AddLineItem;

class MainView : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainView(QWidget *parent, SetupTab &setup, AddLineItem &addlineitem);
    ~MainView();

public slots:

private:
    SetupTab& m_setupTab;
    AddLineItem& m_addlineitem;
    Ui::MainView *ui;
    QString basefilename;

    void createActions();

    QAction *openAction;
    QAction *saveAsAction;
    QAction *clearAction;
    QAction *exitAction;
    QAction *aboutAction;
    QAction *aboutQtAction;

};
#endif // MAINVIEW_H
