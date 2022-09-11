#include "Circularqueue.h"
#include <iostream>

void Circularqueue::enqueue(int element)
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
int Circularqueue::dequeue()
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
bool Circularqueue::isEmpty()
{
    if (frontt == rear)
    {
        return true;
    }
    return false;
}
bool Circularqueue::isFull()
{
    if (rear == MAX - 1)
    {
        return true;
    }
    return false;
}
int Circularqueue::front()
{
    if (frontt != rear)
    {
        return arr[frontt + 1];
    }
    return 0;
}
int Circularqueue::back()
{
    if (frontt == rear)
    {
        return 0;
    }
    return arr[rear];
}