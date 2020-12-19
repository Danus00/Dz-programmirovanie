#include <iostream>
#include <ctime>

int main() {
int arr[10] = {};
srand (time(0));
int size = 0;
int biggestNum = 0;
int k = 5;
int buf = 0;
printf("%s", "Hello, type the amount of numbers you want to see(from 0 to 10): ");
scanf_s ("%d", &size);
            if (size < 0 || size > 10){
                printf("Error");
                return 0;
            }

printf ("\nNow, type the biggest number(from 0 to 30):");
scanf_s ("%d", &biggestNum);
            if (biggestNum < 0 || biggestNum > 30){
                printf ("%s", "Error");
                return 0;
            }

printf ("%s", "\nHere is your array: ");

    for (int numEl = 0; numEl < size; numEl++){
        arr[numEl] = 1+ rand()%biggestNum;
        printf ("%d ", arr[numEl] );
    }

printf("%s", "\nEnter, how many numbers you want to move: ");
scanf_s ("%d", &k);
    if (k > size){
        printf("%s", "Error");
        return 0;
    }

printf("%s", "\nHere is your renewed array: ");//подсмотрел
for (int i = 0; i < k; i++ ){   //k-е число дублируется, заменяется на первое число
    for(int j = size-1; j >= 0; j-- ){
        if (j == size-1){
            buf = arr[size-1];

            arr[j+1] = arr [j];
        }
        else {
            arr[j+1] = arr [j];
        }
        arr[-k] = buf;
    }
}
for(int i = 0; i < size; i++ ) {
    printf(" %d ", arr[i]);
}

    return 0;
}