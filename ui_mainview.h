/********************************************************************************
** Form generated from reading UI file 'mainview.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINVIEW_H
#define UI_MAINVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainView
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *smallPartsOrder;
    QTabWidget *tabMainView;
    QWidget *tabShipToAddress;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *loSetupTab;
    QWidget *tabAddSmallParts;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *loAddSmallParts;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainView)
    {
        if (MainView->objectName().isEmpty())
            MainView->setObjectName(QStringLiteral("MainView"));
        MainView->resize(850, 800);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainView->sizePolicy().hasHeightForWidth());
        MainView->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/root/qtAppIcons/application.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainView->setWindowIcon(icon);
        centralWidget = new QWidget(MainView);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        smallPartsOrder = new QLabel(centralWidget);
        smallPartsOrder->setObjectName(QStringLiteral("smallPartsOrder"));

        verticalLayout->addWidget(smallPartsOrder);

        tabMainView = new QTabWidget(centralWidget);
        tabMainView->setObjectName(QStringLiteral("tabMainView"));
        tabMainView->setEnabled(true);
        tabMainView->setDocumentMode(false);
        tabMainView->setTabsClosable(false);
        tabShipToAddress = new QWidget();
        tabShipToAddress->setObjectName(QStringLiteral("tabShipToAddress"));
        verticalLayout_3 = new QVBoxLayout(tabShipToAddress);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        loSetupTab = new QVBoxLayout();
        loSetupTab->setSpacing(6);
        loSetupTab->setObjectName(QStringLiteral("loSetupTab"));

        verticalLayout_3->addLayout(loSetupTab);

        QIcon icon1;
        icon1.addFile(QStringLiteral(":/root/qtAppIcons/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabMainView->addTab(tabShipToAddress, icon1, QString());
        tabAddSmallParts = new QWidget();
        tabAddSmallParts->setObjectName(QStringLiteral("tabAddSmallParts"));
        verticalLayout_4 = new QVBoxLayout(tabAddSmallParts);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        loAddSmallParts = new QVBoxLayout();
        loAddSmallParts->setSpacing(6);
        loAddSmallParts->setObjectName(QStringLiteral("loAddSmallParts"));

        verticalLayout_4->addLayout(loAddSmallParts);

        tabMainView->addTab(tabAddSmallParts, QString());
        tabMainView->setTabText(tabMainView->indexOf(tabAddSmallParts), QStringLiteral(""));

        verticalLayout->addWidget(tabMainView);

        MainView->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainView);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 850, 20));
        MainView->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainView);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainView->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainView);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainView->setStatusBar(statusBar);

        retranslateUi(MainView);

        tabMainView->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainView);
    } // setupUi

    void retranslateUi(QMainWindow *MainView)
    {
        MainView->setWindowTitle(QApplication::translate("MainView", "Draper Inc.", nullptr));
        smallPartsOrder->setText(QApplication::translate("MainView", "Place Small Parts Order", nullptr));
        tabMainView->setTabText(tabMainView->indexOf(tabShipToAddress), QApplication::translate("MainView", "                 Small Parts Order                ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainView: public Ui_MainView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINVIEW_H
