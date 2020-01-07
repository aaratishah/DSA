#include "stack.h"
#include<iostream>
using namespace std;

stack::stack(){
    top = -1;
}

stack::~stack(){}

bool stack::isEmpty(){
    if(top < 0)
    { 
        cout << "the stack is empty";
        return true;
    }
    else
    {
        return 0;
    }
    
}
bool stack::isFull(){
    if(top>=MAX_STACK_SIZE -1){
        cout << "the stack is full";
        return true;
    }
    else{
        return false;
    }
    
}

void stack::push(int data){
    if(isFull()){
        cout << "satck is full, cannot pass more elements!" << endl;
    }
    else{
        top++;
        this->data[top] = data;
    }
}

int stack::pop(){
    if(isEmpty()){
        cout << "stack underflow" << endl;
        return -1;
    }
    else{
        int val = data[top];
        top--;
        return val;
    }
}

int stack::Top() {
	if (isEmpty()){
        cout << "stack underflow" << endl;
    }	
	else return data[top];
}

int main(){
    stack s;
    s.isFull();
    s.isEmpty();
    cout << endl;
    s.push(5);
    s.push(6);
    s.push(7);
    cout << "popped element is:" << s.pop() << endl;
    cout << "peek element is:" << s.Top() << endl;
    s.isFull();
    s.isEmpty();
    cout << endl;
}
