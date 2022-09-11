#pragma once
#include "Queue.h"

#define MAX 10

class Circulararrayqueue : public Queue
{
public:
    int frontt;
    int rear;

    Circulararrayqueue()
    {
        frontt = -1;
        rear = -1;
    }
    ~Circulararrayqueue() {}

    int arr[MAX];

    void enqueue(int element);
    int dequeue();
    bool isEmpty();
    bool isFull();
    int front();
    int back();
};
