#include <iostream> 
#include <cmath> 
#include <math.h> 
using namespace std; 

int swap(int &num1, int &num2){
    int k;
    k = num1;
    num1 = num2; 
    num2 = k;
}

int main(int argc, char const *argv[])
{
    int number1 = 10; 
    int number2 = 20;

    cout << "X before swap: " << number1 << endl;
    cout << "Y before swap: " << number2 << endl; 

    swap(number1, number2);

    cout << "X after swap: " << number1 << endl;
    cout << "Y after swap: " << number2 << endl; 
    return 0;
}
