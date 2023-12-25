
#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H

template<typename T>
class queue
{
private:
    T* data;
    int size;
    int capacity;
    int rear = 0;
    int front = 0;

public:
    queue(int n);
    void enqueue(T element);
    T dequeue();
    T first();
    bool isEmpty();
    int queueSize();
    void clear();
    void print();
};
#endif //QUEUE_QUEUE_H
