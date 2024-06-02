#include <bits/stdc++.h>
#define ll long long 
#define all(x) x.begin(), x.end()

using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = nullptr; 
    }
};
class LinkedList{
    private:
        Node* head;
    public:
        LinkedList(){
            head = nullptr;
        }
    // void push_front(int data){
    //     Node* temp = head;
    //     Node* head = new Node(data);
    //     head->next = temp;
    // }
    void push_back(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void remove(int key){
        Node* temp = head;
        Node* temp2;
        while(temp->next->data!=key and temp->next==nullptr){
            temp = temp->next;
        }
        temp2 = temp->next->next;
        temp->next = temp2;
    }
    void search(int key){
        Node* temp = head;
        while (temp->next != nullptr) {
            if(temp->data == key){
                cout<<"Element found"<<endl;
                return ;
            }
            temp = temp->next;
        }
        if(temp->data == key){
            cout<<"Element found"<<endl;
            return ;
        }
        cout<<"Element not found"<<endl;
    }
    void display(){
        Node* temp = head;
        do{
            cout<<temp->data<<"->";
            temp = temp->next;
        }while(temp!=nullptr);
        
    }
};

int main(){
    LinkedList list;

    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    // list.push_front(0);
    // list.search(3);
    list.remove(2);
    list.display();
}