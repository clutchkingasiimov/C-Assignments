//Fibonacci sequence (Recursive implementation
#include <iostream>
using namespace std;

static int count;

int fibonacci(int value){

    //Updating the function count 
    ++count;


    //Simple base case
    if(value == 0){
        return value;
    }

    if(value == 1){
        return value;
    }

    //Recursion case
    return fibonacci(value-1) + fibonacci(value-2);
}

int main(int argc, char const *argv[])
{
    int number = fibonacci(10);
    cout << number << endl;
    cout << "And the function was called " << count << " times" << endl;
    return 0;
}
