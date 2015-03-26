#include <Wt/WApplication>
#include "day_ata_glance.h"
#include "bestellung.h"

DayAtaGlance::DayAtaGlance(const WEnvironment& env)
    : WApplication(env)
{
    messageResourceBundle().use(docRoot() + "/res");

    WBootstrapTheme* bootstrap = new WBootstrapTheme();
    bootstrap->setVersion(WBootstrapTheme::Version3);
    bootstrap->setResponsive(true);
    setTheme(bootstrap);

    setTitle("Hello world");

    tmpl = new WTemplate(WString::tr("overviewday"));

    navigation = new WNavigationBar();
    navigation->setResponsive(true);
    navigation->setTitle(WString("Bestellung fuer den 01.01.01"), WLink(WLink::InternalPath, "/selectday/"));

    tabbar = new WTabWidget();
    
    tabbar->addTab(new Bestellung(), "Bestellung", WTabWidget::PreLoading);
    tabbar->addTab(new WTextArea("Hello World 2"), "Uebersicht", WTabWidget::LazyLoading);
    tabbar->addTab(new WTextArea("This is my first tab here"), "Bestand", WTabWidget::LazyLoading);
    tabbar->addTab(new WTextArea("This is my first tab here"), "Einstellungen", WTabWidget::LazyLoading);
    
    tmpl->bindWidget("navbar", navigation);
    tmpl->bindWidget("tabbar", tabbar);

    root()->addWidget(tmpl);

}
