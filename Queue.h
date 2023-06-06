#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include "Global.h"
typedef struct {
    int Front;
    int Rear;
    int Size;
    Customer entry[Max];
 }Queue;
void CreateQueue (Queue *pq);
void Append (Queue *e , Customer pq);
void Server (Queue *e , Customer *pq);
int QueueEmpty (Queue *pq);
int QueueFull (Queue *pq);

#endif // QUEUE_H_INCLUDED
