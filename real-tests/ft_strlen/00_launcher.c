#include "../real_tests.h"

int strlen_basic_test(void);
int strlen_null_test(void);

int strlen_launcher(void)
{
    t_unit_test *testlist;

    testlist = NULL;
    load_test(&testlist, "Basic test", &strlen_basic_test);
    load_test(&testlist, "NULL test", &strlen_null_test);
    return (launch_tests(&testlist));
}