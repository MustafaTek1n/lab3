#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class Queue {
private:
    Node* front;
    Node* back;
    int count;

public:
    Queue() {
        front = rear = nullptr;
        count = 0;
    }
    void enqueue(int val) {
        Node* newNode = new Node(val);
        if (back == nullptr) {
            front = rear = newNode;
        } else {
            back->next = newNode;
            back = newNode;
        }
        count++;
    }


    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }
        Node* temp = front;
        front = front->next;
        if (front == nullptr)
            back = nullptr;
        delete temp;
        count--;
    }

    int top() {
        if (isEmpty()) {
            cout << "Queue is empty!\n";
            return -1;
        }
        return front->data;
    }
    bool isEmpty() {
        return front == nullptr;
    }
    int size() {
        return count;
    }
};

