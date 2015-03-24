#include <Wt/WApplication>
#include "day_ata_glance.h"

Wt::WApplication *createApplication(const Wt::WEnvironment& env)
{
    return new DayAtaGlance(env);
}

int main(int argc, char **argv)
{
    return Wt::WRun(argc, argv, &createApplication);
}
