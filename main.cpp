#include "Arrayqueue.h"
#include "Circularqueue.h"
#include <iostream>

int main()
{
    Arrayqueue *Aq = new Arrayqueue();
    Aq->isEmpty() ? std::cout << "Is EMPTY\n" : std::cout << "ISN'T EMPTY\n";
    Aq->enqueue(5);
    Aq->enqueue(8);
    Aq->enqueue(59);
    Aq->isFull() ? std::cout << "Is FULL\n" : std::cout << "ISN'T FULL\n";

    std::cout << "\nThe dequed element is "
              << Aq->dequeue();
    std::cout << "\nThe front element is " << Aq->front();
    std::cout << "\nThe back element is " << Aq->back();

    std::cout << "\n"
              << Aq->dequeue();
    std::cout << "\n"
              << Aq->dequeue();

    Circulararrayqueue *Cq = new Circulararrayqueue();
    Cq->isEmpty() ? std::cout << "\nIs EMPTY\n" : std::cout << "ISN'T EMPTY\n";
    Cq->enqueue(85);
    Cq->enqueue(88);
    Cq->enqueue(65);
    Cq->isFull() ? std::cout << "Is FULL\n" : std::cout << "ISN'T FULL\n";

    std::cout << "\nThe dequed element is"
              << Cq->dequeue();
    std::cout << "\nThe front element is " << Cq->front();
    std::cout << "\nThe back element is " << Cq->back();

    std::cout << "\n"
              << Cq->dequeue();
    std::cout << "\n"
              << Cq->dequeue();
}