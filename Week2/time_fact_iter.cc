#include <iostream>
#include <iomanip>

#include <chrono>

using namespace std;

int64_t fact(int N)
{
  int result = 1;
  for ( int i =2; i <= N; i++){
    result *= i;
  }
  return result;

}

int main ()
{
  //25 Factorials
  for (int N=0; N<25; ++N)
  {
    auto start = chrono::high_resolution_clock::now();

    int64_t f = fact(N);

    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration<double>(end-start).count();

    cout << "N=" << setw(2) << N << " "
         << "N!=" << setw(18) << f << " "
         << "elapsed=" << scientific << setprecision(6) << elapsed << " [sec]" << endl;
  }

  return 0;
}

