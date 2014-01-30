#ifndef SELECTIONSORT_HPP_INCLUDED
#define SELECTIONSORT_HPP_INCLUDED

#include <vector>

void selectionSort( std::vector<int> &my_vector )
{
    int smallest_int_p;
    int temp;
    for( unsigned int i = 0 ; i < my_vector.size() ; ++i )
    {
        smallest_int_p = i;
        for( unsigned int j = i + 1  ; j < my_vector.size() ; ++j ){
            if( my_vector.at( smallest_int_p ) > my_vector.at( j ) )
                smallest_int_p = j;
        }
        temp = my_vector.at( i );
        my_vector.at( i ) = my_vector.at( smallest_int_p );
        my_vector.at( smallest_int_p ) = temp;
    }

}

#endif // SELECTIONSORT_HPP_INCLUDED
