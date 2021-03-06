#include <iostream>

using namespace std;

class Stacks{
private:
    struct Stack{
        int value{};
        int value1{};
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

    void push(int value, int value1){
        if (q1->count == 0){
            q1->value = value;
            q1->value1 = value1;
            q1->count++;
        }
        else {
            q1 = new Stack;
            q1->value = value;
            q1->value1 = value1;
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
        if (q->value > q->value1) {
            cout << q->value << " is the biggest among these numbers" << endl;
        }
        else {
            cout << q->value1 << " is the biggest number among these numbers" << endl;
        }
    }
    void peek1(){
        cout << q->value << "+" << q->value1 << "=" << q->value+q->value1 << endl;
    }
};

int main() {
    Stacks stack = Stacks();
    srand(time(0));
    for (int i = 0; i < 10; i++){
        stack.push(rand()%50, rand()%50);
    }

    cout << "start" << endl;
    for (int i = 0; i < 10; i++){
        cout << stack.pop() << endl;
        stack.peek1();
        stack.peek();
    }
    printf("Sum of random numbers, shown earlier: ");
    return 0;
}