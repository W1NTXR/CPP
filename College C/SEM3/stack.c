
#include<stdio.h>
#define max 5
int top=-1;
void push(int s[],int item) {
    if(top==max-1)
        printf("Stack full");
    else{
        top=top+1;
        s[top]=item;
     }
    }
int pop(int s[]) {
    int item;
    if(top==-1){
    printf("Stack empty");
    return-1;
    }
    else{
        item=s[top];
        top=top-1;
    }
    return item;
}
void display(int s[])
{
    int i;
    printf("\n The stack is:\n");
    for(i=top;i>=0;i--)
        printf("\n%d",s[i]);
}
int main()
{
    int ch,st[max],item,yn;
    while(1){
        printf("Press 1. Push 2. Pop 3. Display\n");
        printf("Enter your choice");
        scanf("%d", & ch);
        switch(ch){
            case 1: 
                printf("\n Enter the item you want to insert:\n");
                scanf("%d",&item);
                push(st,item);
                break;
            case 2: item=pop(st);
                if(item>-1)
                    printf("\n The deleted item is: %d\n",item);
                break;
            case 3: display(st);
            break;
        }
    printf("\n Do you want to continue: (0/1)\n");
    scanf("%d",&yn);
    if(yn==0)
        break;
    }
}