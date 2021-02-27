#include <iostream>
#include <ctime>

int modNum;
int amount = 1;

struct List {
    int value;
    List *p;
};

void printList(List *q) {//с выводом шляпа получилась
    List *t, *t1;
    t = q;
    for (int i = 0; i < amount; i++){
        t1 = t -> p;
        printf ("%d\n", t -> value);
        delete t1;
        t = t1;
    }
}

int main()
{
    srand(time(0));
    List *q0, *q1, *q2;
    q0 = new List;
    q1 = q0;
    int button;
    int number;
    int sqrtNum;

     do {
         printf("%s\n", "Enter 1 to begin modifying your number, 2 to print the list and to shut down the programme or any else number to shut down the programme: ");
         scanf_s("%d", &button);
         if (button == 1) {
             printf("%s", "Generated number: ");
             number = 0 + rand();
             printf("%d\n", number);
             sqrtNum = number*number;
             printf("Modified number: ");
             modNum = sqrtNum/100;//я обросил два числа с конца
             printf("%d\n", modNum);
             q1 -> value = modNum;
             q2 = new List;
             q1 -> p = q2;
             q2 = q1;
             amount++;
         }
         else if(button == 2){
             printList(q0);
             printf("\nBye!");
             return 0;
         }
         else if (button != 1) {
             for (int i = 1; i < amount; i++) {
                 q1 = q2->p;
                 delete q2;
                 q2 = q1;
             }
             printf("Bye");
             return 0;
         }
    } while (true);
}
