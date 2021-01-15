#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int *k = new int;
    int *n = new int;
    int *biggestNum = new int;

    printf("%s", "Enter the amount of vertical numbers you want to see in your matrix: ");
    scanf_s("%d", &*k);

    printf("%s", "Enter the amount of horizontal numbers you want to see in your matrix(below 10): ");
    scanf_s("%d", &*n);

    int **ptrMat = new int*[10];//этап создания подсмотрел
    for (int i = 0; i < *k; i++){
        ptrMat[i] = new int [10];
    }
    if(*n > 10){
        printf("\n%s", "Error");
        return 0;
    }

    printf("%s", "Enter the biggest number of your matrix: ");
    scanf_s("%d", &*biggestNum);
    printf("\n%s", "Here is your matrix: \n");
    for (int i = 0; i < *k; i++){
        for (int j = 0; j < 10; j++ ){
            ptrMat[i][j] = 1 + rand () % *biggestNum;
        }
    }

    for (int i = 0; i < *k; i++){
        printf("%d: ", i+1);
        for (int j = 0; j < *n; j++ ){
            printf("%d ", ptrMat[i][j]);
        }
        printf("\n");
    }

    printf("Here is your updated matrix: \n");

    for (int i = 0; i < *k; i++){
        printf("%d: ", i+1);
        for (int j = 0; j < *n; j++ ){
            if ( j % 2 != 0){
                ptrMat[i][j] = 0;//сдался
            }
            printf("%d ", ptrMat[i][j]);
        }
        printf("\n");
    }

    delete [] ptrMat;
    delete k;
    delete n;
    delete biggestNum;
    return 0;
}