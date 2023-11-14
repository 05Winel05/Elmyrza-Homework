#include <iostream>
using namespace std;

int main()
{
    int n,a,d=0,e=0;
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        cin >> a;
        if (a%2==0)
        {
            e++;
        }
        else
        {
            d++;
        }
    }
    cout << "Odds : " << d << endl;
    cout << "Evens : "<< e ;
}
