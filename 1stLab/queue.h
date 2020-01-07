#ifndef QUEUE_H
#define QUEUE_H

#define MAX_QUEUE_SIZE 10
class Queue{
    private:
        int data[MAX_QUEUE_SIZE];
        int Front;
        int Rear;
        int ele;
    public:
        Queue();
        ~Queue();

        bool isEmpty();
        bool isFull();
        void enqueue(int ele);
        int dequeue();
        int front();
        int rear();
        
};

#endif