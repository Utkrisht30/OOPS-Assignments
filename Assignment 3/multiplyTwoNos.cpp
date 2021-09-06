#include <iostream>

using namespace std;

int main()
{
    int firstNum,secondNum;
    cout<<"enter the first number"<<endl;
    cin>>firstNum;
    cout<<"enter the second number"<<endl;
    cin>>secondNum;
    int temp = firstNum;
    int i;
    for(i = 1;i<secondNum;i++)
    {
        firstNum += temp;
    }
    cout<<firstNum;
}