#include <iostream>
#include <limits.h>

using namespace std;

int main ()
{
  {

    signed long s = 0;
    unsigned long  u = 0;
    ///////////////////////////////////
    // CREATE SIGNED,UNSIGNED 32-BIT //
    // INTEGERS NAMED s,u AND        //
    // INITIALIZE THEM TO ZERO       //
    ///////////////////////////////////


    cout << "32-bit before decrement:" << endl;
    cout << "  signed:   " << s << endl;
    cout << "  unsigned: " << u << endl;

    s--;
    u--;
    ///////////////////
    // DECREMENT s,u //
    ///////////////////


    cout << "32-bit after decrement:" << endl;
    cout << "  signed:   " << s << endl;
    cout << "  unsigned: " << u << endl;
  }

  {
    signed short s = INT16_MAX;
    unsigned short u = INT16_MAX;

    ///////////////////////////////////
    // CREATE SIGNED,UNSIGNED 16-BIT //
    // INTEGERS NAMED s,u AND        //
    // INITIALIZE THEM TO MAXIMUMS   //
    ///////////////////////////////////


    cout << "16-bit before increment:" << endl;
    cout << "  signed:   " << s << endl;
    cout << "  unsigned: " << u << endl;

    s++;
    u++;

    ////////////////////////
    // INCREMENT s,u HERE //
    ////////////////////////


    cout << "16-bit after increment:" << endl;
    cout << "  signed:   " << s << endl;
    cout << "  unsigned: " << u << endl;
  }
}

