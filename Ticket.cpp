#include <iostream>
using namespace std;

int main()
{
    int n,a,b;
    cin >> n;
    a=(n%10)+((n%100)/10)+((n%1000)/100);
    b=(n/100000)+((n/10000)%10)+((n/1000)%10);
    if(a==b)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

