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

int main(){
    int x, y, op;

    printf("Enter two numbers(x,y) : ");
    scanf("%d %d",&x ,&y);

    printf("\nEnter the operation\n1.plus\n2.minus\n3.multiple\n>>");
    scanf("%d",&op);

    int res;

    switch (op)
    {
    case 1:
        res = plus(x,y);       
        break;
    case 2:
        res = minus(x,y);
        break;
    case 3:
        res = multi(x,y);
        break;
    default:
        break;
    }


    printf("\nResult is [%d]\n",res);

    return 0;
}
