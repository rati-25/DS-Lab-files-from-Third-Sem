#include "algo.h"

int arr[MAX];

void merge(int s, int p, int e)
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
void merge_sort(int s, int e)
{
    if (s < e)
    {
        int p = int((s + e) / 2);
        merge_sort(s, p);
        merge_sort(p + 1, e);
        merge(s, p, e);
    }
    return;
}