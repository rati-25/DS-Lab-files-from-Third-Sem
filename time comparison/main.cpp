#include <iostream>
#include "algo.h"
#include <cstdio>
#include <ctime>


int main ()
{
    int n[] { 2500 , 5000 , 10000 , 20000 , 40000 };
    int * a{},i{},j{};
    for ( int as : n )
    {
        a = new int[as];
        srand(time(0));
        for ( j=0 ; j<as ; j++ )
            a[j]=rand()%10000;
        clock_t start = clock();
        bubble_sort(a,as);
        clock_t end = clock();
        double time_bs = double(end - start);
        for ( j=0 ; j<as ; j++ )
            a[j]=rand()%10000;
        start = clock();
        merge_sort(a,0,as-1);
        end = clock();
        double time_ms = double(end - start);
        printf("%d\t%.6f\t%.6f\n",as,time_bs/1000000,time_ms/1000000);
        delete a;
        a = nullptr;
    }
}