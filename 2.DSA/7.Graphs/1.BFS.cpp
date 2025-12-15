#include <iostream>

using namespace std;

// Graph and utility variables
const int MAX_VERTICES = 100;
int adj[MAX_VERTICES][MAX_VERTICES] = {0};
bool visited[MAX_VERTICES] = {false};
int V_count = 0;

void resetVisited() {
    for (int i = 0; i < V_count; ++i) {
        visited[i] = false;
    }
}

// --- BFS Implementation (Uses Manual Queue) ---

// Manual Queue structure
int bfs_queue[MAX_VERTICES];
int front = -1;
int rear = -1;

void enqueue_manual(int node) {
    if (rear == MAX_VERTICES - 1) {
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    bfs_queue[rear] = node;
}

int dequeue_manual() {
    if (front == -1 || front > rear) {
        return -1;
    }
    int node = bfs_queue[front];
    front++;
    if (front > rear) {
        front = rear = -1;
    }
    return node;
}

void BFS(int startNode) {
    resetVisited();
    front = rear = -1;

    visited[startNode] = true;
    enqueue_manual(startNode);

    cout << "BFS Traversal: ";

    int u;
    while ((u = dequeue_manual()) != -1) {
        cout << u << " ";

        for (int v = 0; v < V_count; ++v) {
            if (adj[u][v] == 1 && !visited[v]) {
                visited[v] = true;
                enqueue_manual(v);
            }
        }
    }
    cout << endl;
}

// --- DFS Implementation (Uses Recursion) ---

void DFS_Util(int u) {
    visited[u] = true;
    cout << u << " ";

    for (int v = 0; v < V_count; ++v) {
        if (adj[u][v] == 1 && !visited[v]) {
            DFS_Util(v);
        }
    }
}

void DFS(int startNode) {
    resetVisited();
    cout << "DFS Traversal: ";
    DFS_Util(startNode);
    cout << endl;
}

// --- Main Function (Example) ---

void addEdge(int u, int v) {
    adj[u][v] = 1;
    adj[v][u] = 1;
}

int main() {
    V_count = 5;

    // Graph Edges: 0-1, 0-3, 1-2, 1-4, 3-4, 2-4
    addEdge(0, 1);
    addEdge(0, 3);
    addEdge(1, 2);
    addEdge(1, 4);
    addEdge(3, 4);
    addEdge(2, 4);

    int startNode = 0;

    BFS(startNode);
    DFS(startNode);

    return 0;
}