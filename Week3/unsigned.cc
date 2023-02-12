#include <iostream>

using namespace std;

int main ()
{
  uint32_t x = 0;

  cout << "initially:" << endl;
  cout << "  x = " << x << endl;

   x  |= 2695506604;
  ///////////////////////////////////
  // SET THE APPROPRIATE BITS HERE //
  ///////////////////////////////////

  cout << "after setting bits:" << endl;
  cout << "  x = " << x << endl;
  
  x ^= 1<<3;
  ///////////////////////
  // TOGGLE BIT 3 HERE //
  ///////////////////////

  cout << "after first bit 3 toggle:" << endl;
  cout << "  x = " << x << endl;

  x ^= 1<<3;
  //////////////////////////////////////
  // REPEAT YOUR PREVIOUS ACTION HERE //
  //////////////////////////////////////

  cout << "after second bit 3 toggle:" << endl;
  cout << "  x = " << x << endl;
  
  x &= ~(1<<7);
  //////////////////////
  // CLEAR BIT 7 HERE //
  //////////////////////

  cout << "after clearing bit 7:" << endl;
  cout << "  x = " << x << endl;
  
  x &= ~(16<<31);
  ///////////////////////////
  // CLEAR BITS 16-31 HERE //
  ///////////////////////////

  cout << "after clearing bits 16-31:" << endl;
  cout << "  x = " << x << endl;
}

