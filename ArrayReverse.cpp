#include <iostream>
#include <string>
#define MAX_SIZE 100
using namespace std;

class Stack {
private:
    int top;
    int arr[MAX_SIZE];

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == MAX_SIZE - 1);
    }

    void push(char val) {
        if (isFull()) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = val;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return;
        }
    }

    void traverse() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int n;
    cout<<"Enter The Size Of The Array=";
    cin >> n;
    int a[n];
    cout<<"Enter Array Elements=";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    Stack stack;
    for (int i = 0; i < n; i++) {
        stack.push(a[i]);
    }
    stack.traverse();
    return 0;
}
