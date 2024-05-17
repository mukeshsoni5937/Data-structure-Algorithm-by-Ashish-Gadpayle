#include <iostream>
using namespace std;

long int top = -1;
long int rear = -1, front = 0;
const long int CAPACITY = 10;
long int M_queue[CAPACITY];
long int M_stack[CAPACITY];

int isFull() {
    if (rear == CAPACITY - 1) {
        return 1;
    }
    else {
        return 0;
    }
}

int isEmpty() {
    if (rear == -1) {
        return 1;
    }
    else {
        return 0;
    }
}

int isFullStack() {
    if (top == CAPACITY - 1) {
        return 1;
    }
    else {
        return 0;
    }
}

void enqueue(long int a) {
    if (isFull()) {
        cout << "Queue is full";
    }
    else {
        rear++;
        M_queue[rear] = a;
        cout << "\nElement inserted:" << M_queue[rear];
    }
}

long int dequeue() {
    long int ele;
    if (isEmpty()) {
        cout << "Queue is empty";
    }
    else {
        ele = M_queue[front];
        cout << "\nElement deleted:" << ele;
        for (long int i = 0; i <= rear; i++) {
            M_queue[i] = M_queue[i + 1];
        }
        --rear;
    }
    return ele;
}

void push(long int ele) {
    if (isFullStack()) {
        cout << "Stack is full";
    }
    else {
        ++top;
        M_stack[top] = ele;
        cout << "\nElement is pushed on Stack:" << ele;
    }
}

void Queuetraverse() {
    cout << "\nElements of the queue:";
    for (long int i = 0; i <= rear; i++) {
        cout << M_queue[i] << "  ";
    }
}

void Stacktraverse() {
    cout << "\nElements of the stack:";
    for (long int i = top; i >= 0; i--) {
        cout << M_stack[i] << " ";
    }
}

int main() {
    int choice;
    long int a, el;
    cout << "\n Welcome To Queue Implementation Code !\n";
    while (1) {
        cout << "\n1.Insert Mobile No. in queue\n2.Delete Mobile No. and push on stack\n3.Traverse Queue\n4.Traverse Stack\n0.To Exit";
        cout << "\nEnter your choice:";

        cin >> choice;
        switch (choice) {
        case 1:
            cout << "enter element to insert:";
            cin >> a;
            enqueue(a);
            break;
        case 2:
            el = dequeue();
            push(el);
            break;
        case 3:
            Queuetraverse();
            break;
        case 4:
            Stacktraverse();
            break;
        case 0:
            cout << "Thank you";
            exit(0);
        default:
            cout << "Invalid choice";
            break;
        }
    }
    return 0;
}
