
#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        
        Node(int x,Node *n){
            data =x;
            next=n;
        }
};

int Queue() {
    private:
        Node *back;
        Node *front;
        int count;
        
    public:
        Queue(){
            front = back = nullptr;
            count=0;
        }
        
        void enqueue(int val){
            Node* newNode = new newNode(val);
            if(back==nullptr){
                front = back = newNode;
            }else{
                back -> newNode;
                back = newNode;
            }
            count++;
        }
        void dequeue(){
            if(isEmpty()){
                cout<<"Queue is empty now.";
                return;
            }else{
                Node* temp = front;
                front = front->next;
                if(front==nullptr){
                    back=nullptr;
                }
                delete temp;
                count--;
            }
        }
        int top(){
            if(isEmpty()){
                cout<<"Queue is empty now.";
                return -1;
            }else{
                return front->data;
            }
        }
        bool isEmpty(){
            return front == nullptr;
        }
        int size(){
            return count;
        }
    return 0;
};
