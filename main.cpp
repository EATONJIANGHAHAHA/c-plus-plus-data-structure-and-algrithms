#include <iostream>


int fib_itr(int n) { //n = 4

    int sum = 1,n1 = 1, n2 = 1;
    if (n == 1 || n == 2) return 1;
    else {
        while(n > 2) {
            n1 = sum;
            sum = sum + n2;
            n2 = n1;
            n--;
        }
    }
    return sum;
}

int main() {
    /*std::cout << "Hello, World!" << std::endl;
    return 0;*/


    std::cout << "Enter a number: " << std::endl;

    long n;
    std::cin >> n;

    std::cout << "The nth Fibonacci number is: " << fib_itr(n) << std::endl;
}