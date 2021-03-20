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
    Struct *q, *q1;
public:
    puk(){
        q1 = new Struct;
        q = q1;
    }
void printnset(){
    q->value = 1+rand()%1000;
     printf("%s%d%s%d", "\nYour ", counter+1," value: ", q->value);
    }

int finding(){
        printf("\nType the number of value you want to find: ");
        scanf_s ("%d", &findnum);
        if (findnum > counter){
            printf("\nError.");
            return 0;
        }
        else{
            for (int i = 0; i < counter; i++) {
                q1 = q -> p;
                if (i == findnum) {// не работает
                    index = i;
                    o = q->value;
                    break;
                }
                q = q1;
            }
            printf("%s%d%s%d", "The ", index," number is: ", o);
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
            action.finding();
        }
        else {
            printf("\nBye.");
            return 0;
        }
    }while(true);
}