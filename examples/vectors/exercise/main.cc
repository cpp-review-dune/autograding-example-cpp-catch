#include <vector>
// #include "summation.hh"
#include "info.cc"

int main()
{
  std::vector<long> theta;
  std::vector<long> alpha={1,2,3};
  std::vector<long> beta(100); // round parentheses, not square brackets!
  std::cout<<alpha[0]<<std::endl;
  std::cout << theta.size();

  // std::cout << summation(3, 2) << std::endl;

  utsname result; // declare the variable to hold the result

  uname(&result); // call the uname() function to fill the struct

  std::cout << result; // show the result using the helper function

  return 0;
}
