#include<iostream>
using namespace std;

double calculate_kmpl(int km, int l) {
    if(l == 0) {
        throw 0;
    }
    return static_cast<double>(km)/l;
}

int main () {
    int km, l;
    cout << "Enter km: " << endl ;
    cin >> km;
    cout << "Enter Litres: " << endl ;
    cin >> l ;

    double kmpl;
    try {
        kmpl = calculate_kmpl(km,l) ;
        cout << "Result: " << kmpl << endl ;
    }

    catch(int &ex) {
        cout << "Tried to divide by zero " << endl ;
    }

    cout << "Bye" << endl ;

    return 0 ;
}