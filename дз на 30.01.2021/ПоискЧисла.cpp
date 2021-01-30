#include <iostream>
#include <ctime>

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
    srand(time(0));
    int n, index;
    bool flag = true;
    int *wantedElement = new int;
    List *q0, *q1, *q2;

    q0 = new List;
    q1 = q0;

    cout << "Hello! Enter the amount of numbers you want to enter: ";
    cin >> n;

    for (int i = 0; i < n; i++){
        printf("%s%d%s", "Enter the ", i ," number of your list: ");
        cin >> q1 -> value;
        q2 = new List;
        q1 -> p = q2;
        q1 = q2;
        index = i+1;
    }
    printf("%s%d%s", "Enter the ", index ," number of your list: ");
    cin >> q1 -> value;
    q1 -> p = q0;

    do{
//        int k;
//        cout << "input index or 0 to exit" << endl;
//        cin >> k;
//        if(!k){
//            for (int i = 1; i < n; i++){
//                q1 = q2 -> p;
//                delete q2;
//                q2 = q1;
//            }
//            return 0;
//        }
//        getm(k, q0);
        printf("Enter the number you want to find: ");
        scanf_s("%d", &*wantedElement);

            if (*wantedElement == q1->value || *wantedElement == q2 -> value || *wantedElement == q0 -> value) {//некорректно работает
                flag = true;
            }
            else {
               flag = false;
            }


        if(flag == true){
            cout << "We found your wanted number and its number: " << index << ". "<< "Bye!" << endl;
            delete wantedElement;
            return 0;
        }
        else{
            printf("We haven't found the number you wanted. Bye!\n");
            delete wantedElement;
            return 0;
        }
    }while(true);
}