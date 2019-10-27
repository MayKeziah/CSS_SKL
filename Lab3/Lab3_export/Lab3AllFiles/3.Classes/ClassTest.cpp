#include <iostream>
#include "Square.h"
#include "SquareContainer.h"

using namespace std;

int main (int argc, char * const argv[]) {
   SquareContainer c;
   
   for (int i = 0; i < 20; i++) {
      Square s;
      s.setSize(i);
      c.insertNext(s);
   }
   SquareContainer d(c); // copy

   // Test Square Container << overload (also tests Square <<)
   cout << c;

   // Use assignment operator
    SquareContainer e = d; // assignment
    // Test Square << overload & assignment overload
    // Corrected numbering as it was reporting square count from the end.
    // TODO: understand "warning: dynamic exception specifications are deprecated in C++11 [-Wdeprecated]"
    try {
      for (int i = 19; i > -1; i--) {
//         cout << "Square " << i << " size is " << c.deleteLast().getSize() << endl;
         cout << "Square " << i << " of C " << c.deleteLast();
         cout << " of E " << e.deleteLast() << endl;


      }
   }
   catch (SquareContainerException sqe) {
      cerr << sqe.what() << endl;
   }

   
   
    return 0;
}
