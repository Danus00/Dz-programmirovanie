#include <iostream>
#include <ctime>

class Nums{
private:
    int *num1 = new int;
    int *num2 = new int;
public:
    Nums(){
        *num1 = 1+rand()%1000;
        *num2 = 1+rand()%1000;
    }

    void print(){
        printf("\n%s%d","The first number: ", *num1);
        printf("\n%s%d","The first number: ", *num2);
    }
    ~ Nums(){
        delete num1;
        printf("\nThe first number deleted");
        delete num2;
        printf("\nThe second number deleted");
    }
};

int main() {
srand(time(0));
Nums nums;
nums.print();
    return 0;
}