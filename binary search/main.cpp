#include <iostream>
#include "algo.h"

using namespace std;

int main () {
    int n;
    cout << "enter the number of elements in the array : " ;
    cin >> n ;
    cout << "enter the elements one by one : " << endl;
    for (int i{0} ; i < n ; i++)
        cin >> arr[i];
    bubble_sort(n);
    int key;
    cout << "sorted array : " ;
    for (int i{0} ; i < n ; i++)
        cout << arr[i] << '\t' ;
    cout << endl << "enter the element to be searched through binary search : " ;
    cin >> key ;
    cout << "the element " << key << " is found at index " << binary_search(n , key) << " of the array" << endl;
    return 0;
}