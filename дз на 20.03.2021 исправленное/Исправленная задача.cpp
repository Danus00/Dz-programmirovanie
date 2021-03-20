#include <iostream>
#include <ctime>

int counter = 0;
int findnum;
int index;
int o;

class puk{
private:
    struct Struct{
        int value{};
        Struct *p{};
    };
    Struct *q0, *q, *q1;
public:
    puk(){
        q0 = new Struct;
        q = q0;
    }
void printnset(){
    q->value = 1+rand()%1000;
    printf("%s%d%s%d", "\nYour ", counter+1," value: ", q->value);
    q1 = new Struct;
    q -> p = q1;
    q = q1;
    }

int finding(){
        printf("\nType the number of value you want to find: ");
        scanf_s ("%d", &findnum);
        if (findnum <= counter) {
            for (int i = 1; i < counter; i++) {
                q = q0 -> p;
                if (i == findnum) {
                    index = i;
                    o = q0 -> value;
                    break;
                }
                q0 = q;
            }
            return o;
        }
        else if (findnum > counter){
        printf("\nError.");
        for (int i = 0; i < counter; i++){
            q1 = q -> p;
            delete q;
            q = q1;
        }
        printf("\nAddresses are deleted.");
        return 0;
        }

    }
};


int main() {
    puk action = puk();
    do{
        int button;
        printf("\nType 1 to generate a number, 2 to find the number or any other number to shut down the programme: ");
        scanf_s("%d", &button);
        if (button == 1){
            action.printnset();
            counter++;
            printf("%s%d", "\nThe amount of numbers: ", counter);

        }
        else if(button == 2){
            printf ("\n%s%d%s%d","The ", index, " element is " , action.finding());
        }
        else {
            printf("\nBye.");
            return 0;
        }
    }while(true);
}