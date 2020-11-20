#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    int massive[11] = {};
    printf ("%s\n", "Ya pytalsa dobavit interaktiv, no u menia nie poluchilos, i setlocale nie rabotaet, poetomu tak: ");//не знаю, правильные ли или нет выводит числа
    for (int i = 0; i<11; i++ ){
            if (i == 0 || i%2 == 0){
            massive[11] = i%5;
            }
            else {
            massive[11] = 1;
            }
        printf ("%d\t", massive[11]);
    }



    return 0;
}