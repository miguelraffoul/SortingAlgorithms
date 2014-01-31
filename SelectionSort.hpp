#ifndef SELECTIONSORT_HPP_INCLUDED
#define SELECTIONSORT_HPP_INCLUDED

#include <vector>


void selectionSort( std::vector<int> &my_vector )
{
    int smallest_int_p;
    int temp;
    int size = my_vector.size();
    for( int i = 0 ; i < size ; ++i )
    {
        smallest_int_p = i;
        for( int j = i + 1  ; j < size ; ++j )
        {
            if( my_vector[smallest_int_p] > my_vector[j] )
                smallest_int_p = j;
        }
        temp = my_vector[i];
        my_vector[i] = my_vector[smallest_int_p];
        my_vector[smallest_int_p] = temp;
    }

}

#endif // SELECTIONSORT_HPP_INCLUDED
