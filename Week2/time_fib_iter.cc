#include <iostream>
#include <iomanip>

#include <chrono>

using namespace std;

int fib(int N)
{
  int n1 =0;
  int n2 =1;
  int n3;
  for (int i = 0; i < N; i++){
    n3 = n1+n2;
    n1 = n2;
    n2 = n3;
  }
  return n1;
}

int main ()
{
  for (int N=0; N<45; ++N)
  {

    auto start = chrono::high_resolution_clock::now();

    int f = fib(N);

    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration<double>(end-start).count();

    cout << "N=" << setw(2) << N << " "
         << "F(N)=" << setw(10) << f << " "
         << "elapsed=" << scientific << setprecision(6) << elapsed << " [sec]" << endl;
  }

  return 0;
}

