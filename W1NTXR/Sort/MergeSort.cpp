#include<iostream>
using namespace std;

void merge (int arr[] , int l, int mid, int r, int &count)  {
    int n1 = mid - l + 1 ;
    int n2 = r - mid ;

    int a[n1] ;
    int b[n2] ;

    for (int i = 0 ; i < n1 ; i ++ ) {
        a[i] = arr [l+i] ;
    }

    for (int i = 0 ; i < n2 ; i ++ ) {
        b [i] = arr [mid + 1 + i] ;
    }

    int i = 0 ;
    int j = 0 ;
    int k = l ;

    while ( i < n1 && j < n2 ) {
        if (a[i] < b[j]) {
            arr [k] = a [i] ;
            i ++ ;
            k ++ ;
        }

        else {
            arr [k] = b [j] ;
            j ++ ;
            k ++ ;
        }
    }

    while (i < n1) {
        arr[k] = a[i] ;
        i ++ ;
        k ++ ;
    }

    while (j < n2) {
        arr [k] = b [j] ;
        j ++ ;
        k ++ ;
    }
}

void mergeSort (int arr[], int l, int r, int &count) {
    if ( l < r ) {
        int mid = (l + r) / 2 ;
        mergeSort (arr, l, mid,count) ;
        mergeSort (arr, mid + 1, r,count) ;

        merge (arr,l,mid,r,count) ;
    }
}

int main () {
    int n, count = 0 ;
    cin >> n ;
    int arr [n] ;
    for (int i = 0 ; i < n ; i ++ ) {
        cin >> arr [i] ;
    }
    mergeSort (arr,0,n,count) ;
    for (int i = 0 ; i < n ; i ++ ) {
        cout << arr [i] << " " ;
    }
    cout << endl << count ;

    return 0 ;
}