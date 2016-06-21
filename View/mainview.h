#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <QMainWindow>
#include <View/setuptab.h>

namespace Ui {
    class MainView;
}

namespace TophersNameSpace {

    class SetupTab;

    class MainView : public QMainWindow
    {
        Q_OBJECT

    public:
        explicit MainView(QWidget *parent, TophersNameSpace::SetupTab &setup);
        ~MainView();

    private:
        SetupTab& m_setupTab;
        Ui::MainView *ui;
    };
}
#endif // MAINVIEW_H
