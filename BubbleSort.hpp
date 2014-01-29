#ifndef BUBBLESORT_HPP_INCLUDED
#define BUBBLESORT_HPP_INCLUDED

#include <vector>

/*Bubble Sort Algorithm*/
void bubbleSort( std::vector<int>& my_vector )
{
    int size = my_vector.size();
    int temporal;
    for( int i = 1; i <= size; ++i )
    {
        for( int j = 0; j < size - i; ++j )
        {
            if( my_vector[j] > my_vector[j + 1] )
            {
                temporal = my_vector[j];
                my_vector[j] = my_vector[j + 1];
                my_vector[j + 1] = temporal;
            }
        }
    }
}

#endif // BUBBLESORT_HPP_INCLUDED
