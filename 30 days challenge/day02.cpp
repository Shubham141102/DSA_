#include<iostream>
using namespace std;
int main()
{
    int arr[]={0,1,1,0,2,3,4};
    int size = sizeof(arr)/sizeof(int);
    int x = 1;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    
    }

    cout<<"number "<<x<<" is occured "<<count<< " times";
    
}