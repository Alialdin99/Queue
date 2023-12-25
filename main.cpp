#include <iostream>
#include "queue.cpp"

int main() {
    queue<int>q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.dequeue();
    q.print();
    std::cout<<std::endl;
    std::cout<<q.queueSize();


}
