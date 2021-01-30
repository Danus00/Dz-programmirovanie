#include <iostream>

using namespace std;

struct List{
    int value;
    List *p;
};

void getm(int wantedElement, List *q, int index){
    List *t, *t1;
    t = q;
    for(int i = 0; i < index; i++){
        t1 = t -> p;
        t = t1;
    }
    if(wantedElement == t -> value){
        printf("%s%d%s", "The number ", wantedElement, " is found\n");
    }
    else{
        printf("The number you wanted isn't found\n");
    }
}

int main(){
    int n;
    List *q0, *q1, *q2;

    q0 = new List;
    q1 = q0;

    cout << "Type the amount of numbers you want to see: ";
    cin >> n;
    printf("Enter the numbers you want: ");
    for (int i = 0; i < n; i++){
        cin >> q1 -> value;
        q2 = new List;
        q1 -> p = q2;
        q1 = q2;
    }
    cin >> q1 -> value;
       q1 -> p = q0;
    do{
        int k, index;
        printf("Press 1 to continue or any other number to exit: ");
        scanf_s("%d", &k);
        if(k != 1){
            for (int i = 1; i < n; i++){
                q1 = q2 -> p;
                delete q2;
                q2 = q1;
            }
            return 0;
        }
        else if(k == 1) {
            int wantedElement;
            cout << "Type the element you want to find: " << endl;
            scanf_s("%d", &wantedElement);
            cout << "Now, type its index: " << endl;
            scanf_s("%d", &index);
            getm(wantedElement, q0, index);
        }
    }while(true);
}