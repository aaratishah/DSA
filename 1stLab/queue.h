#ifndef QUEUE_H
#define QUEUE_H

#define MAX_QUEUE_SIZE 10
class Queue{
    private:
        char data[MAX_QUEUE_SIZE];
        int Front;
        int Rear;
        int ele;
    public:
        Queue();
        ~Queue();

        bool isEmpty();
        bool isFull();
        void enqueue(int data);
        int dequeue();
        int front();
        int rear();
        
};

#endif