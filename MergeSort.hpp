#ifndef MERGESORT_HPP_INCLUDED
#define MERGESORT_HPP_INCLUDED

#include <vector>

/*Merge Sort Algorithm*/
void mergeArrays( std::vector<int>& my_vector, std::vector<int>& aux_vector,
                  int start, int mid, int end )
{
    int index = start;
    int subar1_index = start;
    int subar2_index = mid + 1;
    while( subar1_index <= mid  && subar2_index <= end  )
    {
        if( my_vector[subar1_index] <= my_vector[subar2_index] )
        {
            aux_vector[index] = my_vector[subar1_index];
            ++subar1_index;
        }
        else
        {
            aux_vector[index] = my_vector[subar2_index];
            ++subar2_index;
        }
        ++index;
    }
    if( subar1_index <= mid )
    {
        while( subar1_index <= mid )
        {
            aux_vector[index] = my_vector[subar1_index];
            ++index;
            ++subar1_index;
        }
    }
    else
    {
        while( subar2_index <= end )
        {
            aux_vector[index] = my_vector[subar2_index];
            ++index;
            ++subar2_index;
        }
    }
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
