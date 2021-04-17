// https://en.cppreference.com/w/cpp/container/vector/insert
#include <iostream>
#include <vector>
 
void print_vec(const std::vector<int>& vec)
{
    for (auto x: vec) {
         std::cout << ' ' << x;
    }
    std::cout << '\n';
}
 
int main ()
{
    std::vector<int> vec(3,100);
    print_vec(vec);
 
    auto it = vec.begin();
    it = vec.insert(it + 1, vec[0]);
    print_vec(vec);
 
    vec.insert(it,2,300);
    print_vec(vec);
 
    // "it" no longer valid, get a new one:
    it = vec.begin();
 
    std::vector<int> vec2(5,400);
    // print_vec(vec2);
    vec.insert(it+2, vec2.begin(), vec2.end());
    print_vec(vec);
 
    int arr[] = { 501,502,503,504,505 };
    vec.insert(vec.begin(), arr+1, arr+4);
    print_vec(vec);

    std::vector<int> beta(100);
    print_vec(beta);
    beta[99] = 23;
    print_vec(beta);

}