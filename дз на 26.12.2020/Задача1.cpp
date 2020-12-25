#include <iostream>
#include <ctime>

int main() {
    int m = 0;
    int n = 0;
    int arr[10][10];
    srand(time(0));
    printf("%s", "\nEnter the first argument of matrix(from 0 to 10): ");//Вы говорили, что вывод правильный
    scanf_s ("%d", &m);
                   if (m < 0 || m > 10){
                        printf ("%s", "\nError");
                       return 0;
                   }

        printf("%s", "\nEnter the second argument of matrix(from 0 to 10): ");
        scanf_s ("%d", &n);
                if (n < 0 || n > 10) {
                   printf("%s", "\nError");
                    return 0;
                }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < 10; j++) {
            arr[i][j] = 1 + rand() % 10;
        }
    }


    printf("%s", "\nHere is your matrix: \n");
    for (int i = 0; i < m; i++) {
        printf("%d: ", i + 1);
        if (i % 2 == 0) {
            for (int j = n; j > 0; j--) {
                printf("%d ", arr[i][j]);
            }
        }
        else {
            for (int j = 0; j < n; j++) {
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
}