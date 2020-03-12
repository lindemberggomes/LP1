/*!
 * @author Selan
 * @date February, 27th.
 *
 * To compile from the root folder: g++ -Wall -std=c++11 src/driver_lsearch.cpp -o dls
 */

#include <iostream>
#include <iterator> // std::begin(), std::end()

//=== Constants and Aliases
// Alias for our data type.
typedef int value_type;

//=== Prototypes
int lsearch2( value_type *v, const size_t l, size_t r, value_type target );

// TODO
/*
 * Given a range [first,last), this function do a linear search for the `target`.
 * \param first Pointer to the first element of the range.
 * \param last Pointer just-past the last element of the range.
 * \param target The element we are looking for.
 * \return A pointer to the location of target, if present, or `nullptr` otherwise.
 */
value_type* lsearch3( value_type* first, value_type *last, value_type target );



//=== Implementation

// Version 1: Array + size
int lsearch( value_type A[], size_t N, value_type target)
{
    // Traverse the entire array.
    for( size_t i{0} ; i < N ; ++i )
        if ( target == A[i] ) // Found the target
            return i; // Index of the target.
    return -1; // Failed.
}

// Version 2: Array + closed range [left,right]
int lsearch2( value_type *v, size_t l, size_t r, value_type target ) 
{
    // Run the array. (closed interval!!!)
    for( size_t i{l} ; i <= r ; ++i )
        // if ( target == *(v+i) ) // Found the target
        if ( target == v[i] ) // Found the target
            return i; // Index of the target.
    return -1; // Failed.
}

// Version 3: 2 pointers + target
value_type* lsearch3( value_type* first, value_type *last, value_type target )
{
    // TODO: Parte of the challebge: Code this function.
    return nullptr; // This is just a STUB. Replace it accordingly.
}

/// Prints out a range of elements defined by `[first,last)`.
void print2( value_type *first, value_type *last)
{
    // TODO: Parte of the challebge: Code this function.
}


/// Prints out the entire array passed as argument.
void print( value_type *v, size_t sz )
{
    std::cout << "[ ";
    for ( size_t i{0} ; i < sz ; ++i )
        std::cout << v[i] << " ";
    std::cout << "]";
}


//=== Client code.
int main()
{
    value_type A[]{ 9, 2, 1, 4, -2, 0, 5, 12 };
    size_t n = sizeof(A)/sizeof(value_type);

    value_type targets[]{ 2, -3, 4, 5, -12, 0, 7, 9 };// The target we are looking for.
    size_t left{0}, right{n-1}; // index search range

    // Show the search array
    std::cout << ">>> The array: ";
    print( A, n );
    std::cout << std::endl;

    
    // Let us try out multiple searches over the entire array.
    for ( value_type key : targets )
    {
        // The linear search.
        int idx = lsearch2( A, left, right, key );

        // TODO: This is the new version you need to implement.
        // value_type *result = lsearch3( std::begin(A), std::end(A), key );

        // TODO: Adapt the code below to work with the new version of lsearch().
        // Show the search result.
        if ( idx == -1 )
            std::cout << "\t-- Could not find " << key << " in the range ["
                << left << ", " << right << "]\n";
        else
            std::cout << "\t-- Found " << key << " at location "
                << idx << std::endl;
    }

    return 0;
}
