#include <iostream>

using namespace std;

int main()
{
    int x,y,z;

    cin>>x>>y>>z;

    x-=1;
    y+=1;

    z-=y;
    cout<<x<<endl<<y<<endl<<z<<endl;

}