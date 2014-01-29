#include <iostream>
#include <vector>
#include <ratio>
#include <chrono>
#include <ctime>
#include <cstdlib>

#include "BubbleSort.hpp"
#include "QuickSort.hpp"

#define ELEMENTS 10000

using namespace std;
using namespace chrono;

void fillArray( vector<int>& );
void displayArray( const vector<int>& );

int main()
{
    vector<int> my_vector;

    fillArray( my_vector );
    //displayArray( my_vector );

    high_resolution_clock::time_point t1 = high_resolution_clock::now();

    /******Sorting the array**********/
    quickSort( my_vector, 0, ELEMENTS - 1 );
    //bubbleSort( my_vector );
    /*********************************/

    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

    cout << "Time needed to sort an array of " << ELEMENTS << " elements: ";
    cout << time_span.count() << " seconds." << endl;
    //displayArray( my_vector );

    return EXIT_SUCCESS;
}

void fillArray( vector<int>& my_vector )
{
    srand( time( NULL ) );
    for( int i = 0; i < ELEMENTS; ++i )
        my_vector.push_back( (rand() % ELEMENTS) + 1 );
}

void displayArray( const vector<int>& my_array )
{
    for( int i = 0; i < ELEMENTS; ++i )
        cout << my_array[i] << " ";
    cout << endl << endl;
}

