#include "queue.h"
#include <iostream>
template<typename T>
queue<T>::queue(int n)
{
    capacity = n;
    size = 0;
    data = new T[capacity];
}

template<typename T>
void queue<T>::enqueue(T element)
{
    data[size] = element;
    size++;
    rear++;
}

template<typename T>
T queue<T>::dequeue()
{
    T temp = data[front];
    data[front] = ' ';
    front++;
    size--;
    return temp;
}

template<typename T>
T queue<T>::first()
{
    return (data[front]);
}

template<typename T>
bool queue<T>::isEmpty()
{
    return (size == 0);
}

template<typename T>
int queue<T>::queueSize()
{
    return (size);
}

template<typename T>
void queue<T>::clear()
{
    delete[] data;
    data = new T[capacity];
    size = 0;
    front = 0;
    rear = 0;
}

template<typename T>
void queue<T>::print()
{
    for(int i = front; i < rear; i++)
    {
       std::cout<<data[i]<<" ";
    }
}
