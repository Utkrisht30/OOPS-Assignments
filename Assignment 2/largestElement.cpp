#include <iostream>

using namespace std;

int main ()
{
    int n;
    cout<<"enter the number of elements of the array"<<endl;
    cin>>n;
    int *arr;

    arr = new int [n];

    for(int i = 0; i<n ; i++)
    {
        cout<<"enter the element"<<endl;
        cin>>arr[i];
    }

    int max = arr[0];

    for(int i = 0;i<n;i++)
    {
        if (arr[i]>max)
            max = arr[i];
        else
            continue;
    }
    cout<<max<<endl;
}