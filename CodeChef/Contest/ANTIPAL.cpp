#include <iostream>
using namespace std;

int checkPalin (char s[], int size) {
    for(int i = 0 ; i < size ; i ++) {
        if (s[i] == s[size-1-i] ){
            return 0 ;
        }
    }

    return 1;
}

int main() {
	int w ;
	cin >> w ;
	while (w != 0) {
	    int n ;
	    cin >> n ;
	    
        if (n % 2 != 0) {
            cout << -1 << endl ;
        }

        else {
            char s[n] , t[n] ;
	    for(int i = 0 ; i < n ; i ++) {
	        s[i] = '1';
	        t[n-1-i] = '1' ;
	    }

        int x = checkPalin(s, n) ;
	    
	    while (x != 1) {
            for(int i = 0 ; i < n ; i ++) {
	            if (s[i] == t[i]) {
	                s[i] = '0';
	                t[n-1-i] = '0';
	            }
	        }
            x = checkPalin(s, n) ;
        }
	    
	    for(int i = 0 ; i < n ; i ++) {
	        cout << s[i] ;
	    }

        cout << endl ;
        }
	    
	    w -- ;
	}
	return 0;
}
