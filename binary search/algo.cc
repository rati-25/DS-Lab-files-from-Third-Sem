#include "algo.h"

int arr[MAX];

void bubble_sort(int n){
    for (int i{} ; i < n-1 ; i++){
        for (int j{} ; j < n-i-1 ; j++){
            if (arr[j]>arr[j+1]){
                arr[j]+=arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]-=arr[j+1];
            }
        }
    }
    return ;
}
int binary_search(int n , int key){
    int start{0} , end{n-1},mid{end/2};
    while (start <= end){
        mid = ( start + end ) / 2;
        if ( key < arr[mid] )
            end = mid-1;
        else if( key > arr[mid] )
            start = mid +1;
        else
            return mid;
    }
    return -1;
}