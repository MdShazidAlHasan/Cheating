#include <bits/stdc++.h>
#define ll long long 
#define all(x) x.begin(), x.end()
#define MAX 100
using namespace std;

class Stack{
    int top;
    public:
        int a[MAX];
    Stack(){
        top = -1;
    }
    bool push(int x){
        if(top>=(MAX-1)){
            cout<<"Stack overflow"<<endl;
            return false;
        }
        a[++top] = x;
        cout<<x<<" pushed into the stack"<<endl;
    }
    int pop(){
        if(top<0){
            cout<<"Stack underflow"<<endl;
            return 0;
        }
        int x = a[--top];
        return x;
    }
    int peek(){
        if(top<0){
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        int x = a[top];
        return x;
    }
    bool isEmpty(){
        return (top<0);
    }
};

int main(){
    Stack s = Stack();
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    cout<<s.peek()<<endl;
}