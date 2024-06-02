#include <iostream>
using namespace std;

#define n 100

class stack {
private:
    int* arr;
    int top;

public:
    stack() {
        arr = new int[n];
        top = -1;  // Initialize top to -1 to indicate an empty stack
    }

    void push(int x) {
        if (top == n - 1) {
            cout << "Stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop() {
        if (top == -1) {
            cout << "No element to pop" << endl;
            return;  // Add return statement to exit the function
        }
        top--;
    }

    int topElement() {  // Renamed to avoid conflict with the 'top' variable
        if (top == -1) {
            cout << "No element in stack" << endl;
            return -1;
        }
        return arr[top];
    }

    bool empty() {
        return top == -1;
    }

    ~stack() {
        delete[] arr;  // Destructor to free the allocated memory
    }
};

int main() {
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.topElement() << endl;
    st.pop();
    cout << st.topElement() << endl;
    st.pop();
    st.pop();
    st.pop();
    cout << st.empty() << endl;  // Corrected to st.empty()

    return 0;
}
