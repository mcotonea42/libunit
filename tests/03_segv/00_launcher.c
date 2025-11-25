#include "../tests.h"

int segv_test(void);

int segv_launcher(void)
{
    t_unit_test *testlist;

    testlist = NULL;
    load_test(&testlist, "SEGV test", &segv_test);
    return (launch_tests(&testlist));
}