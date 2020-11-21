#include <iostream>
#include <ctime>



int main() {
    int amount;
    bool flag;
    int arr[1] = {};
    int number;
    printf ("%s", "Write the amount of numbers you want to see(before 30): ");
    scanf_s ("%d", &amount);	
printf ("%s", "Write the number you want to check: ");
scanf_s ("%d", &number);
    srand(time(0));
    for (int i = 0; i < amount; i++){
        printf ("%d\t", arr[1] = {1+rand()%30});
    }


    if (number == arr[1]){
        flag = true;
    }
    else {
       flag = false;
    }



        if (flag == true) {
        printf ("\n%s", "Yep, there is your number, look! ");
    }
    else {
        printf ("\n%s", "There is no your number...");
    }

    return 0;
}