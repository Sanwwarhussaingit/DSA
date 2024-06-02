
#include <iostream>
using namespace std;
// #define n 5
class Queue
{
    int *arr;
    int rear = -1;
    int n;

public:
    Queue(int n)
    {
        arr = new int[n];
        this->n = n;
    }

    bool isEmpty()
    {
        return rear == -1;
    }

    // add
    void add(int data)
    {
        if (rear == n - 1)
        {
            cout << "Full" << endl;
            return;
        }
        rear++;
        arr[rear] = data;
    }
    // dequeue
    int remove()
    {
        if (isEmpty())
        {
            cout << "Queue is empty\n";
            return -1;
        }
        
        int front = arr[0];
        for (int i = 0; i < rear; i++)
        {
            arr[i] = arr[i + 1];
        }
        rear--;
        return front;
    }
    // peek
    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[0];
        
    }
};
int main()
{
    // Queue q(5);
    // q.add(1);
    // q.add(2);
    // q.add(3);
    // q.add(4);
    // q.add(5);

    // cout << q.peek() << endl;
    // q.remove();
    // cout << q.peek() << endl;
    // cout << q.peek() << endl;
    // cout << q.peek() << endl;
    // cout << q.peek() << endl;

    // cout << q.isEmpty() << endl;
    return 0;
}