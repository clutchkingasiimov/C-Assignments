//Floyd Triangle 
#include <iostream>
using namespace std; 

int floyd(int length){

    int init_val = 1;
    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << init_val << " ";
            init_val += 1;
        }
        cout << endl;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int input;
    cout << "How many lines do you want in Floyd's triangle?: ";
    cin >> input;
    floyd(input);
    return 0;
}
