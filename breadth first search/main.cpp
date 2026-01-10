#include <stdio.h>

int rear = -1;
int front = -1;

void enqueue(int Q[], int value) {
    if (rear == 4) {
        printf("Queue is full\n");
    } else {
        if (front == -1)
            front = 0;
        rear++;
        Q[rear] = value;
    }
}
int dequeue(int Q[]) {
    int value;
    if (front == -1 || front > rear) {
        return -1;
    } else {
        value = Q[front];
        front++;
        return value;
    }
}
void BFS(int G[5][5], int start) {
    int Q[5], u, v;
    int visited[5] = {0, 0, 0, 0, 0};

    visited[start - 1] = 1;
    enqueue(Q, start - 1);

    printf("BFS:\t");
    while (front != -1 && front <= rear) {
        u = dequeue(Q);
        printf("%d\t", u + 1);

        for (v = 0; v < 5; v++) {
            if (G[u][v] == 1 && visited[v] == 0) {
                visited[v] = 1;
                enqueue(Q, v);
            }
        }
    }
}

int main() {
    int G[5][5] = {
        {0,1,0,1,0},
        {1,0,1,1,1},
        {0,1,0,0,1},
        {1,1,0,0,0},
        {0,1,1,0,0}
    };
    BFS(G, 1);
    return 0;
    printf("\n");
}
