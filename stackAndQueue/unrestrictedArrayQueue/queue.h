//
// Created by eaton on 2018/4/8.
//
#ifndef UNTITLED_QUEUE_H
#define UNTITLED_QUEUE_H
template <typename T>
class queue {

private:

    //Add some internal data members here
    //What ones do you need?
    //An array like thing to store data...
    //How do we handle arrays where we don't know the size?
    //You'll also want to do something to keep track of where
    //in the queue you're up to (there's a couple of ways
    //to do this).
    T * array;
    int rear; //最后一个元素的序号
    int capacity;

public:

    //constructors
    queue(){
        array = new T[1];
        rear = -1;
        capacity = 1;
    }

    queue(int capacity){
        this->capacity = capacity;
        array = new T[capacity];
        rear = -1;
    }

    ~queue(){
        delete array;
    }

    void offer(T t){
        if(rear == -1){
            array[0] = t;
            rear++;
        }
        else {
            if(capacity-1 <= rear) {
                T * temp_array = new T[capacity + 10];
                for(int i = 0; i < capacity; i++) {
                    temp_array[i] = array[i];
                }
                delete array;
                array = temp_array;
                capacity = capacity + 10;
                array[rear+1] = t;
                rear++;
            }
            else {
                array[rear+1] = t;
                rear++;
            }
        }
    } //add something to the back of the queue

    T poll(){
        if(!empty()) {
            T data = array[0];
            for(int i = 0; i < capacity-1; i++) {
                array[i] = array[i+1];
            }
            rear--;
            return data;
        }
    } //remove something from the front of the queue

    bool empty(){
        return rear == -1;
    } //is the queue empty?

};
#endif //DATA_STRUCTURES_AND_ALGORITHMS_QUEUE_H
