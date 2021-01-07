#include <iostream>
#include <ctime>


int main() {
srand(time(0));
int number, guessNumber;
int n, k;
printf("%s","HELLO. Enter, how many attempts do you need: ");
scanf_s("%d", &k);

printf("\n%s","Enter number, which is computer limited by: ");
scanf_s("%d", &n);

    guessNumber = 1 + rand() % n;
for (int p = k+1; p>0; p-- ) {
    printf("\n%s", "Guess the number, that computer imagined: ");
    scanf_s("%d", &number);
    if (guessNumber == number) {
        printf("%s", "You guessed :)");

    }
    else if (guessNumber != number) {
        printf("%s\n", "No:)");
        k = k - 1;
        printf("%s%d", "Attempts you have: ", k);
        guessNumber = 1 + rand() % n;

    }
    if (k == 0) {
        printf("\n%s", "You have run out of attempts.");
        printf("\n%s", "GAME OVER");
        return 0;
    }
}

    return 0;
}