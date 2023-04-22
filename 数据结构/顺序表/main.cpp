#include<stdio.h>
#define MaxSize 100
typedef int DataType;
#include"SeqList.h"

int main(){
    int x,i;
    SeqList mylist;
    ListInitiate(&mylist);
    for(i=0;i<10;i++){
        ListInsert(&mylist,i,i+1);
    }
    ListDelete(&mylist,4,&x);
    for(i=0;i<9;i++){
        ListGet(mylist,i,&x);
        printf("%d ",x);
    }
    return 0;
}