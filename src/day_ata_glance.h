#include <Wt/WNavigationBar>
#include <Wt/WTabWidget>
#include <Wt/WText>
#include <Wt/WAnchor>
#include <Wt/WLink>
#include <Wt/WBootstrapTheme>
#include <Wt/WTemplate>
#include <Wt/WTextArea>
#include <Wt/WLineEdit>

using namespace Wt;

class DayAtaGlance : public Wt::WApplication
{
public:
    DayAtaGlance(const Wt::WEnvironment& env);

private:
    WNavigationBar  *navigation;
    WTabWidget *tabbar;
    WTemplate *tmpl;
};
