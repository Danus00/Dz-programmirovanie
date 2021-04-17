#include <iostream>
#include <cmath>

using namespace std;

void calculations(){
        char ch;
        float num1;
        float num2;
        float result;

        scanf_s("%f", &num1);
        cin >> ch;
        scanf_s("%f", &num2);
        switch (ch) {
            case '*':
                result = num1 * num2;
                printf("\n%f %c %f = %f", num1, ch, num2, result);
                break;
            case '/':
                result = num1 / num2;
                printf("\n%f %c %f = %f", num1, ch, num2, result);
                break;
            case '+':
                result = num1 + num2;
                printf("\n%f %c %f = %f", num1, ch, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("\n%f %c %f = %f", num1, ch, num2, result);
                break;
        }
}
void instructions(){
printf("Instructions:"
       "\nYou'll be asked a command then, type '1' to calculate again or '2' to shut down the calculator."
       "\nTo use the calculator you'll be asked to type the first number and press 'Enter'."
       " \nThen type '+', '-', '*' or '/' to do following actions with number and press 'Enter'."
       "\nYou'll be asked to type the another number and press 'Enter'."
       "\nWhat is more, YOU CAN TYPE THE WHOLE PROBLEM AT ONCE."
       "\nNow, let's go:\n");
calculations();
}

int main() {
    int button;
    printf("\nHello. Type 1 to open the instructions or 0 to launch a calculator: ");
    scanf_s("%d", &button);
    if (button == 0) {
        do {
            int command;
            printf("\nEnter a command: ");
            cin >> command;
            if(command == 1){
                calculations();
            }
            else if (command == 2){
                printf("\nBye.");
                return 0;
            }
            else{
                printf("\nincorrect input.");
                return 0;
            }
        }while(true);

    } else if (button == 1) {
        instructions();
    } else {
        printf("\nincorrect input.");
        return 0;
    }
}
