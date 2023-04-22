#include<stdio.h>
#include<stdlib.h>
typedef int DataType;
#include"SLNode.h"

int main(){
    SLNode *head;
    int i,x;
    ListInitiate(&head);
    for(i=0;i<10;i++)
        ListInsert(head,i,i+1);
    ListDelete(head,4,&x);
    for(i=0;i<ListLength(head);i++){
        ListGet(head,i,&x);
        printf("%d  ",x);
    }
    Destroy(&head);
    return 0;
}