#ifndef QUICKSORT_HPP_INCLUDED
#define QUICKSORT_HPP_INCLUDED

#include <iostream>
#include <vector>

/*Quick Sort algorithm*/
int partitionArray( std::vector<int>& my_vector, int start, int end )
{
    int x = my_vector[end];
    int i = start - 1;
    int temporal;
    for( int j = start; j < end; ++j )
    {
        if( my_vector[j] <= x )
        {
            ++i;
            temporal = my_vector[i];
            my_vector[i] = my_vector[j];
            my_vector[j] = temporal;
        }
    }
    ++i;
    temporal = my_vector[i];
    my_vector[i] = x;
    my_vector[end] = temporal;
    return i;
}

void quickSort( std::vector<int>& my_vector, int start, int end )
{
    if( start < end )
    {
        int pivot = partitionArray( my_vector, start, end );
        quickSort( my_vector, start, pivot - 1 );
        quickSort( my_vector, pivot + 1, end );
    }
}

#endif // QUICKSORT_HPP_INCLUDED
