#pragma once
#include "Queue.h"

#define MAX 10

class Arrayqueue : public Queue
{
public:
    int frontt = -1;
    int rear = -1;

    Arrayqueue() {}
    ~Arrayqueue() {}

    int arr[MAX];

    void enqueue(int element);
    int dequeue();
    bool isEmpty();
    bool isFull();
    int front();
    int back();
};
