#include <iostream>

using namespace std;

int main() { int dayNumer = 1; float distance = 10;
   for ( ; dayNumer <= 10; dayNumer++) {

       for (; distance <= 80; distance = distance * 1.1) {
           cout << dayNumer++ << ' ' << "days" << ' ' << distance << ' ' << "kilometres" << endl;
       }
   }
  cout << "^ This amount of days sportsman spent skiing, to reach about 80 km per day." << endl;

    return 0;
}
