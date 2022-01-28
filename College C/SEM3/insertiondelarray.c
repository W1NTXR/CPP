#include<stdio.h>
#include<conio.h>
#define MAXSIZE 5
struct stack
{
    int stk[MAXSIZE];
    int top;
};

typedef struct stack ST;
ST s;

void push() {
    int num;
    if(s.top == MAXSIZE-1) {
        printf("Stack Full \n");
        return ;
    }

    else {
        printf("Enter element to insert");
        scanf("%d", &num);
        s.top = s.top+1;
        s.stk[s.top] = num;
    }
    return ;
}

int pop () {
    int num ;
    if(s.top == -1) {
        printf("\nStack Empty\n");
        return s.top;
    }

    else {
        num = s.stk[s.top];
        printf("\nPopped Element is =%d",s.stk[s.top]);
        s.top = s.top-1;
        return num ;
    }
}

void display () {
    int i ;
    if(s.top == -1) {
        printf("|\nStack Empty\n");
        return ;
    }

    else {
        printf("\nStatus Empty\n");
    }
}