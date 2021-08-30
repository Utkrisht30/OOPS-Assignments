#include <iostream>

using namespace std;

int main()
{
    int row,col;
    cout<<"Enter the number of rows and cols"<<endl;

    cin>>row>>col;

    int arr[row][col];
    int arrT[row][col];

    for(int i = 0; i<row;i++)
    {
        for(int j= 0; j<col ; j++)
        {
            cin>>arr[i][j];
        }
    }
   for(int i = 0; i<row;i++)
    {
        for(int j= 0; j<col ; j++)
        {
            arrT[j][i]=arr[i][j];
        }
    } 
    for(int i = 0; i<row;i++)
    {
        for(int j= 0; j<col ; j++)
        {
            cout<<arrT[i][j]<<" ";
        }
        cout<<endl;
    }


}