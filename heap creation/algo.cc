#include "algo.h"
#include <iostream>

int arr[MAX];
int heapsize{};

void max_heapify(int i){
    int l = 2*i+1;
    int r = 2*(i+1);
    int largest{i};
    if ( l < heapsize && arr[l] > arr[i] )
        largest = l;
    if ( r < heapsize && arr[r] > arr[largest] )
        largest = r;
    if ( largest != i ){
        arr[i]+=arr[largest];
        arr[largest]=arr[i]-arr[largest];
        arr[i]-=arr[largest];
        max_heapify(largest);
    }
    return;
}

void build_max_heap(){
    for ( int i{heapsize/2} ; i >= 0 ; i-- )
        max_heapify(i);
    return;
}