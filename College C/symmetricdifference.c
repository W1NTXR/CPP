#include <stdio.h>

int main()
{
    int a[10],b[10],c[10],d[10],ans[20],n,w,i,j,k=0,x=0,r=0,t=0 ;
    printf("\nEnter size of set A  ");
    scanf("%d",&n) ;
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]) ;
    }
    printf("\nEnter size of set B  ");
    scanf("%d",&w) ;
    for(i=0;i<w;i++) {
        scanf("%d",&b[i]) ;
    }
    for(i = 0 ; i < n ; i ++) {
        k = 0 ;
        for (j = 0 ; j < w ; j ++) {
            if(a[i] == b[j]) {
                k = 1 ;
                break ;
            }
        }
        if(k != 1) {
            c[x] = a[i] ;
            x ++ ;
        }
    }
    
    for(i = 0 ; i < w ; i ++) {
        k = 0 ;
        for (j = 0 ; j < n ; j ++) {
            if(b[i] == a[j]) {
                k = 1 ;
                break ;
            }
        }
        if(k != 1) {
            d[r] = b[i] ;
            r ++ ;
        }
    }
    
    for(i = 0 ; i < x ; i ++) {
        ans[i] = c[i] ;
    }
    
    for(i = 0 ; i < r ; i ++) {
        k = 0 ;
        for(j = 0 ; j < x ; j ++) {
            if(d[i] == c[j]) {
                k = 1 ;
                break ;
            }
        }
        if(k != 1) {
            ans[x+t] = d[i] ;
            t ++ ;
        }
    }
    
    printf("\nSymmetric Difference of A and B is:") ;
    for(i = 0 ; i < x + t ; i ++) {
        printf("\t%d",ans[i]) ;
    }
    

    return 0;
}
