#include <iostream>
#include "algo.h"

using namespace std;

int main()
{
    int n, i;
    cout << "enter the nubmer of elements to be merge seorted : ";
    cin >> n;
    cout << "enter the elements one by one : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "-------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "array before sorting : ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << '\t';
    }
    cout << endl ;
    merge_sort(0, n-1);
    cout << "-------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "array after sorting : ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << '\t';
    }
    cout << endl ;
    return 0;
}