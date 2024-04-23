#include <iostream>
#include <stdexcept>

using namespace std;

class kQueue {
private:
    int n, k;
    int freespot;
    int *front, *next, *rear, *arr;

public:
    kQueue(int n, int k) {
        this->n = n;
        this->k = k;
        freespot = 0;
        front = new int[k];
        next = new int[n];
        rear = new int[k];
        arr = new int[n];

        for (int i = 0; i < n; i++) {
            next[i] = i + 1;
        }
        next[n - 1] = -1;

        for (int i = 0; i < k; i++) {
            front[i] = -1;
            rear[i] = -1;
        }
    }

    void enqueue(int data, int qn) {
        // overflow
        if (freespot == -1) {
            cout << "Overflow" << endl;
            return;
        }

        int index = freespot;
        freespot = next[index];

        if (qn < 1 || qn > k) {
            cout << "Invalid queue number" << endl;
            return;
        }

        if (front[qn - 1] == -1) {
            front[qn - 1] = index;
        } else {
            next[rear[qn - 1]] = index;
        }

        next[index] = -1;
        rear[qn - 1] = index;
        arr[index] = data;
    }

    int dequeue(int qn) {
        // underflow
        if (qn < 1 || qn > k) {
            cout << "Invalid queue number" << endl;
            throw out_of_range("Invalid queue number");
        }

        if (front[qn - 1] == -1) {
            cout << "Queue Underflow" << endl;
            throw out_of_range("Queue Underflow");
        }

        int index = front[qn - 1];
        front[qn - 1] = next[index];

        next[index] = freespot;
        freespot = index;

        return arr[index];
    }

    ~kQueue() {
        delete[] front;
        delete[] next;
        delete[] rear;
        delete[] arr;
    }
};

int main() {
    kQueue q(10, 3);

    try {
        q.enqueue(10, 1);
        q.enqueue(15, 1);
        q.enqueue(20, 2);
        q.enqueue(25, 1);

        cout << q.dequeue(1) << endl;
        cout << q.dequeue(2) << endl;
        cout << q.dequeue(1) << endl;
        cout << q.dequeue(1) << endl;
    } catch (const out_of_range& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
