#include<iostream>
using namespace std;

int main () {
    int  t; 
    cin >> t ;
    while (t != 0)
    {
        int k , n , count = 0 ;
        cin >> n >> k ;
        int a[n] ;
        for(int i = 0 ; i < n ; i ++ ) {
            cin >> a[i] ;
            if (a[i] > k) {
                count ++ ;
            }
        }

        cout << count << endl ;

        t -- ;
    }
    
}