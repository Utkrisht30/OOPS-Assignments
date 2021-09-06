#include <iostream>

using namespace std;

struct numByValue{
    int firstNum;
    int secondNum;
};

void swapByReference();
void swapByValue(struct numByValue n)
{
    int temp;
   temp =  n.firstNum;
    n.firstNum = n.secondNum;
    n.secondNum = temp;
    cout<<"first number is "<<n.firstNum<<endl;
    cout<<"second number is "<<n.secondNum<<endl;
}

void swapByReference(int *firstNum,int *secondNum)
{
    int *temp;
    *temp =  *firstNum;
    *firstNum = *secondNum;
    *secondNum = *temp;
    
    
}

int main()
{
    int choice;
    cout<<"press 1 for swap by value and 2 for swap by reference "<<endl;
    cin>>choice;
    if(choice == 1)
    {
        numByValue n;
        cout<<"enter the first number"<<endl;
        cin>>n.firstNum;
        cout<<"enter the second number"<<endl;
        cin>>n.secondNum;
        swapByValue(n);
    }
    else{
        int firstNum,secondNum;
        cout<<"enter the first number"<<endl;
        cin>>firstNum;
        cout<<"enter the second number"<<endl;
        cin>>secondNum;
        swapByReference(&firstNum,&secondNum);
        cout<<"first number is "<<firstNum<<endl;
        cout<<"second number is "<<secondNum<<endl;
    }
    
}