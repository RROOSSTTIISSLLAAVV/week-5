#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int low;
    int top;
    __int64 sum = 1;

    cout << "low limit: ";
    cin >> low;
    cout << "top limit:";
    cin >> top;

    for (int i = low; i <= top; i++) {
        if (i % 2 == 0) sum *= i;
    }

    cout << sum;

}
