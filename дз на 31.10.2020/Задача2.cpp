#include <iostream>

using namespace std;

int main() {
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;
    if (number <= 0){ //проверка чисел на натуральность, т.к. только нат числа могут быть простыми
        cout << "Error spotted";
        return 0;
    }
    if (number == 1 || number == 2 || number == 3 || number == 5 || number == 7) //проверка однозначных простых чисел
    {
        cout << number << ' ' << "is a prime number";
    }


     else {
        if (number % 2 == 0 || number % 3 == 0 || number % 5 == 0 || number % 7 == 0) { //проверка на наличие не простых чисел вообще
            cout << number << ' ' << "is not a prime number";
        } else {
            cout << number << ' ' << "is a prime number";
        }
    }
    return 0;
}