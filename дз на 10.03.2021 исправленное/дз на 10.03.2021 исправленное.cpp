#include <iostream>
#include <ctime>

using namespace std;

class Texts {
private:
    int amount;
    char letters[10] = {};
    char find;
public:
    Texts() {
        amount = 0;
    }
    void setting() {
        printf("\nВведите число символов, которе сегенерируется: ");
        scanf_s("%d", &amount);
        for (int i = 0; i < amount; i++) {
            letters[i] = 65 + rand() % 122;
        }
    }
    void Find() {//слетает
        bool flag; int index;
        printf("\nВведите символ, который Вы хотите найти: ");
        cin >> find;
        for(int i = 0; i < amount; i++){
            if(find == letters[i]){
                flag = true;
                index = i;
                break;
            }
            else {
                flag = false;
            }
        }
        if (flag){
            printf("\n%s%c%s%d", "Ваш символ ", find, " был найден и его номер: ", index+1);
        }
        else{
            printf("\n%s%c%s", "Ваш символ ", find, " не был найден");
        }
    }
    void print() {
        printf("\nВаши символы:\n");
        for (int i = 0; i < amount; i++) {
            cout << letters[i] << ' ';
        }
    }
};

int main() {
    srand(time(0));
    int button;
    Texts action = Texts();
    printf("\nДобро пожаловать. Введите 1, чтобы сгенерировать символы; 2, чтобы найти определённый символ; 3, чтобы их вывести на экран; любое другое число, чтобы завершить программу.");
    do {
        printf("\nВведите команду: ");
        scanf_s("%d", &button);
        if (button == 1) {
            action.setting();
        } else if (button == 2) {
            action.Find();

        }
        else if (button == 3) {
            action.print();
        }
        else {
                printf("\nДо свидания.");
                return 0;
            }
        }while (true);
    }