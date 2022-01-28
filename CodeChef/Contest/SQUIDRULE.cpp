#include <iostream>
using namespace std;

int main() {
	int t ;
	cin >> t ;
	while(t != 0) {
	    
	    int n, min = INT16_MAX, sum = 0 ;
	    cin >> n ;
	    int a[n];
	    for(int i = 0 ; i < n ; i ++) {
	        cin >> a[i] ;
            if(a[i] < min) {
                min = a[i] ;
            }

            sum += a[i] ;
	    }
	    
        sum = sum - min ;
	    
	    cout << sum << endl ;

	    t --;
	}
	return 0;
}
