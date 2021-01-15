#include <iostream>
#include <ctime>

int main() {
    srand(time(0));
    int *ptrArr = new int[10];
    int *biggestNum = new int;
    int *amount = new int;
    int *k = new int;
    printf("%s", "Enter the amount of numbers you want to see in your array: ");
    scanf_s("%d", &*amount);

    printf("%s", "Enter the biggest number of your array: ");
    scanf_s("%d", &*biggestNum);

    for (int i = 0; i < *amount; i++){
        ptrArr[i] = 1 + rand() % *biggestNum;
        printf("%d ", ptrArr[i]);
    }

    printf("\n%s", "Enter the number you want to add: ");
    scanf_s("%d", &*k);
    ptrArr[-1] = *k;

    for (int i = -1; i < *amount; i++){
        printf("%d ", ptrArr[i]);
    }
    delete biggestNum;
    delete amount;
    delete [] ptrArr;
    delete k;
    return 0;
}