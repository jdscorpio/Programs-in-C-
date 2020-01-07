/// Suma cyfr liczby ca³kowietej
/// Autor: Jaros³aw Drze¿d¿on
/// 2020-01-07

#include <iostream>

using namespace std;

int main()
{
    int number;
    int r, sum = 0;
    cin >> number;

    while(number>0)
    {
        r = number % 10;
        sum += r;
        number /= 10;
    }
    cout << sum;

    return 0;
}
