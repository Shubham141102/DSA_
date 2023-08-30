// reverse array
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {22, 14, 8, 17, 35, 3};
    int size = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = size-1;
    int temp;

    cout<<"the actual array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    
    while(start<=end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start ++;
        end--;
    }

    cout<<"the reversed array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"\t";
    }


    return 0;
}