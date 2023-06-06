#include "stack.h"

void CreateStack(StackType *s){
    s->top=0;
}
void Push (StackType *s ,EntryType item){
    s->Entry[s->top++]=item;
}
void Pop(StackType *s ,EntryType *item){
    *item=s->Entry[--s->top];
}
int StackSize (StackType *s){
    return s->top;
}
EntryType GetFirst(StackType s){
return s.Entry[0];
}
EntryType GetLast(StackType s){
return s.Entry[Max-1];
}
void DestroyStack(StackType *s){
s->top=0;
}
void StackCopy(StackType *s , StackType *s2){
    int i;
    for(i=0;i<Max;i++){
        s2->Entry[i]=s->Entry[i];
        s2->top++;
    }
}
int StackEmpty (StackType *s){

   if(s->top==0)
        return 1;
    else
        return 0;

}
int StackFull (StackType *s){
    if(s->top==Max)
        return 1;
    else
        return 0;

}
EntryType peek(StackType *s){
    EntryType item;
    if(s->top== -1)
        printf("Underflow Error\n");
    else
        item=s->Entry[s->top];
    return item;
}
