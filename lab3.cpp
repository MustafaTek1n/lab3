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
        front = back = nullptr;
        count = 0;
    }
    void enqueue(int val) {
        Node* newNode = new Node(val);
        if (back == nullptr) {
            front = back = newNode;
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

int main() {
    Queue q;
    q.enqueue(15);
    q.enqueue(25);
    q.enqueue(50);
    
    cout << "Front element: " << q.top() << endl;
    cout << "Queue size: " << q.size() << endl;

    q.dequeue();
    cout << "Front element after dequeue: " << q.top() << endl;
    cout << "Queue size after dequeue: " << q.size() << endl;

    return 0;
}
