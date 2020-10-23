#include <iostream>
#include <cmath> //для работы со степенями


using namespace std;

int main() {
    int distance = 10; float q=1.1;

    cout << (distance*(pow(q , 7)  - 1))/ (q - 1) << ' '  << "kilometers is the summary distance, which sportsman passed in seven days of exercises"; // формула суммы членов геометрической рогрессии

    return 0;
} //pow - команда для возведения числа в стпень (подсмотрел в интернете)