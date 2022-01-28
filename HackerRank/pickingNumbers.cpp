#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int pickingNumbers(vector<int> a) {
    sort(a.begin(),a.end());
    int c1 = 0 , c2 = 0;
    int k = a[0];
    for(int i = 0 ; i < a.size(); i ++) {
        if(a[i] - k <= 1) {
            c1 ++ ;
        }
        else {
            if(c1 > a.size()/2)
                return c1;
            c2 = max(c1,c2);
            c1 = 0 ;
            if(i+1 > a.size())
                k = a[i+1];
        }
    }
    return c2;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ;
    vector<int> a ;
    for(int i = 0 ; i < n ; i ++) {
        int k ;
        cin >> k ;
        a.push_back(k);
    }
    cout << pickingNumbers(a);

    return 0;
}