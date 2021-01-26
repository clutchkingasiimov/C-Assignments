//Polynomial calculator 
#include <iostream> 
#include <algorithm>
using namespace std; 
//"new" allocates memory, "delete" de-allocates memory 
// "new" alongside a variable will return the memory address, which is then stored in a pointer variable. 
// The pointer variable will reference to the array (De-referencing for array is not needed.)

double *read_poly(int &n){
    cout << "What is the maximum order of the polynomial?: ";
    cin >> n;
    double *c = new double[n+1];
    for(int i = n; i>=0; i--){
        cout << "Coefficient of degree " << i << ": ";
        cin >> c[i];
    }
    return c;
}

void print_poly(double *c, int n){
    int i; 
    cout << c[0];
    if (n > 0){
        cout << " + ";
    }
    for (i = 1; i < n; i++){
        cout << c[i] << "*x^" << i << " + ";
    }
    if (n > 0){
        cout << c[n] << "*x^" << i;
    }
    cout << endl;
}

//Pointer function for addition of polynomials
double *sum_of_poly(double *p1, int d1, double *p2, int d2, int &dr){
    //Arguments taken:
    //*p1, *p2 = Pointer variables for the given arrays 
    //d1, d2 = Degrees of the polynomials
    //&dr = Address operator for the variable that will be taken as an input paramter. 


    //First find the maximum value between the two poly degrees. 
    dr = std::max(d1, d2);

    cout << "Maximum degree of polynomial is " << dr << endl; 
    //The maximum size polynomial will be used for DMA into the array.
    double *final_poly = new double[dr];

    //Then loop through the values by first allocating the values of 
    //one array into "final_poly", and then adding each index element in 
    //this allocated arary with the second array.
    for (int i = 0; i <= d1; i++){
        final_poly[i] = p1[i];
    }
    for (int i = 0; i <= d2; i++){
        final_poly[i] += p2[i];
    }
    return final_poly;
}

double *prod_of_poly(double *p1, int d1, double *p2, int d2, int &dr){
    //Calculate the total size of the array for DMA
    dr = d1+d2;
    double *final_poly_prod = new double[dr+1];

    // Initialize the product polynomial  
    for (int i = 0; i <= dr; i++){
        final_poly_prod[i] = 0;
    }
    // Multiply two polynomials term by term 
    for (int i = 0; i <= d1; i++){
        for (int j = 0; j <= d2; j++){
            final_poly_prod[i+j] += p1[i] * p2[j];
        }
    }
    return final_poly_prod; 
}

//Finds the value in the polynomial at a given position "n".
void poly_position_finder(double *c, int n){
    cout << "Value at polynomial order " << n << ": " << c[n];
}


/////////////////////////////////////////////////////////
int main(int argc, char const *argv[]){
    double *p1, *p2, *final_poly_sum, *final_poly_prod; //First poly, second poly, final poly solution for addition, final poly solution for mult.
    int g1, g2, dr; //First order term, second order term, maximum power term 


    //Initialize p1 and p2
    p1 = read_poly(g1);
    p2 = read_poly(g2);

    //Call the function
    final_poly_sum = sum_of_poly(p1, g1, p2, g2, dr);
    print_poly(final_poly_sum, dr);

    final_poly_prod = prod_of_poly(p1, g1, p2, g2, dr);
    print_poly(final_poly_prod, dr);

    //Dealloc once done. 
    delete[] p1, p2, final_poly_sum, final_poly_prod;
    return 0;
}



