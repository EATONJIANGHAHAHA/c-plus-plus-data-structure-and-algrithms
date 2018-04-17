//
// Created by eaton on 17/04/18.
//

#include <iostream>

int fib_rec(int n){

    //Code goes here.

    if(n == 1 || n == 2) return 1;
    return fib_rec(n-1)+fib_rec(n-2);
}

int main(){

    std::cout << "Enter a number: " << std::endl;

    int n;
    std::cin >> n;

    std::cout << "The nth Fibonacci number is: " << fib_rec(n) << std::endl;

}
