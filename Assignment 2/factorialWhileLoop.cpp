#include <iostream>

using namespace std;

int main()
{
    cout<<" enter the number you want to find the factorial for "<<endl;
    int n;
    cin>>n;
    int fac = 1;
    int i = 1;
    while(i<=n)
    {
        fac*=i;
        i++;
    }
    cout<<fac<<endl;

    
}