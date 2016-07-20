#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <QMainWindow>
#include <View/setuptab.h>
#include <View/addlineitem.h>

namespace Ui {
    class MainView;
}


    class SetupTab;

    class MainView : public QMainWindow
    {
        Q_OBJECT

    public:
        explicit MainView(QWidget *parent, SetupTab &setup, AddLineItem &addlineitem);
        ~MainView();

    private:
        SetupTab& m_setupTab;
        AddLineItem& m_addlineitem;
        Ui::MainView *ui;
    };
#endif // MAINVIEW_H
