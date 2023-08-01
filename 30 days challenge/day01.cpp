// kth largest number
#include <iostream>
using namespace std;

int main()
{
    int array[] = {9, 5, 1, 7, 3, 2, 4, 6, 8, 0};
    int n = sizeof(array) / sizeof(int);
    int k = 2;

    int temp = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    cout << "the sorted array is as follows" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << '\t';
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        if (k == i)
        {
            cout << "second largest:" << array[n - i];
        }
    }
    return 0;
}
