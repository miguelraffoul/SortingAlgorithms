#ifndef HEAPSORT_HPP_INCLUDED
#define HEAPSORT_HPP_INCLUDED

#include <vector>
#include <queue>

void heapSort( std::vector<int> &my_vector )
{
    std::priority_queue<int> heap;
    int size = my_vector.size();
    for( int i = 0 ; i < size ; ++i )
        heap.push( my_vector[i]);
    for( int i = size - 1 ; i >= 0 ; --i )
    {
        my_vector[i] = heap.top();
        heap.pop();
    }
}





#endif // HEAPSORT_HPP_INCLUDED
