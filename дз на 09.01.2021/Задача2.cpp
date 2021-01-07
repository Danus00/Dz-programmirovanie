#include <iostream>
#include <ctime>

int main() {//некорректно работает
srand (time(0));
int arr[10] = {};
int biggestNum, amount, buf;
printf("\n%s","Type the amount of numbers you want to see: ");
scanf_s("%d",&amount);

printf("\n%s","Type the biggest number of the array: ");
scanf_s("%d",&biggestNum);

printf("\n%s\n","Here is your array: ");
for (int i = 0; i < amount; i++){
    arr[i] = 1 + rand()%biggestNum;
    printf(" %d ", arr[i]);
}

printf("\n%s\n","Mixing... ");
    for(int i = 0; i < amount; i++){
        for(int j = 0; j < amount - 1; j++){
                buf = arr[j];
                arr[j] = arr[1 + rand() % amount];
                arr[1 + rand() % amount] = buf;
        }
        printf(" %d ", arr[i]);
    }
    return 0;
}