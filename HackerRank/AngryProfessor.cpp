#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string angryProfessor(int k, vector<int> a){
    sort(a.begin(),a.end());
    int c = 0;
    int i = 0 ;
    while(c <= k && a[i] <= 0 && i < a.size()) {
        c ++ ;
        i ++ ;
    }
    if(c >= k) {
        return "NO";
    }
    return "YES";
}

int main () {
    int t ;
    cin >> t ;
    while (t != 0)
    {   
        int n,k;
        vector<int> a ;
        cin >> n >> k ;
        for(int i = 0 ; i < n ; i ++) {
            int l ;
            cin >> l ;
            a.push_back(l);
        }
        cout << angryProfessor(k,a) << endl ;
        t -- ;
    }
    return 0;
}