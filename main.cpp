#include "Arrayqueue.h"
#include <iostream>

int main()
{
    Arrayqueue *Aq = new Arrayqueue();
    Aq->isEmpty() ? std::cout << "Is EMPTY\n" : std::cout << "ISN'T EMPTY\n";
    Aq->enqueue(5);
    Aq->enqueue(8);
    Aq->enqueue(59);
    Aq->isFull() ? std::cout << "Is FULL\n" : std::cout << "ISN'T FULL\n";

    std::cout << "\n"
              << Aq->dequeue();
    std::cout << "\nThe front element is " << Aq->front();
    std::cout << "\nThe back element is " << Aq->back();

    std::cout << "\n"
              << Aq->dequeue();
    std::cout << "\n"
              << Aq->dequeue();
}