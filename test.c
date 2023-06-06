#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void Print(StackType s){
    int i;
    for(i=0;i<Max;i++){
        EntryType x;
        Pop(&s ,&x);
        printf("%c\n",x);
    }

}
EntryType GetFirstUSER(StackType *s){
    EntryType i, ar[Max],item;
    for(i=0;i<Max;i++){
        Pop(s , &item);
        ar[i]=item;
    }
    for(i=Max-1;i>=0;i--){
        Push(s,ar[i]);
            }
    return item;

}
int GetLastUSER(StackType *s){
    int i, A[Max],L;
    for(i=0;i<Max;i++){
        Pop(s,&L);
        A[i]=L;
    }
    for(i=Max-1;i>=-1;i--){
        Push(s,A[i]);
    }
    return A[0];

}
void DestroyUser(StackType*s){
    EntryType i,d;
    for(i=0;i<Max;i++){
        Pop(s,&d);
    }

}

void StackCopyUser(StackType *s, StackType*s2){
    int i,c,a[Max];
    for(i=0;i<Max;i++){
        Pop(s,&c);
        a[i]=c;
    }
    for(i=Max-1;i>=0;i--){
        Push(s,a[i]);
        Push(s2,a[i]);
    }

int StackSizeUser(StackType s){
    int i,count=0,x;
    while(!StackEmpty(&s)){
        Pop(&s,&x);
        count++;
    }
    return count;
}


}

void PrintUser(StackType *s){
    int i,x[Max],holder;
    for(i=0;i<Max;i++){
        Pop(s,&holder);
        x[i]=holder;
    }
     for(i=Max-1;i>=0;i--){
        printf("%d\n",x[i]);
        Push(s,x[i]);}
}
