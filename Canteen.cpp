#include <iostream>

using namespace std;

int main()
{
    int a, b, n, c;
    cin >> a >> b >> n;
    b=(a*100+b)*n;
    a=b/100;
    b=b%100;
    cout << a <<" som and " << b << " tyiyn";

}
