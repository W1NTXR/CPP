#include<stdio.h>
#include<conio.h>
void main()
{
   int a[10],b[10],i,c[30],j,k=0,n1,n2,l = 0;


   printf("Enter number of  element of set A\n");
   scanf("%d",&n1);
   printf("Enter the element of set A \n");
   for(i=0;i<n1;i++) {
      scanf("%d",&a[i]);
    }
   
   printf("Enter number of element of set B\n");
   scanf("%d",&n2);
   printf("Enter the element of set B \n");
   for(i=0;i<n2;i++)
     scanf("%d",&b[i]);

    

   
   
   for(i=0;i<n1;i++) {
       c[i] = a[i] ;
   }
    l = n1 ;
   for(i=0;i<n2;i++) {
       k = 0 ;
       for(j=0;j<n2;j++) {
           if(c[j] == b[i]) {
               k = 1 ;
               break ;
           }
       }
       if(k != 1) {
           c[l] = b[i] ;
           l ++ ;
       }
   }

   

   printf("Union of set A and B is:-\n");
    for(i=0;i<l;i++)
      printf("%d ",c[i]);
}
