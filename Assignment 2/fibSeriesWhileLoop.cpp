#include <iostream>

using namespace std;

int main()
{
    int n1,n2,n3,number,i;

    n1=0;
    n2=1;
    cout<<"enter the number of terms "<<endl;
    cin>>number;
    cout<<n1<<endl<<n2<<endl;

    i = 2;

    while(i<number)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;

        cout<<n3<<endl;

        i++; 
    }
}