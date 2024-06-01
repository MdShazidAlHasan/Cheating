#include <bits/stdc++.h>
#define ll long long 
#define all(x) x.begin(), x.end()
#define MAX 100
using namespace std;

class Queue{
    private: 
        int front;
        int rear;
        int size;
        int a[MAX];
    public:
        Queue(){
            front = 0;
            rear = -1;
            size = 0;
        }
    bool isEmpty(){
        return (size==0);
    }
    bool isFull(){
        return (size==MAX);
    }

    void enqueue(int value){
        if(isFull()){
            cout<<"Queue is Full"<<endl;
            return ;
        }
        rear = (rear+1)%MAX;
        a[rear] = value;   
        size++;
    }
    int dequeue(){
        if(isFull()){
            cout<<"Queue is Full"<<endl;
            return -1;
        }
        int value = a[front];
        front = (front+1)%MAX;   
        size--;
        return value;
    }
    int peek(){
        if(isEmpty()){
            cout<<"The Queue is empty"<<endl;
            return -1;
        }
        return a[front];
    }
    int GetSize(){
        return size;
    }
};

int main(){
    Queue q; // Create a queue

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout<<q.peek()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.GetSize()<<endl;

}