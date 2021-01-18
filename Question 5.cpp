//Fibonacci sequence (Non-recursive implementation)
#include <iostream>
using namespace std;

int fibonacci(int value){

    int a = 0;
    int b = 1;
    int c;
    if(value == 1){
        cout << a << endl;
        return 0;
    }
    if(value == 2){
        cout << b << endl;
        return 0;
    }
    else{
        for (int i = 2; i < value; i++){
            c = a+b;
            a = b;
            b = c;
        }
    }
    cout << "The number in the sequence is: " << c << endl;
    return 0;
}

int main(int argc, char const *argv[])
{
    fibonacci(5);
    return 0;
}
