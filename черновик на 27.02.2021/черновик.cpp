#include <iostream>
#include <ctime>

int modNum;

struct List {
    int value;
    List *p;
};

void printList(List *q) {
    List* t, *t1;
    t = q;
    ;
}

int main()
{
    srand(time(0));
    List *q0, *q1, *q2;
    int button, button1;
    int number;
    int sqrtNum;
    int amount = 0;
    printf("%s", "Generated number: ");
    number = 0 + rand();
    printf("%d\n", number);
    printf("%s\n", "Enter 1 to begin modifying your number or any else number to  shut down the programm: ");
    scanf_s("%d", &button);
 
    if (button == 1) {
       sqrtNum = number*number;
       printf("%d", sqrtNum);
        for (int i = 0; i < 20; i++) {//подсмотрел этот этап
            int oaoa = sqrtNum;
            if (oaoa < 9) {
                modNum = sqrtNum;
            }
            else if (oaoa > 9) {
                int perelit = 1;
                while (oaoa >= 10) {
                    oaoa / 10;
                    perelit *= 10;
                }
                modNum = sqrtNum % perelit;
            }
        }
        printf("%d", modNum);
    }
    else if (button != 1) {
        printf("Bye");
        return 0;
    }
   // do {
     //   bool flag;
      
    //} while (true);
}