#include <bits/stdc++.h>
#define ll long long 
#define all(x) x.begin(), x.end()
#define MAX 5
using namespace std;

class CircularQueue{
    private: 
        int front;
        int rear;
        int size;
        int a[MAX];
    public:
        CircularQueue(){
            front = -1;
            rear = -1;
            size = MAX;
        }

    void enqueue(int data){
        if((front==0 && rear==MAX-1) || ((rear+1)%MAX==front)){
            printf("\nQueue is full");
            return ;
        }else if(front==-1){
            front = rear = 0;
            a[rear] = data;
        }else if(rear==MAX-1 and front != 0){
            rear = 0;
            a[rear] = data;
        }else{
            rear++;
            a[rear] = data;
        }
    }

    int dequeue(){
        if(front==-1){
            cout<<"\nQueue is empty"<<endl;
            return -1;
        }
        int data = a[front];
        a[front] = -1;
        if(front==rear){
            front = -1;
            rear = -1;
        }else if(front == MAX-1){
            front = 0;
        }else{
            front++;
        }
        return data;
    }
    void displayQueue()
    {
        if (front == -1)
        {
            printf("\nQueue is Empty");
            return;
        }
        printf("\nElements in Circular Queue are: ");
        if (rear >= front)
        {
            for (int i = front; i <= rear; i++)
                printf("%d ",a[i]);
        }
        else
        {
            for (int i = front; i < size; i++)
                printf("%d ", a[i]);
    
            for (int i = 0; i <= rear; i++)
                printf("%d ", a[i]);
        }
    }
};


int main(){
    CircularQueue q;
 
    // Inserting elements in Circular Queue
    q.enqueue(14);
    q.enqueue(22);
    q.enqueue(13);
    q.enqueue(-6);
 
    // Display elements present in Circular Queue
    q.displayQueue();
 
    // Deleting elements from Circular Queue
    printf("\nDeleted value = %d", q.dequeue());
    printf("\nDeleted value = %d", q.dequeue());
 
    q.enqueue(9);
    q.enqueue(20);
    q.enqueue(5);
 
    q.displayQueue();
 
    // q.enQueue(20);
    return 0;
}