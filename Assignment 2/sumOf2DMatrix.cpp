#include <iostream>

using namespace std;

int main()
{
    int row,col;
    cout<<"Enter the number of rows and cols"<<endl;

    cin>>row>>col;

    int arr[row][col];

    for(int i = 0; i<row;i++)
    {
        for(int j= 0; j<col ; j++)
        {
            cin>>arr[i][j];
        }
    }
    int sum = 0; 

    for(int i = 0; i<row;i++)
        {
            for(int j= 0; j<col ; j++)
            {
                sum += arr[i][j];

            }
            cout << "the sum of " << i+1<< "th row is "<< sum << endl;
            sum = 0;
        }
    

}