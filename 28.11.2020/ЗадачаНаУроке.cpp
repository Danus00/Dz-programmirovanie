#include <iostream>
#include <ctime>

int main() {

int n = 0;
int bN = 0;
int buf = 0;

    printf ("%s", "Type the amount of numbers you want to see (above 0 but below 10): ");
    scanf_s ("%d", &n);
        if (n < 0 || n> 10){
        printf("Error");
        return 0;
        }


    printf ("%s ", "Type the biggest number, but below 10: ");
    scanf_s ("%d", &bN);
        if (bN > 10 || bN < 0){
            printf("Error");
            return 0;
        }

int arr[10] = {};

    srand (time(0));

    printf("%s", "Here is your array: ");

        for (int i = 0; i < n; i++ ) {
        printf("%d ", arr[i] = {1 + rand() % bN});
        }
        
        for (int i = 0; i < n; i++ ) {
            for (int a = 0; a < n - 1; a++ ){
                if (arr[a] > arr[a+1]){
                buf = arr [a];
                arr[a] = arr[a+1];
                arr[a+1] = buf;
                }
            }
        }

    printf("\n%s", "Po vozrastsaniu:");

    for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
    }


    return 0;
}