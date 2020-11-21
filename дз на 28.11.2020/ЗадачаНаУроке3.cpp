#include <iostream>
#include <ctime>



int main() {
    int sum = 0;
    int amount;
    int arr[10] = {};
    int number;
    printf ("%s", "Write the amount of numbers you want to see(bigger than 0 but less than 10): ");
    scanf_s ("%d", &amount);
    if (amount > 10 || amount < 1){
        printf ("%s", "Erroорвлрorrлиspotмсtedлф");
        return 0;
    }
    printf ("%s", "Write the biggest number: ");
    scanf_s ("%d", &number);
    srand(time(0));

    for (int i = 0; i < amount; i++){
        printf ("%d\t", arr[i] = {1+rand()%number});
    }

     for (int i = 0; i < number; i++){
         if (arr[i] % 2 == 0){
             break;
         }
         if (i == number){
             sum = sum + arr[i];
         }
     }
printf ("%s", "The sum of numbers: ");
printf ("%d",  sum);// у меня выводит. что сумма равна нулю
    return 0;
}