#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


void CreateList(List *l){
     l->head=NULL;
}

int IsEmpty(List *l){
    return(l->head==NULL);
}

int IsFull(List *l){
    return 0;
}

void InsertElement(List *l,EntryType item , int pos){
    Node *p = (Node*)malloc(sizeof(Node));
    p->info=item;
    if(pos==0){
        p->next=l->head;
        l->head=p;
    }
    else{
        Node *q;
        int i;
        for(q=l->head,i=0;i<pos-1;i++)
            q=q->next;
        p->next=q->next;
        q->next=p;
    }
}

EntryType RetrieveElement (List *l , int pos){
    EntryType item;
    int i;
    Node *q , *tmp;
    if(pos==0){
      item=l->head->info;
      tmp=l->head;
      l->head=l->head->next;
      free(tmp);
    }
    else{
        for(q=l->head,i=0;i<pos-1;i++)
           q=q->next;
        item=q->next->info;
        tmp=q->next;
        q->next=tmp->next;
        free(tmp);
    }
    return item;
}
void ClearList(List *l){
    Node *q;
    while(l->head)
    {
        q=l->head;
        l->head=l->head->next;
        free(q);
    }
}
