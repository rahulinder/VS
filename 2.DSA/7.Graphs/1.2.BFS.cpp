#include<iostream>
using namespace std;

const int v = 100;
int adj[v][v] = {0};
bool visited[v] = {false};
int count = 0;

void resetVisited(){
    for(int i = 0; i < count; i++){
        visited[i] = false;
    }
}
int queue[v];
int front = -1; int rear = -1;

void enqueue(int node){
    if(rear == v-1){
        return;
    }
    if(front == -1){
        front = 0;
    }
    rear++;
    queue[rear] = node;
}
int dequeue(){
    if(front == -1 || front > rear){
        return -1;
    }
    int node  = queue[front];
    front++;
    if(front > rear){
        front = rear = -1;
    }
    return node;
}

void BFS(int startNode){
    resetVisited();
    front = rear = -1;

    visited[startNode] = true;
    enqueue(startNode);
    cout<<"\nBFS :\n";

    int u;
    while((u = dequeue()) != -1){
        cout<<u<<" ";

        for(int v = 0; v < count; ++v){
            if(adj[u][v] == 1 && !visited[v]){
                visited[v] = true;
                enqueue(v);
            }
        }
    }
    cout<<endl;
}
void DFS_Util(int u){
    visited[u] = true;
    cout<<u<<" ";

    for(int v = 0; v < count; ++v){
        if(adj[u][v] == 1 && !visited[v]){
            DFS_Util(v);
        }
    }
}

void DFS(int startNode){
    resetVisited();
    cout<<"\nDFS:\n";
    DFS_Util(startNode);
    cout<<endl;
}

void addEdge(int u, int v){
    adj[u][v] = 1;
    adj[v][u] = 1;
}

int main(){
    count = 5;
    addEdge(0, 1);
    addEdge(0, 3);
    addEdge(1, 2);
    addEdge(1, 4);
    addEdge(3, 4);
    addEdge(2, 4);

    int startNode = 0;

    BFS(startNode);
    DFS(startNode);
}