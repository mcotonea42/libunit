#include "../../framework/libunit.h"

int bus_test(void)
{
    raise(SIGBUS);
    return (0);
}