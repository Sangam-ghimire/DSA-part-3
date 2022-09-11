class Queue
{
public:
    Queue() {}
    ~Queue() {}

    virtual void enqueue(int element) = 0;
    virtual int dequeue() = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
    virtual int front() = 0;
    virtual int back() = 0;
};