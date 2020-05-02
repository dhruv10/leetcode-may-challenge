#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3}, item;
    for (item = 0; item < sizeof(arr)/sizeof(arr[0]); item += 1)
    {
        cout << arr[item];
    }
    return 0;
}