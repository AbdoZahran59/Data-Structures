#ifndef QUEUELINKED_H_INCLUDED
#define QUEUELINKED_H_INCLUDED

struct QNode {
    int key;
    struct QNode* next;
}QNode;
 struct Queue {
    struct QNode *front, *rear;
}Queue;
 struct QNode* newNode(int k)
{
    struct QNode* temp
        = (struct QNode*)malloc(sizeof(struct QNode));
    temp->key = k;
    temp->next = NULL;
    return temp;
}NewNode;


#endif // QUEUELINKED_H_INCLUDED
