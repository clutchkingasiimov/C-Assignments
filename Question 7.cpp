//The first recursive function grows linearly in size as for each increase 
//in the power "n", the function is invoked an additional time/
//The second recursive function invokes the function twice and grows at an order of 
// n^2 sequence.


// Why this happens: 
// For all even powers that are greater than 1, the second recursive function grows at the 
// rate twice that of the previous power, causing the function to be invoked twice when the power 
// is even 

// When the power is odd, the function is invoked in a similar fashion as for n-1 as the difference 
// in the values returned is simply the integer "a".




#include <iostream> 
#include <math.h>
#include <cmath>
using namespace std; 

static int count, count_2;

int power(int integer, int exponent){

    count++;
    if(exponent == 0){
        return 1;
    }
        
    return integer * power(integer, exponent-1);
}

int power_2(int integer, int exponent){
    count_2++;
    if(exponent == 0){
        return 1;
    }
    if(exponent%2==0){
        return power_2(integer, exponent/2) * power_2(integer, exponent/2);
    }
    if(exponent%2!=0){
        return integer * power_2(integer, exponent/2) * power_2(integer, exponent/2);
    }
}



int main(int argc, char const *argv[]){
    for(int i = 0; i < 10; i++){
        int number = power(10,i);
        int number_2 = power_2(10,i);
        cout << "For the first recursive formula, the solution is: " << number << endl;
        cout << "And the function was called " << count << " times" << endl;
        cout << "For the second recursive formula, the solution is: " << number_2 << endl;
        cout << "And the function was called " << count_2 << " times" << endl;
        cout << "And the exponent is " << i << endl;
    }
    // cout << "For the first recursive formula, the solution is: " << number << endl;
    // cout << "And the function was called " << count << " times" << endl;
    // cout << "For the second recursive formula, the solution is: " << number_2 << endl;
    // cout << "And the function was called " << count_2 << " times" << endl;
    return 0;
}
