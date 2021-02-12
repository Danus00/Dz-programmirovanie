#include <iostream>

using namespace std;

int n;

struct List{
    int value;
    List *p;
};

int deletingElem(List *q){
    //числа записываются в производном порядке, но удаляемого числа уже нет  
     int deleteNum;
     bool flag;
     List *e, *e1;
     e = q;
         printf("Enter, which number of the list you want to delete: ");
         scanf_s("%d", &deleteNum);

     for (int i = 0; i < n; i++){
         e1 = e -> p;
         if ( e -> value == deleteNum){
             flag = true;
             break;
         }
         else{
             flag = false;
         }
         e = e1;
     }
     if (flag == true){
         for(int i = 0; i < n; i++){
             e1 = e -> p;
             if (deleteNum == e -> value){
                 printf("");
             }
             else {
                 cout << i << " value = " << e -> value << endl;
             }
          e = e1;
         }
     }
     else if (flag == false){
         printf("The number you wanted to delete hasn't been found.\n");
         return 0;
     }
}

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
        cout << i << " value = " << t -> value << endl;
        t = t1;
    }
}

void getm (int k, List *q){
    List *t, *t1;
    t = q;
    for(int i = 0; i < k; i++){
        t1 = t -> p;
        t = t1;
    }
    cout << "value = " << t -> value << endl;
}

int main() {


    List *q0, *q1, *q2;

    q0 = new List;
    q1 = q0;

    cout << "Type the amount of numbers you want to see: ";
    cin >> n;
    cout << "Type the elements of your list: ";
    for (int i = 1; i < n; i++) {
        cin >> q1->value;
        q2 = new List;
        q1->p = q2;
        q1 = q2;
    }
    cin >> q1->value;
    q1->p = q0;
    printList(q0);
    do {
        int k;
        cout << "input index or 0 to exit" << endl;
        cin >> k;
        if (!k) {
            for (int i = 1; i < n; i++) {
                q1 = q2->p;
                delete q2;
                q2 = q1;
            }
            return 0;
        }
        searchNum(q0);
        deletingElem(q0);
      getm(k, q0);
    } while (true);
}