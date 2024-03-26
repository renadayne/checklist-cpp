#include "vector-custom.hpp"

template <typename T>
Vector<T>::Vector(int init_capacity) {
        capacity = init_capacity;
        size = 0;
        array = new T[capacity];
    }

template <typename T>
Vector<T>::~Vector() {
    delete[] array;
}

template <typename T>
int Vector<T>::vsize() {
    return size;
}

template <typename T>
void Vector<T>::expand(int new_capacity) {
    // assign var pointer old array equal current array to save all elements of current array 
    T* old_array = array; 
    // assign into new memory
    array = new T[new_capacity];
    // Copy all content of old array to new array 
    for(int i = 0; i < size; i++) {
        array[i] = old_array[i];
    }
    delete[] old_array;
    capacity = new_capacity;
}

template <typename T>
bool Vector<T>::empty() {
    return (size == 0);
}

template <typename T>
Vector<T> &Vector<T>::operator=(Vector &rhs) {
    if(this->array != NULL) this->array = NULL;
    this->capacity = rhs.capacity;
    this->size = rhs.size;
    this->array = new T[this->capacity];

    for(int i = 0; i < size; i++) {
        this->array[i] = rhs[i];
    }
    return *this;
}
/*
Syntax:
type operator operator-symbol ( parameter-list )
*/
template <typename T>
T &Vector<T>::operator[](int index) {
    return array[index];
}

template <typename T>
void Vector<T>::push_back(int new_element) {
    if(size == capacity) {
        expand(2 * capacity);
    }

    /* Add new element to the last of vector */
    array[size] = new_element;
    
    size++;
}

template <typename T>
void Vector<T>::pop_back() {
    size--;
}

template <typename T>
void Vector<T>::insert(int ele_pos, int new_element) {
    if(size == capacity) {
        expand(2 * capacity);
    }
    
    for(int i = size; i >= ele_pos + 1; i--) {
        array[i] = array[i - 1];
    }
    array[ele_pos] = new_element;
    size++;
}

template <typename T>
void Vector<T>::erase(int ele_pos) {
    for(int i = ele_pos; i < size - 1; i++) {
        array[i] = array[i + 1];
    }
    size--;
}

template <typename T>
void Vector<T>::clear() {
    size = 0;
}

template <typename T>
void Vector<T>::print() {
    for(int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}