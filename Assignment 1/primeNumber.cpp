#include <iostream>

using namespace std;

int primeNumber(int start, int end)
{
    int flag = 0;
    
    for(int i = start; i<end; i++)
    {
        for(int j = 2; j<i; j++)
        {
            if(i%j==0)
            {
                flag++;
                continue;
            }
        }
        if( flag == 0 && i!=1)
            {
                cout<<i<<endl;
            }
            flag = 0;
    }
}
int main(){
primeNumber(1,300);
}