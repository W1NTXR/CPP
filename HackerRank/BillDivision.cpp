#include<iostream>
#include<vector>
using namespace std;

void bonAppetite(vector<int> bill, int k, int b) {
    int sum = 0 ;
    for(int i = 0 ; i < bill.size() ; i ++)  {
        if(i != k) {
            sum += bill[i];
        }
    }
    if(b > sum/2) {
        cout << b-sum/2 ;
        return;
    }
    cout << "Bon Appetit";
}

int main () {
    int n ,k,b;
    vector<int> bill ;
    cin >> n >> k;
    for(int i = 0 ; i < n ; i ++) {
        int k ;
        cin >> k ;
        bill.push_back(k);
    }
    cin >> b ;
    bonAppetite(bill,k,b);
}