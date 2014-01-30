#ifndef INSERTIONSORT_HPP_INCLUDED
#define INSERTIONSORT_HPP_INCLUDED

#include <vector>

void insertionSort( std::vector<int>& my_vector )
{
    int size = my_vector.size();
    int x, j;
    for( int i = 1; i < size; ++i )
    {
        x = my_vector[i];
        j = i;
        while( j > 0 && my_vector[j - 1] > x )
        {
            my_vector[j] = my_vector[j - 1];
            --j;
        }
        my_vector[j] = x;
    }
}

#endif // INSERTIONSORT_HPP_INCLUDED
