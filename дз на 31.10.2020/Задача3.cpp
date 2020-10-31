#include <iostream>

using namespace std;

int main() {
    int number;  int max = 0; //подсмотрел, но комменарии уже мои
    cout << "Enter a number: " << ' ';
    cin >> number;
     if (number <= 0){
        cout << "Error spotted";
        return 0;
        }  //проверка числа на натуральность


         while (number > 0) {
             if (number % 10 > max) {
                 max = number % 10;
             }  //процесс нахождения наибольшей цифры и записывание её в мах
             number /= 10;  //отбрасывание цифры для дальнейшего сравнения
         }

         cout << max << ' ' << "is the biggest numeral";

    return 0;
}