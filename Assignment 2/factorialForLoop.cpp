#include <iostream>

using namespace std;

int main()
{
    cout<<" enter the number you want to find the factorial for "<<endl;
    int n;
    cin>>n;
    int fac = 1;
    for(int i = 1 ; i<=n ; i++)
    {
        fac=fac*i;
    }
    cout<<fac<<endl;
}