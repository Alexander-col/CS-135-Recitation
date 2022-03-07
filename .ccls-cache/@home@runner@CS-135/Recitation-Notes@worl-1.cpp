#include <iostream>

int main()
{
  int c; 
  c = add2(5,10);
  std::cout << c << "\n";
  return 0;
}

int add2(inta, int b);
// this is a "signature" for function add 
// Can write as: int add 2 (int, int);
// or can use other param names if we want 
// but it's usually a cut and past from the function name 
// with the ; at the end 