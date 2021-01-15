#include <iostream>
#include <ctime>

int main() {
    srand(time(0));
int *buf = new int;
int *ptrArr = new int[10];
int *biggestNum = new int;
int *amount = new int;
int *k = new int;
int *n = new int;
printf("%s", "Enter the amount of numbers you want to see in your array: ");
scanf_s("%d", &*amount);

printf("%s", "Enter the biggest number of your array: ");
scanf_s("%d", &*biggestNum);

for (int i = 0; i < *amount; i++){
    ptrArr[i] = 1 + rand() % *biggestNum;
    printf("%d ", ptrArr[i]);
}

printf("\n%s", "Now enter, from which element you want to delete elements of array: ");
scanf_s("%d", &*k);
printf("%s\n", "Enter, how many elements you want to delete: ");
scanf_s("%d", &*n);
            if ( *k + *n > *amount){
                printf("%s", "Error. There are too many numbers you want to delete.");
                return 0;
            }
for (int i = *k; i < *n + *k; i++){
ptrArr[i] = 0;//я сдался и занулил
}
    for (int i = 0; i < *amount; i++){
        printf( "%d ", ptrArr[i]);
    }

delete buf;
delete biggestNum;
delete amount;
delete [] ptrArr;
delete k;
delete n;
    return 0;
}