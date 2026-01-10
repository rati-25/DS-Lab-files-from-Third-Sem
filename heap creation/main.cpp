#include <iostream>
#include "algo.h"

using namespace std;

int main(){
    cout << "Enter the number of Elements : ";
    cin >> heapsize;
    cout << "Enter the Elements : ";
    for (int i{} ; i < heapsize ; i++)
        cin >> arr[i];
    build_max_heap();
    cout << "Heap ELements(array FOrm) : ";
    for (int i{} ; i < heapsize ; i++)
        cout << arr[i] << '\t' ;
    cout << endl;
    return 0;
}