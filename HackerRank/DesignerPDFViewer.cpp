#include<iostream>
#include<vector>
#include<string>
using namespace std;

int maxArea(vector<int> h, string word){
    int max = 0;
    int i = 0 ;
    int a ;
    while(word[i] != '\0') {
        a =word[i];
        if(max < h[a-97]) {
            max = h[a-97];
        }
        i ++ ;
    }

    return i * max ;
}

int main () {
    string word ;
    vector<int> h ;
    for(int i = 0 ; i < 26 ; i ++) {
        int k ;
        cin >> k ;
        h.push_back(k);
    }
    getline(cin, word);

}