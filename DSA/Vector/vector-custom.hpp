#ifndef vector_custom_hpp
#define vector_custom_hpp
/*
Syntax:
type operator operator-symbol ( parameter-list )
*/
template <typename T>
class Vector {
    private:
        int size;
        int capacity;
        T* array;
        /* Function increase capacity of vector when capacity is full */
        void expand(int new_capacity);
    public:
        Vector(int init_capactity = 1);

        ~Vector();

        // Overloading
        Vector &operator=(Vector &rhs); // rhs = right hand side
        T &operator[](int size);

        // Feature
        /* size of Vector */
        int vsize();
        /* returns whether the container is empty */ 
        bool empty();
        /* it push the elements into a vector from the back */
        void push_back(int);
        /* it is used to pop or remove elements from a vector from the back */
        void pop_back();
        /* it inserts new elements before the element at the specified position */
        void insert(int, int);
        /* it is used to remove elements from a container from the specified position or range*/
        void erase(int);
        /* it is used to remove all the elements of the vector container */
        void clear();
        /* it is used to print all elements of vector */
        void print();
};

#include "vector-custom.cpp"


#endif