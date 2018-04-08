//
// Created by eaton on 2018/4/8.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_STACK_H
#define DATA_STRUCTURES_AND_ALGORITHMS_STACK_H
#include <vector>
#include <stdio.h>

template <typename T>
class stack {

private:

    std::vector<T> vec;
    std::vector<T> * vec_ptr;
    //The internal storage goes here, so you
    //will need to create a vector.

public:
    stack(){
        vec_ptr = & vec;
    }
    ~stack(){
        /*delete vec_ptr;*/
    }

    void push(T t){
        vec.insert(vec.begin(),t);
    } //add an element to the top of the stack
    T pop() {
        T data = vec[0];
        vec.erase(vec.begin());
        return data;
    } //remove an element from the top of the stack

    T peek() {
        return vec[0];
    } //A new one, this returns the top
    //element of the stack without removing
    //it. (i.e. lets us peek at the top)
    bool empty() {
        return vec.size() == 0;
    }
};
#endif //DATA_STRUCTURES_AND_ALGORITHMS_STACK_H
