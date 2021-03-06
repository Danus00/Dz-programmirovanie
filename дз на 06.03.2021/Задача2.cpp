#include <iostream>
#include <ctime>

using namespace std;
int oaoa;

class Stacks{
private:
    struct Stack{
        int value{};
        Stack *p{};
        int count = 0;
    };

    Stack *q, *q1, *qRemove{};

public:
    Stacks(){
        q1 = new Stack;
        q1->p = nullptr;
        q = q1;
    }

    void push(int value){
        if (q1->count == 0){
            q1->value = value;
            q1->count++;
            printf ("%d", q->value);
        }
        else {
            q1 = new Stack;
            q1->value = value;
            q1->p = q;
            q1->count++;
            q = q1;
        }
    }

    int pop(){
        qRemove = q;
        int buf = q->value;
        q = q->p;
        if (q == nullptr){
            cout << "Stack empty." << endl;
            return buf;
        }
        else {
            delete qRemove;
            return buf;
        }
    }

    void peek(){
        q->value = q->value + oaoa;
        printf("%d", q->value);
    }

};

int main() {
    srand(time(0));
Stacks stack = Stacks();
printf("Hello\n");
printf("Now, computer'll generate any number from 1 to 1000: ");
stack.push(rand()%100);
do{
    printf("\nType 1,-1 or any else number to exit the programme: ");
    scanf_s("%d", &oaoa);
    if(oaoa == 1 || oaoa == -1){
        stack.peek();
    }
    else {
        printf("Bye");
        return 0;
    }
}while(true);
}