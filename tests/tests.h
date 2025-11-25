#ifndef TESTS_H
# define TESTS_H

#include "../framework/libunit.h"

int ok_launcher(void);
int ko_launcher(void);
int segv_launcher(void);
int bus_launcher(void);

#endif