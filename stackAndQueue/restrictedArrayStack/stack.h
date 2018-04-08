//
// Created by eaton on 2018/4/8.
//
//As this is a templated class, you should implement the
//class in the header.

template <typename T>
class stack {

private:

    T data[10];
    T * head;
    int count;
    // You may want to add other class variables here.

public:

    stack(){
        head = nullptr;
        count = 9;
    } //constructor
    ~stack(){
        delete head;
    } //destructor

    void push(T t){
        if(count > -1) {
            data[count] = t;
            head = & data[count];
            count--;
            if(count == -1) {
                count = 0;
            }
        }
    } //add an element to the top of the stack

    T pop(){
        if(count < 9) {
            T * temData = head;
            count++;
            head = & data[count];
            return * temData;
        }
        if(count == 9) {
            T * temData = head;
            head = nullptr;
            return * temData;
        }
        else {
            head = nullptr;
            return * head;
        }
    } //remove an element from the top of the stack

    bool empty(){
        return head == nullptr;
    } //check if the stack is empty
}; //DATA_STRUCTURES_AND_ALGORITHMS_STACK_H
