#include <iostream>
#include <ctime>

using namespace std;
class Constructor {

private:
    struct constructor{
            int value{};
            constructor *p{};
            int count = 0;
    };
    constructor *q, *q1;

public:
    Constructor(){ //Конструктор, подсмотрел и изменил  не работает(
        q1 = new constructor;
        q1 -> p = nullptr;
        q = q1;
    }

    void setVar(int value){
        if (q1->count == 0){
            q1->value = value;
            q1->count++;
        }
        else {
            q1 = new constructor;
            q1->value = value;
            q1->p = q;
            q1->count++;
            q = q1;
        }
    }

    void getVar(){
        cout << "\nYour number: " << q->value << endl;
    }
    void destructor(){ //Деструктор
        for (int i = 0; i < q-> count; i++){
            q1 = q->p;
            q->value = 0;
            printf("\n%d%s%d%s", i," number: " ,q->value, " -deleted");
            q = q1;
        }
        printf("\nBye");
    }
};
int main(){
    int a;
    srand(time(0));
    printf("Hello\n");
    Constructor objective = Constructor();
do {
    printf("Enter 1 to add new number or any else number to delete all of them and exit programme: ");
    scanf_s("%s", &a);
    if (a == 1){
    objective.setVar(1+rand());
    objective.getVar();
    }
    else {
        objective.destructor();
        return 0;
    }
}while (true);
}