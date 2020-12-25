#include <iostream>
#include <ctime>

int main() {
    int m = 0;
    int n = 0;
    int arr[10][10];
    int max[10];
    int index = 0;
    int biggestNum = 0;
    int minMax;//пришлось так назвать)))
    srand(time(0));
    printf("%s", "\nEnter the first argument of matrix(from 0 to 10): ");
    scanf_s("%d", &m);
    if (m < 0 || m > 10) {
        printf("%s", "\nError");
        return 0;
    }

    printf("%s", "\nEnter the second argument of matrix(from 0 to 10): ");
    scanf_s("%d", &n);
    if (n < 0 || n > 10) {
        printf("%s", "\nError");
        return 0;
    }

    printf("%s", "Now, enter the biggest number of matrix(no limit): ");
    scanf_s("%d", &biggestNum);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < 10; j++) {
            arr[i][j] = 1 + rand() % biggestNum;
        }
    }


    printf("%s", "\nHere is your matrix: \n");
    for (int i = 0; i < m; i++) {
        printf("%d: ", i + 1);

        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < m; i++) { //этот этап я подсмотрел
        max[i] = arr[i][0];
        for (int j = 0; j < n; j++) {
            if (arr[i][j] > max[i]) {
                max[i] = arr[i][j];
            }
        }
    }//больше я не подсмтривал)

    for (int k = 0; k < m; k++){//это для удобства проверки
        printf ("%s %d %s %d\n","The biggest number of", k+1, "line:", max[k]);
    }

    minMax = max[0];
    for(int p = 0; p < m; p++ ){

        if (max[p] < minMax){
            minMax = max[p];
            index = p;
        }
    }
    printf ("%s %d", "The smallest max number in matrix: ", max[index]);




        printf("%s", "\nHere is your renewed matrix: \n");
        for (int i = 0; i < m; i++) {
            printf("%d %s: ",i + 1, "line");

            for (int j = 0; j < n; j++) {
                arr[index][j] = 0;
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }


        return 0;
    }