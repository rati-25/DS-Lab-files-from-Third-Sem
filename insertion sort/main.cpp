#include "algo.h"
#include <iostream>

using namespace std;

int main (){
    int n;
    cout << "enter the number of elemetns to be sorted : " ;
    cin >> n;
    cout << "enter the elements one by one :" << endl;
    for (int i = 0 ; i < n ; i++)
        cin >> arr[i];
    cout << "before sorting : " ;
    display(n);
    insertion_sort(n);
    cout << "after sorting : ";
    display(n);
    return 0;
}