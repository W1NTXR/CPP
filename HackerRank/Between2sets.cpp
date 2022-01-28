#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> cf (vector<int> x, vector<int> y) {
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    vector<int> t ;
    for(int i = x[x.size()-1] ; i <= y[0] ; i ++) {
        int count = 0 ;
        for(int j = 0 ; j < y.size() ; j ++) {
            if(y[j] % i == 0 ) {
                count = 1;
            }
            else {
                count = 0 ;
                break ;
            }
        }
        if(count == 1) {
            t.push_back(i) ;
        }
    }
    return t ;
}

int getTotalX(vector<int> x, vector<int> y){

    int count = 0 ;

    vector<int> k ;
    for(int i = 0 ; i < cf(x,y).size() ; i ++ ) {
        k.push_back(cf(x,y)[i]) ;
    }
    for(int i = 0 ; i < k.size() ; i ++ ) {
        int l = 0 ;
        for(int j = 0 ; j < x.size() ; j ++) {
            if(k[i] % x[i] == 0 ) {
                l = 1;
            }
            else {
                l = 0 ;
                break;
            }
        }
        if(l == 1) {
            count ++ ;
        }
    }

    return count ;
}

int main () {
    vector<int> a;
    vector<int> b;
    int n1, n2;
    cin >> n1 >> n2 ;
    
    for(int i = 0 ; i < n1 ; i ++) {
        int k ;
        cin >> k ;
        a.push_back(k);
    }
    
    for(int i = 0 ; i < n2 ; i ++) {
        int k ;
        cin >> k ;
        b.push_back(k);
    }
    
    
    cout << getTotalX(a,b);
    

    return 0 ;
}