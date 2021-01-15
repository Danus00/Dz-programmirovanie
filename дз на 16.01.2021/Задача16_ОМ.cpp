#include <iostream>
#include <ctime>

int main() {
    srand(time(0));
    int *ptrArr = new int[10];
    int *biggestNum = new int;
    int *amount = new int;
    int *smallestNum = new int;
    printf("%s", "Enter the amount of numbers you want to see in your array: ");
    scanf_s("%d", &*amount);

    printf("%s", "Enter the biggest number of your array: ");
    scanf_s("%d", &*biggestNum);

    printf("%s", "Enter the smallest number of your array(below 0): ");
    scanf_s("%d", &*smallestNum);
            if (*smallestNum > 0){
                printf("\nError");
                return 0;
            }
printf("Here is your array: \n");
    for (int i = 0; i < *amount; i++){
        ptrArr[i] = *smallestNum + rand() % *biggestNum;
        printf("%d ", ptrArr[i]);
    }
    printf("\nUpdated array: ");
    for (int i = 0; i < *amount; i++){
        printf("%d ", ptrArr[i]);
        if (ptrArr[i] < 0){
            ptrArr[i] = -ptrArr[i];
            printf("(%d) ", ptrArr[i]);
        }
    }

    delete [] ptrArr;
    delete biggestNum;
    delete amount;
    delete smallestNum;
    return 0;
}