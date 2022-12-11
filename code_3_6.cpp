#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b ,h;

    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "h: ";
    cin >> h;

    cout << "----------------" << endl << ": X : Y :" << endl << "----------------" << endl;
    for (int i = a; i <= b; i+=h) {
        cout << ": " << i << " : " << (5 * pow(i,2) - 7*i + 3) / (i + 7) - 13 * cos(i) << " :" << endl << "----------------" << endl;
    }

}
