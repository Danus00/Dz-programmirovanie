#include <iostream>

using namespace std;

int main() {
 int var= 0; int directionOne = 0; int directionTwo = 0; int directionThree = 0;

 cout << "Please, choose the site of the world, using following tips: 11 for North, 12 for West, 13 for South, 14 for East: ";
 cin >> var;
    if (var !=11 && var != 12 && var !=13 && var != 14) {
     cout << "ERROR!" << endl;
     return 0;
    }

    cout << "Now, choose the direction, using following tips: 0 for straight, -1 for right, 1 for left. Remember you can choose only three:  " << endl;
    cin >> directionOne;

        if (directionOne != 0 && directionOne != 1 && directionOne != -1) {
        cout << "ERROR!" << endl;
        return 0;
        }
    cin >> directionTwo;

        if (directionTwo != 0 && directionTwo != 1 && directionTwo != -1) {
        cout << "ERROR!" << endl;
        return 0;
        }

    cin >> directionThree;

        if (directionThree != 0 && directionThree != 1 && directionThree != -1) {
        cout << "ERROR!" << endl;
        return 0;
        }

    cout << "wait, initializing direction..." << endl;
        
    if (var + directionOne + directionTwo + directionThree == 11) {
        cout << "Current direction: North" << endl;
    }
    if (var + directionOne + directionTwo + directionThree == 12) {
        cout << "Current direction: West" << endl;
    }
    if (var + directionOne + directionTwo + directionThree == 13) {
        cout << "Current direction: South" << endl;
    }
    if (var + directionOne + directionTwo + directionThree == 14) {
        cout << "Current direction: East" << endl;
    }
    if (var + directionOne + directionTwo + directionThree == 8) {
        cout << "Current direction: West" << endl;
    }
    if (var + directionOne + directionTwo + directionThree == 17) {
        cout << "Current direction: South" << endl;
    }
    if (var + directionOne + directionTwo + directionThree == 9) {
        cout << "Current direction: South" << endl;
    }
    if (var + directionOne + directionTwo + directionThree == 10) {
        cout << "Current direction: East" << endl;
    }
    if (var + directionOne + directionTwo + directionThree == 15) {
        cout << "Current direction: North" << endl;
    }
    if (var + directionOne + directionTwo + directionThree == 16) {
        cout << "Current direction: West" << endl;
    }





    return 0;
}