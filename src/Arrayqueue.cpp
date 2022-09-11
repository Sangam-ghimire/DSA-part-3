#include "Arrayqueue.h"
#include <iostream>

void Arrayqueue::enqueue(int element)
{
    if (isFull() != true)
    {
        rear++;
        arr[rear] = element;
    }
    else
    {
        std::cout << "Queue overflown" << std::endl;
    }
}
int Arrayqueue::dequeue()
{
    // If the queue is not empty, increase front by 1 and return the value at index front
    // of the array.

    if (isEmpty() != true)
    {
        frontt++;
        return arr[frontt];
    }
    std::cout << "Queue Underflown";
    return 0;
}
bool Arrayqueue::isEmpty()
{
    if (frontt == rear)
    {
        return true;
    }
    return false;
}
bool Arrayqueue::isFull()
{
    if (rear == MAX - 1)
    {
        return true;
    }
    return false;
}
int Arrayqueue::front()
{
    if (frontt != rear)
    {
        return arr[frontt + 1];
    }
    return 0;
}
int Arrayqueue::back()
{
    if (frontt == rear)
    {
        return 0;
    }
    return arr[rear];
}