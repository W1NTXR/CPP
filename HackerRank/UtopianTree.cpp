#include<iostream>
using namespace std;

int utopianTree (int n) {
    int k = 0 ;
    for(int i = 0 ; i <= n ; i ++) {
        if(k%2==0) {
            k += 1;
        }
        else {
            k *= 2;
        }
    }

    return k;
}

int main () {
    int t ;
    cin >> t;
    while (t != 0)
    {
        int n ;
        cin >> n ;
        cout << utopianTree(n) << endl;
        t--;
    }
    return 0;
}