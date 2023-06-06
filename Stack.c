#include"Stack.h"
void CreateStack(StackType *s){

    s->top=0;

}

void Push (StackType *s ,Customer item){

    s->Entry[s->top++]=item;

}

void Pop(StackType *s ,Customer *item){

    *item=s->Entry[--s->top];

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
