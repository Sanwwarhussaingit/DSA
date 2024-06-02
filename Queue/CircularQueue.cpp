#include <iostream>
using namespace std;
#define n 5
class Queue
{
    int *arr;
    int rear = -1;
    int front = -1;

public:
    Queue()
    {
        arr = new int[n];
    }
    bool isEmpty()
    {
        return rear == -1 && front == -1;
    }

    // add
    void add(int value)
    {
        if ((rear + 1) % n == front)
        {
            cout << "Array is full" << endl;
            return;
        }

        if (front == -1)
            front = 0;

        rear = (rear + 1) % n;
        arr[rear] = value;
    }

    // remove
    void remove()
    {
        if (isEmpty())
        {
            cout << "Not have value" << endl;
            return;
        }

        if (rear == front)
        {
            rear = front = -1;
        }
        else
        {
            front = (front + 1) % n;
        }
    }
    int peek()
    {
        if (isEmpty())
        {
            cout << "Not have value" << endl;
            return -1;
        }
        return arr[front];
    }
    void displayArray()
    {
        cout << "\nCalling display array:\n";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << endl;
        }
    }
};
int main()
{
    Queue q;
    q.add(1);
    q.add(2);
    q.add(3);
    q.add(4);
    q.add(5);
    q.remove();
    q.remove();
    q.add(19);
    q.add(29);

    while (!q.isEmpty())
    {
        cout << q.peek() << endl;
        q.remove();
    }

    // cout << q.isEmpty() << endl;
    q.displayArray();

    q.isEmpty() == 1 ? cout << "Empty" << endl : cout << "not Empty" << endl;
}