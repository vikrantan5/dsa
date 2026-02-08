

#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node * next;

    Node(int value){
        data = value;
        next = NULL;

    }

};

class Queue{

    Node *front;
    Node* rear;
    public:
    Queue(){
        front = rear =NULL;
    }
    bool isEmpty(){
        return front==NULL;
    }
    void push(int x){
        if(isEmpty()){
            cout<<"Pushed"<<x<<"into the queue \n";
            front =new Node(x);
            rear =front;
            return;
        }
        else{

            cout<<"Pushed"<<x<<"into the queue \n";
            rear->next = new Node(x);
            if(rear->next ==NULL){
                cout<<"Queue Overflow \n";
            }
            rear = rear->next;
        }
    }
    void pop(){
        if(isEmpty()){
            cout<<"queueu underflow";
            return;
        }
        else{
            
            cout<<"popped"<<"front";
            Node *temp = front;
            front = front->next;
            delete temp;
        }
    }
    int start(){
        if(isEmpty()){
            cout<<"queue is empty";
            return -1;
        }
        else{
            return front->data;
        }
    }
};



int main(){
    Queue q;
    q.push(25);
    q.push(255);
    q.push(255);
    q.push(245);
    q.push(265);
    q.pop();
    cout<<q.start()<<endl;

}