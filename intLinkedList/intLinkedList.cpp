//
// Created by eaton on 2018/3/29.
//
#include "intLinkedList.h"

intLinkedList::intNode::intNode() {
    next = nullptr;
    data = 0;
}

intLinkedList::intNode::intNode(intNode * n, int d) {
    next = n;
    data = d;
}

intLinkedList::intNode::~intNode() {
    //You don't have to do anything for this one.
}

int intLinkedList::intNode::getData(){
    return data;
}

intLinkedList::intNode * intLinkedList::intNode::getNext(){
    return next;
}

void intLinkedList::intNode::setNext(intNode * n){
    next = n;
}

intLinkedList::intLinkedList(){
    head = nullptr;
    length = 0;
}

intLinkedList::~intLinkedList(){
    intNode * curr = head;
    while (curr != nullptr) {
        intNode * next = curr->getNext();
        delete curr;
        curr = next;
    }
}

bool intLinkedList::isEmpty(){
    return length == 0;
}

void intLinkedList::prepend(int c){
    intNode * n = new intNode(head,c);
    head = n;
    length++;
}

void intLinkedList::append(int c){
    if(head == nullptr) {
        prepend(c);
    }
    else {
        intNode * n  = new intNode(nullptr,c);
        intNode * current = head;
        while(current->getNext() != nullptr){
            current = current->getNext();
        }
        current->setNext(n);
        length++;
    }
}

//this method return the DATA in head (xd)
int intLinkedList::getHead() {
    return head->getData();
}

intLinkedList * intLinkedList::tail(){
    intLinkedList * tempintLinkedList = new intLinkedList();
    intNode * current = head;
    current = current->getNext();
    while(current != nullptr){
        tempintLinkedList->append(current->getData());
        current = current->getNext();
    }
    return tempintLinkedList;
}

