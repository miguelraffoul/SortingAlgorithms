#ifndef MERGESORT_HPP_INCLUDED
#define MERGESORT_HPP_INCLUDED

#include <vector>

/*Merge Sort Algorithm*/
void mergeArrays( std::vector<int>& my_vector, std::vector<int>& aux_vector,
                  int start, int mid,int end  )
{
    if(  )
}

void mergeSort( std::vector<int>& my_vector, std::vector<int>& aux_vector,
                int start, int end )
{
    int mid;
    if( start < end )
    {
        mid = (start + end) / 2;
        mergeSort( my_vector, aux_vector, start, pivot );
        mergeSort( my_vector, aux_vector, pivot + 1, end );
        mergeArrays( my_vector, aux_vector, start, mid, end );
    }
}


#endif // MERGESORT_HPP_INCLUDED
