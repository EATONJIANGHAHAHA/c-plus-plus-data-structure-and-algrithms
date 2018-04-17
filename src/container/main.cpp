//
// Created by eaton on 2018/4/8.
//
#include <iostream>
#include <queue>
#include <vector> //You will need to pick a suitable container to include
using namespace std;

int main(){
    std::queue<vector<int>> q; //How do you instantiate it?

    for (int i = 0; i < 20; i++){
        vector vector1 = new vector(i);
        q.push(vector1); //the C++ queue uses "push" instead of "offer"
    }

    while (!q.empty()){
        std::cout << q.front() << " ";
        q.pop(); //This is an odd choice by the C++ developers
        //Pop just removes the element, but doesn't return
        //it, you have to do two operations to return and
        //remove...
    }

    std::cout << std::endl;

}
