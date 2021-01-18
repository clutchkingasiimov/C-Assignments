#include <iostream> 
#include <cmath>
#include <math.h> 
using namespace std; 

//Calculating the position of a moving body 

double position(){
    
    double pos, tick, init_tick, init_pos, speed, accel, freq;
    
    cout << "Enter the initial position of your object: ";
    cin  >> init_pos;
    cout << "Enter the speed of the object: ";
    cin >> speed;
    cout << "Enter the acceleration of the object: ";
    cin >> accel;
    cout << "Display frequency for the position of the moving body?: ";
    cin >> freq;
    cout << "Update frequency for the position of the object?: ";
    cin >> tick;

    init_tick = 0;

    for (int i = 0; i <= freq; ++i){
        pos = init_pos + (speed*init_tick) + (0.5*accel*init_tick*init_tick);
        cout << "At time " <<  init_tick << " the position is " << pos << endl;
        init_tick += tick;

    }
    return 0; 

}

int main(int argc, char const *argv[])
{
    position();
    return 0;
}
