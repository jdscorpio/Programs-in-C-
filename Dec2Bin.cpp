/// Zamiana liczby dziesiêtnej na liczbê binarn¹
/// Autor: Jaros³aw Drze¿d¿on
/// 2020-01-07

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int number;
    cin >> number;
    string bin = "";

    while(number>0)
    {
        if (number % 2 == 0)
            bin += "0";
        else
            bin += "1";

        number /= 2;
    }
    reverse(bin.begin(), bin.end());
    cout << bin;

    return 0;
}
