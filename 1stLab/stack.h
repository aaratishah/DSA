#ifndef STACK_H
#define STACK_H

#define MAX_STACK_SIZE 100

class stack {
    private:
        int data[MAX_STACK_SIZE];
        int top;
        int val;

    public:
        stack();
        ~stack();
        void push(int data);
        int pop();
        int Top(); //int peak();
        bool isEmpty();
        bool isFull();
        
};

#endif