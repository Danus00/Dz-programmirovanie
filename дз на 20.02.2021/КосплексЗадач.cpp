#include <iostream>


int n;

struct List{
    int value;
    List *p;
};

void searchNum(List *q){
    bool flag;
    int wantedElem, index;
    printf("Enter the element you want to find: ");
    scanf_s ("%d", &wantedElem);
    List *f, *f1;
    f = q;

    for (int i = 0; i < n; i++){
        f1 = f -> p;
        if (wantedElem == f -> value){
            flag = true;
            index = i;
            break;
        }
        else {
            flag = false;
        }
        f = f1;
    }

    if(flag == true){
        printf ("%s%d%s%d\n", "The number ", wantedElem, " was found and its number is: ", index);
    }
    else if (flag == false){
        printf ("%s%d%s\n", "The number ", wantedElem, " wasn't found in the list");
    }
}

void printList(List *q){
    List *t, *t1;
    t = q;
    for (int i = 0; i < n; i++){
        t1 = t -> p;
        std::cout << i << " value = " << t -> value << std::endl;
        t = t1;
    }
}

void deletingElem(int k, List *q){
    List *e, *e1;
    e = q;
    for (int i = 0; i < n; i++){
        e1 = e -> p;
        if (i == k){
            printf("");

        }
        else {
            std::cout << i << " value = " << e->value << std::endl;
        }
        e = e1;
    }
    delete e;
}

void getm (int k, List *q){
    List *t, *t1;
    t = q;
    for(int i = 0; i < k; i++){
        t1 = t -> p;
        t = t1;
    }
    std::cout << "value = " << t -> value << std::endl;
}

int sorting(List *q){ //не совсем получилась
    List *y, *y1;
    y = q;
    int buf, button;
            int arr[10];
    printf("Type 1 to begin sorting or any other number to exit: ");
    scanf_s("%d", &button);
    if (button == 1){
        for (int i = 0; i < n; i++){
            y1 = y -> p;
            arr[i] = y -> value;
            y = y1;
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n - 1; j++){
                if(arr[j] > arr[j + 1]) {
                    buf = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = buf;
                }
            }
        }
        for(int i = 0; i < n; i++){
            printf("%d", arr[i]);
        }
    }
    else if(button !=1){
        printf("Error");
        return 0;
    }
}

int main() {


    List *q0, *q1, *q2;

    q0 = new List;
    q1 = q0;

    std::cout << "Type the amount of numbers you want to see: ";
    std::cin >> n;
    std::cout << "Type the elements of your list: ";
    for (int i = 1; i < n; i++) {
        std::cin >> q1->value;
        q2 = new List;
        q1->p = q2;
        q1 = q2;
    }
    std::cin >> q1->value;
    q1->p = q0;
    printList(q0);
    do {
        int k;
        printf("Enter, which number of the list you want to delete or 0 to exit: ");
        std::cin >> k;
        if (k == 0) {
            for (int i = 1; i < n; i++) {
                q1 = q2->p;
                delete q2;
                q2 = q1;
            }
            return 0;
        }
        searchNum(q0);
        deletingElem(k, q0);
//      getm(k, q0);
      sorting(q0);
    } while (true);
}