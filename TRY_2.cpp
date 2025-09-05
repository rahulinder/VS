#include<iostream>
using namespace std;
struct queue{
    int size;
    int front ;
    int rear;
    int *q;
};
int dequeue(struct queue * st){
    int x=-1;
    if(st->front==st->rear){
        cout<<"queue underflown";}
        else {
        st->front++;;
       x= st->q[st->front];
        return x;}

    }


void enqueue(struct queue *st,int x){
if(st->rear==st->size-1){
cout<<"queue overflown";
}
else {
    st->rear++;
    
    st->q[st->rear]=x;
    
    }
}



int main(){
    struct queue j;
    j.size=8;
    j.front=-1;
    j.rear=-1;
    j.q=new int[j.size];
enqueue(&j,5);
cout<<j.q[j.rear]<<endl;
enqueue(&j,67);
cout<<j.q[j.rear]<<endl;
enqueue(&j,555);
cout<<j.q[j.rear]<<endl;
dequeue(&j);
cout<<j.q[j.front]<<endl;
dequeue(&j);
    cout<<j.q[j.front]<<endl;

return 0;
}