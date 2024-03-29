#pragma once
#include "Queue.h"

#define MAX 10

class Arrayqueue : public Queue
{
public:
    int frontt;
    int rear;

    Arrayqueue()
    {
        frontt = -1;
        rear = -1;
    }
    ~Arrayqueue() {}

    int arr[MAX];

    void enqueue(int element);
    int dequeue();
    bool isEmpty();
    bool isFull();
    int front();
    int back();
};
