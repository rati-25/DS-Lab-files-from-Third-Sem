#include "algo.h"
#include <climits>

int inf = INT_MAX;

void bubble_sort( int a[] , int size ){
    for ( int i{1} ; i < size ; i++ )
    {
        for ( int j{} ; j < size - i ; j++ )
        {
            if ( a[j]>a[j+1] )
            {
                a[j] += a[j+1];
                a[j+1] = a[j] - a[j+1];
                a[j] -= a[j+1];
            }
        }
    }
}

void merge(int arr[] , int s, int p, int e)
{
    if (s < e)
    {
        int i{0}, j{0}, n1{p - s + 2}, n2{e - p + 1}, LA[n1], RA[n2];
        while (i < n1 - 1){
            LA[i] = arr[s + i];
            i++;
        }
        LA[i] = inf;
        while (j < n2 - 1){
            RA[j] = arr[p + j + 1];
            j++;
        }
        RA[j] = inf;
        i = 0;
        j = 0;
        for (int k = s; k <= e; k++)
        {
            if (LA[i] <= RA[j])
            {
                arr[k] = LA[i];
                i++;
            }
            else
            {
                arr[k] = RA[j];
                j++;
            }
        }
    }
}
void merge_sort(int arr[] , int s, int e)
{
    if (s < e)
    {
        int p = int((s + e) / 2);
        merge_sort(arr , s, p);
        merge_sort(arr , p + 1, e);
        merge(arr , s, p, e);
    }
    return;
}