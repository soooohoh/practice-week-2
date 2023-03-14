#include <stdio.h>

int minus(int x, int y){
    return x-y;
}

int plus(int x, int y){
    return x+y;
}

int multi(int x, int y){
    return x*y;
}

int div(int x, int y){
    return x/y;
}

int main(){
    int x, y, op;

    printf("Enter two numbers(x,y) : ");
    scanf("%d %d",&x ,&y);

    printf("\nEnter the operation\n1.plus\n2.minus\n3.multiple\n4.divition\n>>");
    scanf("%d",&op);

    int res;

    if(op==1) res = plus(x,y);
    if(op==2) res = minus(x,y);
    if(op==3) res = multi(x,y);
    if(op==4) res = div(x,y);

    printf("\nResult is [%d]\n",res);

    return 0;
}
