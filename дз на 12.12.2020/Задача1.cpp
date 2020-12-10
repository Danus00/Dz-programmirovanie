#include <iostream>
#include <ctime>

void printArr (int *arr, int sizeArr);
void ascendingOrder (int *arr, int Size);


int main() {
    setlocale(LC_ALL, "Russian");// сетлокейл не работает, и у меня не получилось поменять местами
srand (time(0));
const int Size = 1 + rand() % 15;
int arr[12] = {};

printArr(arr, Size);
ascendingOrder (arr, Size);



    return 0;
}

void printArr (int *arr, int sizeArr){
    printf ("%s", "Here is your array:");
    for (int numEl = 0; numEl < sizeArr; numEl++){
        arr[numEl] = 1 + rand() % 30;
        printf(" %d ", arr[numEl]);
    }
}

void ascendingOrder (int *arr, int Size){
    printf("\nIn ascending order: ");
    bool flag1 = false;
    int buf1, maxEven = 0;
    bool flag = false;
    int minNEven = 0;
    for (int i = 0; i < Size; i++){
        for (int buf, j = 0; j < Size - 1; j++){
            if(arr[j] > arr[j + 1]) {
                buf = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = buf;
            }
        }
    }
    for (int i = 0; i < Size; i++) {
        printf("%d ", arr[i]);
    }
    //поиск чётного числа
        for (int i = 0; i < Size; i++) {
        if (arr[i] % 2 == 0) {
            flag = true;
            maxEven = arr[i];
            if (arr[i] > maxEven) {
                maxEven = arr[i];
            }
        }
    }
        if (!flag) {
        printf("%s", "\nNot found any even numbers");
        for (int numEl = 0; numEl < Size; numEl++){
                arr[numEl] = 0;
                printf("\nHere is your modified array: ");
                printf(" %d ", 0);
            }
    }
        else {
        printf("%s %d", "\nThe biggest even element of array: ", maxEven);
    }
    //поиск нечётного числа
        for (int i = 0; i < Size; i++) {
            if (arr[i] % 2 != 0) {
                flag1 = true;
                minNEven = arr[i];
                break;
            }
        }
        if (!flag1) {
            printf("%s", "\nNot found any not even numbers");
            for (int numEl = 0; numEl < Size; numEl++){
                arr[numEl] = 0;
                printf("\nHere is your modified array: ");
                printf(" %d ", 0);
            }

        }
        else {
            printf("%s %d", "\nThe smallest not even element of array: ", minNEven);
            printf("\nHere is your modified array: ");
            for (int i = 0; i < Size; i++) {
                buf1 = maxEven;
                minNEven = maxEven;
                buf1 = minNEven;
                printf(" %d ", arr[i]);
            }
        }
}