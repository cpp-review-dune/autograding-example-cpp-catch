#include <iostream>
#include <vector>

int main()
{
  std::vector<long> alpha={1,2,3};
  std::vector<long> beta(100); // round parentheses, not square brackets!
  std::cout<<alpha[0]<<std::endl;

  return 0;
}
