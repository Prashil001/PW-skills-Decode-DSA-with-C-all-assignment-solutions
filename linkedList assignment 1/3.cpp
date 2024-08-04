#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        next = NULL;
    }
};
class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }

    //all self declared functions of the linked list:
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int idx,int val){
        if(idx==0) insertAtHead(val);
        else if(idx==size-1) insertAtEnd(val);
        else{
            Node* temp = head;
            Node* newEle = new Node(val);
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            newEle->next = temp->next;
            temp->next = newEle;
        }

    }
    int get(int idx){
        Node* temp = head;
        for(int i=1;i<=idx;i++){
            temp = temp->next;
        }
        return temp->val;
    }
    void deleteAtTail(){
        Node* temp = head;
        while(temp->next!=tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
    }
    void deleteAtHead(){
        if(size==0) return;
        
        head = head->next;
        size--;
    }
    void deleteAtIdx(int idx){
        if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
            Node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
};
int main(){
    LinkedList ll;
    
}