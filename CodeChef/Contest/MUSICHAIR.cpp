#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t ;
    while(t != 0) {
        int x, count = 1;
        cin >> x ;
        
        for (int i = 2 ; i < x ; i ++) {
            if (x % i == 1) {
                count ++ ;
            }
        }
        
        cout << count << endl ;
        
        t -- ;
    }
	return 0;
}
