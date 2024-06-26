#include<iostream>
#include<climits>
#include<vector>
using namespace std;

class kQueues {
private:
    int *arr;
    int *front;
    int *rear;
    int *next;
    int n, k;
    int free;

public:
    kQueues(int k, int n);
    ~kQueues();
    bool isFull() { return (free == -1); }
    void enqueue(int item, int qn);
    int dequeue(int qn);
    bool isEmpty(int qn) { return (front[qn] == -1); }
};

kQueues::kQueues(int k, int n) : k(k), n(n), free(0) {
    arr = new int[n];
    front = new int[k];
    rear = new int[k];
    next = new int[n];

    for (int i = 0; i < k; i++)
        front[i] = -1;

    for (int i = 0; i < n - 1; i++)
        next[i] = i + 1;
    next[n - 1] = -1;
}

kQueues::~kQueues() {
    delete[] arr;
    delete[] front;
    delete[] rear;
    delete[] next;
}

void kQueues::enqueue(int item, int qn) {
    if (isFull()) {
        cout << "\nQueue Overflow\n";
        return;
    }

    int i = free;
    free = next[i];

    if (isEmpty(qn))
        front[qn] = i;
    else
        next[rear[qn]] = i;

    next[i] = -1;
    rear[qn] = i;
    arr[i] = item;
}

int kQueues::dequeue(int qn) {
    if (isEmpty(qn)) {
        cout << "\nQueue Underflow\n";
        return INT_MAX;
    }

    int i = front[qn];
    front[qn] = next[i];
    next[i] = free;
    free = i;
    return arr[i];
}

int main() {
    int k = 3, n = 10;
    kQueues ks(k, n);

    ks.enqueue(15, 2);
    ks.enqueue(45, 2);

    ks.enqueue(17, 1);
    ks.enqueue(49, 1);
    ks.enqueue(39, 1);

    ks.enqueue(11, 0);
    ks.enqueue(9, 0);
    ks.enqueue(7, 0);

    cout << "Dequeued element from queue 2 is " << ks.dequeue(2) << endl;
    cout << "Dequeued element from queue 1 is " << ks.dequeue(1) << endl;
    cout << "Dequeued element from queue 0 is " << ks.dequeue(0) << endl;

    return 0;
}
