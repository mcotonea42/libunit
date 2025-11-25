#include "tests.h"

int main(void)
{
    ok_launcher();
    ko_launcher();
    segv_launcher();
    bus_launcher();

    return (0);
}