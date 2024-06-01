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
    

    void push_back(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            newNode->next = newNode;
            head = newNode;
            return ;
        }
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
    void remove(int key){
        if(head->data==key){
            Node* temp = head;
            Node* head2 = head->next;
            while(temp->next!=head){
                temp = temp->next;
            } 
            temp->next = head2;
            head = head2;
            return ;
        }
        Node* temp = head;
        Node* temp2;
        while(temp->next->data!=key and temp->next==nullptr){
            temp = temp->next;
        }
        temp2 = temp->next->next;
        temp->next = temp2;
    }
    void display(){
        Node* temp = head;
        do{
            cout<<temp->data<<"->";
            temp = temp->next;
        }while(temp!=head);
        
    }
};

int main(){
    LinkedList list;

    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.remove(1);
    list.display();
}