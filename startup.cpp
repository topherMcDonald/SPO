#include "startup.h"
#include "View/addlineitem.h"
#include "View/mainview.h"
#include "View/setuptab.h"

namespace TophersNameSpace
{
    Startup::Startup() :
        QObject(nullptr),
        m_setupTab(*new SetupTab(nullptr)),
        m_mainView(*new MainView(nullptr, m_setupTab)),
        m_addLineItem(*new AddLineItem(nullptr))
    {
    }

    void Startup::show() const
    {
        m_mainView.show();
    }
}
