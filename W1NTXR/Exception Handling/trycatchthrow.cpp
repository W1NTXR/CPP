#include<iostream>
using namespace std;

int main () {
    int km;
    int l;
    double km_per_l;

    cout << "Enter km driven" << endl;
    cin >> km;

    cout << "Enter litres used" << endl;
    cin >> l;

    try {
        if(l == 0)
            throw 0;
        km_per_l = static_cast<double>(km)/l ;
        cout << "Result " << km_per_l << endl ;
   }
   catch (int &ex) {
       cerr << "Sorry, you cant divide by zero" << endl ;
   }
   cout << "Bye" << endl ;
   return 0;                                        
}