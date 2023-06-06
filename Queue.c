#include "Queue.h"
void CreateQueue(QueueType *q){
    q->front=0;
    q->rear=Max -1;
    q->size=0;
}
int IsEmpty(QueueType *q){

    return (q->size==0);
}
 int IsFull(QueueType *q){
    return (q->size==size);
 }

 void Enqueue(QueueType *q, Customer c)
