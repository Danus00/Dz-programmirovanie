#include <iostream>

using namespace std;

struct List{
    int value;
    List *p;
};

void getm(int k, List *q){
    List *t, *t1;
    t = q;
    for(int i = 0; i < k; i++){
        t1 = t -> p;
        t = t1;
    }
    cout << "value = " << t -> value << endl;
}

int main(){
    int *arr = new int[10];
    int *amount = new int;
    int n;
    List *q0, *q1, *q2;

    q0 = new List;
    q1 = q0;

    cout << "Type the amount of numbers you want to see: ";
    cin >> n;
    *amount = 0;
    printf("Enter the numbers you want: ");
    for (int i = 0; i < n; i++){
        cin >> q1 -> value;
        q2 = new List;
        q1 -> p = q2;
        q1 = q2;
        *amount = n;
        arr[i] = q1 -> value;
    }
    //   q1 -> p = q0;
    printf("There are your numbers: ");//некорректно выводит
    for (int i = 0; i < *amount; i++){
        printf("%d ", arr[i]);
    }
    std::sort(*arr, *arr+*amount);//почему-то не видит команду
    for (int i = 0; i < *amount; i++){
        printf("%d ", arr[i]);
    }

    delete amount;
    delete[] arr;
    return 0;
}