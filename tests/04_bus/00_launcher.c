#include "../tests.h"

int bus_test(void);

int bus_launcher(void)
{
    t_unit_test *testlist;

    testlist = NULL;
    load_test(&testlist, "BUS test", &bus_test);
    return (launch_tests(&testlist));
}