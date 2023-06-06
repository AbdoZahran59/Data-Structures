#ifndef LISTS_H_INCLUDED
#define LISTS_H_INCLUDED

typedef char EntryType;

typedef struct nodeT{
    EntryType info;
    struct nodeT *next;
}Node;

typedef struct list{
    Node* head;
}List;

void CreateList(List *l);
int IsEmpty(List *l);
int IsFull(List *l);
void InsertElement(List *l,EntryType item , int pos);
EntryType RetrieveElement (List *l , int pos);
void ClearList(List *l);
#endif // LISTS_H_INCLUDED
