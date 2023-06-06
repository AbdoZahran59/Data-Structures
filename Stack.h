#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include "Global.h"
typedef struct Stack{
    int top;
    Customer Entry[Max];
}StackType;

void CreateStack(StackType *s);
void Push (StackType *s ,Customer item);
void Pop(StackType *s ,Customer *item);
int StackEmpty (StackType *s);
int StackFull (StackType *s);

#endif // STACK_H_INCLUDED
