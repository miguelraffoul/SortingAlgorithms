#ifndef MERGESORT_HPP_INCLUDED
#define MERGESORT_HPP_INCLUDED

#include <vector>

/*Merge Sort Algorithm*/
void mergeArrays( std::vector<int>& my_vector, std::vector<int>& aux_vector,
                  int start, int mid, int end )
{
    int s = start;
    int m = mid + 1;
    for( int i = start ; i <= end; ++i )
        my_vector[i] = aux_vector[i];
}

void mergeSort( std::vector<int>& my_vector, std::vector<int>& aux_vector,
                int start, int end )
{
    int mid;
    if( start < end )
    {
        mid = (start + end) / 2;
        mergeSort( my_vector, aux_vector, start, mid );
        mergeSort( my_vector, aux_vector, mid + 1, end );
        mergeArrays( my_vector, aux_vector, start, mid, end );
    }
}


#endif // MERGESORT_HPP_INCLUDED
