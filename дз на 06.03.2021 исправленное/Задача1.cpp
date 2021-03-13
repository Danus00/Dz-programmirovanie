#include <iostream>
#include <ctime>

class hzkaknazvat {
private:
        int value1;
        int value2;

public:
    hzkaknazvat() {
       value1 = 1+rand()%1000;
       value2 = 1+rand()%1000;

    }

    void printsum (){
        printf("%s%d\n", "The first number: ", value1);
        printf("%s%d\n", "The second number: ", value2);
        printf("%s%d\n", "The sum of those two numbers: ", value1+value2);
    }
};

int main() {
    srand(time(0));
    do {
        hzkaknazvat oaoa = hzkaknazvat();
        int button;
        printf ("\nType 1 or any other number to exit programme: ");
        scanf_s("%d", &button);
        if(button == 1) {
            oaoa.printsum();
        }
        else{
            printf("\nBye.");
            return 0;
        }
    } while (true);
}