#include <iostream>
#include <concepts>
using namespace std;

template <typename T>
requires integral<T>
T add( T a, T b){
  return a + b;
}

int main()
{
  cout << "Hello from C++ on windows" << endl;
  cout << "The sum is: " << add(7, 3) << endl;
  return 0;
}
