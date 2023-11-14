#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i=2;i*i<=n; i++ )
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n,b;
    cin >> n;
    while (true)
    {
        if (isPrime(n)==true)
        {
            cout <<n;
            return 0;
        }
        else
        {
            n++;
        }
    }
}
