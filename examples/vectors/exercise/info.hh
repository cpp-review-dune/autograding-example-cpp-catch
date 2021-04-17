#ifndef INFO_HH
#define INFO_HH

#include <sys/utsname.h>
#include <iostream>

std::ostream &operator<<(std::ostream &os, const utsname &u);
#endif