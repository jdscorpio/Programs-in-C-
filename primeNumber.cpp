#include <iostream>

using namespace std;

int tab[100] = {0};

void sitoEratostenesa(int n)
{
    tab[0] = 1;
    tab[1] = 1;

    for (int i=2; i*i<=n; i++)
        if (tab[i]==0)
            for (int j=i*i; j<=n; j+=i)
                tab[j] = 1;
}


bool ifPrime(int number)
{
    if (number<2)
        return false;
    else
        for (int i=2; i*i<=number; i++)
            if (number%i==0)
                return false;
    return true;
}

int main()
{
    //cout << ifPrime(2) << endl;
    //cout << ifPrime(24) << endl;
    //cout << ifPrime(79) << endl;

    int n = 99;
    sitoEratostenesa(n);

    for (int i=0; i<=n; i++)
        if (tab[i]==0)
        cout << i << " ";


    return 0;
}
