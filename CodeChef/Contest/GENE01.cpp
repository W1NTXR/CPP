#include <iostream>
using namespace std;

int main() {
    char a,b ;
    cin >> a >> b ;
    
    if (a == 'R' || b == 'R') {
        cout << 'R' ;
    }
    
    else if (a == 'B' || b == 'B') {
        cout << 'B' ;
    }
    
    else if ( a == 'G' && b == 'G') {
        cout << 'G';
    }
    
	return 0;
}