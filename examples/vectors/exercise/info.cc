#include "info.hh"

std::ostream &operator<<(std::ostream &os, const utsname &u)
{
  return os << "sysname : " << u.sysname << '\n'
            << "nodename: " << u.nodename << '\n'
            << "release : " << u.release << '\n'
            << "version : " << u.version << '\n'
            << "machine : " << u.machine << '\n';
}