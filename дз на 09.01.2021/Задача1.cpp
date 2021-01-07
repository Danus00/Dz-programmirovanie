#include <iostream>
#include <ctime>
#include <algorithm>

int main() {
int *arr = new int[10];
int maxEven, minNEven, index1, index2, biggestNum, amount;//не совсем корректно работает
srand(time(0));
printf("%s", "Enter the amount of numbers you want to see in your array: ");
scanf_s("%d", &amount);

printf("%s", "Enter the biggest number of your array: ");
scanf_s("%d", &biggestNum);

printf("%s", "Here is your array: ");
for(int p = 0; p < amount; p++){
    arr[p] = 1 + rand() % biggestNum;
    printf(" %d ", arr[p]);
}

printf("\n%s", "Wait, we're sorting your array... ");

maxEven = 0;
for (int i = 0; i < amount; i++){
    if (arr[i] > maxEven && arr[i] % 2 == 0){
        maxEven = arr[i];
        index1 = i;
    }
}
if (maxEven == 0){
    printf("\n%s\n", "Not found biggest even number.");
    delete [] arr;
    return 0;
}
else {
    printf("\n%s%d", "The biggest even number: ", maxEven);
}

minNEven = 0;
for (int k = 0; k < amount; k++ ){
    std::sort(arr, arr+amount);
    if (arr[k] %2 != 0 ){
        minNEven = arr[k];
        index2 = k;
        break;
    }
}
if(minNEven == 0){
    printf("\n%s\n", "Not found smallest not even number.");
    delete [] arr;
    return 0;
}
else {
    printf("\n%s%d\n", "The smallest not even number: ", minNEven);
}
std::swap(arr[index1], arr[index2]);
for (int j = 0; j < amount; j++){

    printf(" %d ", arr [j]);
}
    return 0;
}