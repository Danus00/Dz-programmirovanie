#include <iostream>
#include <ctime>

int aoao;

class oaoa{
private:
    int value;
public:
    oaoa(){
        value = 1+rand()%1000;
        printf("\n%s%d", "Your number: ", value);
    }

    void kakoytotam(){
        value = value + aoao;
        printf("%s%d", "\nNew number: ", value);
    }
};

int main() {
srand(time(0));
oaoa b = oaoa();
do {
    printf("\nType '1'/'-1' or any other number to shut down the programme: ");
    scanf_s("%d", &aoao);
    if (aoao == 1 || aoao == -1) {
        b.kakoytotam();
    } else {
        printf("\nBye.");
        return 0;
    }
}while(true);
}