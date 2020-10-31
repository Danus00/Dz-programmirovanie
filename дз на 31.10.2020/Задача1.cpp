#include <iostream>

using namespace std;

int main() {
    for ( int numberOne = 0; numberOne < 10; numberOne++  ){
        for ( int numberTwo = 0; numberTwo < 10; numberTwo++){
            if (numberOne == numberTwo ){
                cout << 0;
            }
            else {
                cout << 1;
            }
            cout << ' ';
        }
        cout << endl;
    }

    return 0;
}
