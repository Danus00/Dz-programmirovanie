#include <iostream>
#include <ctime>
#include <string>

using namespace std;
bool flag;
class game{
private:
    string elements[3] = {"rock", "scissors", "paper"};
int key1;
string key;
string elem;
public:
    game(){
    cin >> elem;
    }
  void check(){
        for (int i = 0; i < 3; i++){
            if (elem == elements[i]){
                flag = true;
                break;
            }
            else{
                flag = false;
            }
        }
    }
  void continuation(){
        key1 = 0+rand()%2;
        key = elements[key1];
        cout << key;
        if (elem == key){
            printf("\nDraw");
        }
        else if (elem == "rock" && key == "scissors"){
            printf("\nYou've won");
        }
        else if(elem == "scissors" && key == "paper"){
            printf("\nYou've won");
        }
        else if(elem == "paper" && key == "rock"){
            printf("\nYou've won");
        }
        else if(elem == "paper" && key == "scissors"){
            printf("\nYou've lost");
        }
        else if(elem == "scissors" && key == "rock"){
            printf("\nYou've lost");
        }
        else if(elem == "rock" && key == "paper"){
            printf("\nYou've lost");
        }
    }
};

int main() {
srand(time(0));
printf("\nHello.");
    do {
        printf("\nEnter 'rock'/'scissors'/'paper' or any number to shut down the programme: ");
        game action = game();
        action.check();
        if (!flag) {
            printf("\nError 0x00001: incorrect input or a command to shut down programme");
            printf("\nBye.");
            return 0;
        }
        if (flag){
            action.continuation();
        }
    }while(true);
}