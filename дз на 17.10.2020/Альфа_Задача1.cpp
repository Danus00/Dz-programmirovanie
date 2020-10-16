#include <iostream>

using namespace std;


int main() {

   int var= 0 , var1= 0 , var2= 0 , var3= 0;
   cout << "enter var: ";
   cin >> var;
   cout << "enter var1: ";
   cin >> var1;
   cout << "enter var2: ";
   cin >> var2;
   cout << "enter var3: ";
   cin >> var3;
   if (var % 2 == 0 || var1 % 2 == 0 || var2 % 2 == 0 || var3 % 2 == 0 ) {
       if (var > var1 && var > var2 && var > var3) {
           cout << var << "is the biggest even number" << endl;
       }
       if (var1 > var && var1 > var2 && var1 > var3) {
           cout << var1 << "is the biggest even number" << endl;
       }
       if (var2 > var1 && var2 > var && var2 > var3) {
           cout << var2 << "is the biggest even number" << endl;
       }
       if (var3 > var1 && var3 > var2 && var3 > var) {
           cout << var3 << " is the biggest even number" << endl;
       }
   }

   else {
            cout << "not found" << endl;
        }



   return 0;
}