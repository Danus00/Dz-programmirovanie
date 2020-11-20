#include <iostream>

void printArr(int arr[], int lenArr = 0);

int main() {
    int arr[2] = { 0, 1 };   
    printf("%s ", "Enter the amount of massives {0,1} you want to be printed: ");
    printArr(arr, sizeof(arr)/4);


    return 0;
}

void printArr(int arr[], int lenArr) {
    int amount = 0;
    scanf_s("%d", &amount);
    for (int a = 0; a < amount; a++) {
        for (int i = 0; i < lenArr; i++) {
            printf("%d ", arr[i]);
        }
    }
}