#include <iostream>
#include <string.h>
using namespace std;
int main () {
    int n1 , n2 ;
    cin >> n1 >> n2 ;
    string a , b ;
    getline(cin , a) ;
    getline(cin , b) ;
    cout << a+b ;
    char temp ;
    a[0] = temp ;
    a[0] = b[0] ;
    b[0] = temp ;
    cout << a << ' ' << b ;
    
    
    return 0 ;
}