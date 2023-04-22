#include<stdio.h>
#include<stdlib.h>
#define MaxStackSize 100
typedef int DataType;
#include "SeqStack.h"

int main(){
    SeqStack mystack;
    int i,x;
    StackInitiate(&mystack);
    for(i=0;i<10;i++)
        StackPush(&mystack,i+1);
    StackTop(mystack,&x);
    printf("当前栈顶元素为：%d\n",x);
    printf("依次出栈的元素序列如下：\n");
    while(StackNotEmpty(mystack)){
        StackPop(&mystack,&x);
        printf("%d  ",x);
    }
    system("pause");
    return 0;
}