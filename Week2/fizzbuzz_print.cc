#include <iostream>

using namespace std;

void fizzbuzz(int n)
{
  if(n%3 == 0 && n%5 == 0){
    cout << "FizzBuzz" << endl;
  } else if (n%3 == 0) {
    cout << "Fizz" << endl;
  } else if (n%5 == 0){
    cout << "Buzz" << endl;
  } else {
    cout << n << endl;
  }
}


int main ()
{
  for (int n=1; n<=50; ++n)
  {
    fizzbuzz(n);
  }
  return 0;
}

