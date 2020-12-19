#include <iostream>

int main() {
int arr[10] = {};
int amount = 0;
int biggestNum = 0;
int number = 0;
int a = 0;
    printf ("%s", "Hello, write the amount of elements you want to see (from 0 to 15): ");
    scanf_s ("%d", &amount);
                if (amount < 0 || amount > 15){
                printf ("Error");
                return 0;
                }

    printf ("Ok, then, write the biggest number of your element(from 0 to 30): ");
    scanf_s("%d", &biggestNum);
                if (biggestNum < 0 || biggestNum > 30){
                printf ("Error");
                return 0;
                }
    printf("%s", "Type elements of your array: ");

    for (int i = 0; i < amount; i++){
        scanf_s ("%d", &arr[i]);
        if (arr[i] > biggestNum){
            printf ("%s%d", "Stop! You typed that your biggest number is ", biggestNum);
            return 0;
        }
        if (arr[i] < 0){
            printf ("%s", "Stop! element must be bigger than 0");
            return 0;
        }
    }

    printf ("Ok, here is your array: ");
    for (int i = 0; i < amount; i++){
    printf ("%d ", arr[i]);
    }


        printf("%s", "\nNow, type the number of element you want to check:");
        scanf_s("%d", &a);
            if (a > amount) {
                printf("%s", "Error");
                return 0;
            }
        number = a - 1;


        if (arr[number] > arr[number+1] && arr[number] > arr[number-1]){
          printf ("%d%s", arr[number], " is the local maximum");
        }
        else{
          printf ("%d%s", arr[number], " is not the local maximum");
        }

    return 0;
}