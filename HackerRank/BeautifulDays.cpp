#include<iostream>
#include<string>
using namespace std;

int numrev (int x) {
    int l  = 0 ;
    while(x > 0) {
        l = (x%10 + l*10) ;
        x /= 10;
    }

    return l;
}

int absdif(int x, int y) {
    return (max(x,y)-min(x,y));
}

int BeautifulDays(int i, int j, int k) {
    int c1 = 0;
    for(int x = i ; x <= j ; x ++) {
        if(absdif(x,numrev(x))%k==0){
            c1 ++ ;
        }
    }
    return c1;
}

int main () {
    int i,j,k;
    cin >> i >> j >> k ;
    cout << BeautifulDays(i,j,k);

    return 0;
}