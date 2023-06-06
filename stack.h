#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define Max 10
typedef char EntryType;

typedef struct Stack{
    int top;
    EntryType Entry[Max];
}StackType;

void CreateStack(StackType *s);
void Push (StackType *s ,EntryType item);
void Pop(StackType *s ,EntryType *item);
int StackSize (StackType *s);
EntryType GetFirst(StackType s);
EntryType GetLast(StackType s);
void DestroyStack(StackType *s);
void StackCopy(StackType *s , StackType *s2);
int StackEmpty (StackType *s);
int StackFull (StackType *s);
EntryType peek(StackType *s);
#endif // STACK_H_INCLUDED
