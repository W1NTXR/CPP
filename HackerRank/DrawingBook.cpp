#include<iostream>
using namespace std ;


int frontCount(int n, int p) {
    if(p == 1) {
        return 0;
    }
    int i = 1;
    int count = 0;
    do {
        count ++ ;
        i += 2;
    } while (i < p && i < n) ;

    return count ;
}

int lastCount(int n, int p) {
    if(n%2==0){
        if(p == n)
            return 0;
        else {
            int count = 0 ;
            int i = n;
            while(i > p && i > 0) {
                count ++ ;
                i -= 2;
            }
            return count ;
        }
        
    }
    else {
        if(p == n || p == n-1)
            return 0 ;
        int count = 0 ;
            int i = n-1;
            while(i > p && i > 0){
                count ++ ;
                i -= 2 ;
            }
            return count ;
    }
}

int pageCount(int n, int p) {
    return min(lastCount(n,p),frontCount(n,p));
}

int main () {
    int n, p;
    cin >> n >> p;

    cout << pageCount(n,p);

    return 0;
}