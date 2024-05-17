#include <iostream>

#define MAX 1000

class Stack {
private:
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(int value) {
        if (top == MAX - 1) {
            std::cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = value;
    }

    int pop() {
        if (isEmpty()) {
            std::cout << "Stack Underflow\n";
            return -1;
        }
        return arr[top--];
    }

    void deleteMiddle(int n, int current) {
        
        if (current == n) {
            return;
        }

        
        int x = pop();

        
        deleteMiddle(n, current + 1);

        
        if (current != n / 2) {
            push(x);
        }
    }

    void deleteMiddle() {
        int n = top + 1;
        deleteMiddle(n, 0);
    }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    
    s.deleteMiddle();

    
    while (!s.isEmpty()) {
        std::cout << s.pop() << " ";
    }
    return 0;
}