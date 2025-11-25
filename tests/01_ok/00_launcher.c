#include "../tests.h"

int ok_test(void);

int ok_launcher(void)
{
    t_unit_test *testlist;

    testlist = NULL;
    load_test(&testlist, "Basic OK", &ok_test);
    return (launch_tests(&testlist));
}