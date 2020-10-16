#include <iostream>

using namespace std;

int main(int argc, char *argv[])// нашёл решение в инете, у меня было похожее, но чутка недоработанное
{
    int a,b,c,d;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    cout << "d = ";
    cin >> d;

    int max = 0;

    {
        if (a%2 == 0)
        {
            cout << "a - even." << endl;
            max = a;
        }
        else cout << "a - not even."<< endl;
    }
    {
        if (b%2 == 0)
        {
            cout << "b - even." << endl;
            if (b > max)
                max = b;
        }
        else cout << "b - not even."<< endl;
        {
            if (c%2 == 0)
            {
                cout << "c - even." << endl;
                if (c > max)
                    max = c;
            }
            else cout << "c - not even."<< endl;
        }
        if (d%2 == 0)
        {
            cout << "d - even." << endl;
            if (d > max)
                max = d;
        }
        else cout << "d - not even."<< endl;
    }
    if (a%2!=0 && b%2!=0 && c%2!=0 && d%2!=0)
    {   cout << "\nnot found" << endl;
        cout << "there are no even numbers!" << endl;
        system("Pause");
        return -1;
    }

    cout << endl;

    cout << "The biggest: " << max;

    cout << endl;
    return 0;
}