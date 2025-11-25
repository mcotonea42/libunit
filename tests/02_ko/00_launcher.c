#include "../tests.h"

int ko_test(void);

int ko_launcher(void)
{
    t_unit_test *testlist;

    testlist = NULL;
    load_test(&testlist, "Basic KO", &ko_test);
    return (launch_tests(&testlist));
}