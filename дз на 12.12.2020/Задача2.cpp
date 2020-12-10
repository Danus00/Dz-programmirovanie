#include <iostream>
#include <ctime>

int main() {
srand(time(0));
    setlocale(LC_ALL, "Russian");//он не работает(((
int arr[10] = {};
int Size = 0;
int biggestNum = 0;
int max;
printf ("%s", "Please, write the amount of numbers you want to see(from 0 to 10): ");
scanf_s ("%d", &Size);
                    if (Size > 10 || Size < 0){
                        printf ("Error");
                        return 0;
                    }
printf ("%s", "Please, write the biggest number in your array (from 0 to 30): ");
scanf ("%d", &biggestNum);
                    if (biggestNum > 30 || biggestNum < 0){
                        printf ("Error");
                        return 0;
                    }
printf ("%s", "Here is your array: ");
for (int numEl = 0; numEl < Size; numEl++){
    arr[numEl] = 1+ rand()%biggestNum;
    printf ("%d ", arr[numEl] );
}
    for (int numEl = 0; numEl < Size; numEl++){
        if (numEl % 2 != 0 && arr[numEl] % 3 == 0){
            max = arr[numEl];
            if (arr[numEl] > max) {
                max = arr[numEl];
            }
        }

    }
    printf ("\n%s%d", "The biggest element of array with not even number and which divides into 3: ", max);
    return 0;
}