#include <iostream>

using namespace std;

int addition(int x, int y)
{
    return x+y;
}
int subtraction(int x, int y)
{
    return x-y;
}
int multiplication(int x, int y)
{
    return x*y;
}
float division(float x, float y)
{
    return x/y;
}

int main()
{
    int flag;
    int x,y;
    cout << "enter the numbers"<<endl;
    
    cin>>x>>y;

    cout<<"press the following for operations"<<endl;
    cout<<"1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division "<<endl;

    cin>>flag;

    switch (flag)
    {
    case 1:
        cout<<addition(x,y)<<endl;
        break;
    case 2:
        cout<<subtraction(x,y)<<endl;
    case 3:
        cout<<multiplication(x,y)<<endl;
    case 4:
        cout<<division(x,y)<<endl;
    
    default:
        break;
    }
}