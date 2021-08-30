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
    cout<<"enter the numbers "<<endl;
    int x, y;
    cin>>x>>y;

    cout<<addition(x,y)<<endl;
    cout<<subtraction(x,y)<<endl;
    cout<<multiplication(x,y)<<endl;
    cout<<division(x,y)<<endl;

}