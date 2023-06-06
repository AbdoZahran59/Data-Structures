#include "Queue.h"
void CreateQueue (Queue *pq){

    pq->Front=0;
    pq->Rear=-1;
    pq->Size=0;
}

void Append (Queue *e , Customer pq){
    e->Rear =(e->Rear + 1) % Max;
    e->entry[e->Rear]=pq;
    e->Size++;

}

void Server (Queue *e , Customer *pq){
    *pq=e->entry[e->Front];
    e->Front= (e->Front+ 1 ) % Max;
    e->Size--;
}

int QueueEmpty (Queue *pq){

    return !pq->Size;
}

int QueueFull (Queue *pq){

    return (pq->Size==Max);

}
