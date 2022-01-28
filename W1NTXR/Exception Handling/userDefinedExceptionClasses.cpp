#include<iostream>
#include<string>
using namespace std;

class DivideByZeroException {
};

class NegativeNumberException {
};

double calculate_kmpl(int km, int l) {
    if(l == 0) {
        throw DivideByZeroException();
    }
    if(km < 0 || l < 0) {
        throw NegativeNumberException();
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

    catch(const DivideByZeroException &ex) {
        cout << "Tried to divide by zero " << endl ;
    }
    catch(const NegativeNumberException) {
        cout << "Used Negative numbers" << endl ;
    }
    

    cout << "Bye" << endl ;

    return 0 ;
}