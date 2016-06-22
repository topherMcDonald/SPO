
#pragma once
#include <QObject>

namespace TophersNameSpace{

    class MainView;
    class SetupTab;
    class AddLineItem;

    class Startup final : public QObject
    {
        Q_OBJECT
    public:
        explicit Startup();
        void show() const;

        ~Startup();
    private:
        SetupTab& m_setupTab;
        MainView& m_mainView;
        AddLineItem& m_addLineItem;

        explicit Startup(const Startup& rhs) = delete;
        Startup& operator= (const Startup& rhs) = delete;
    };
}


