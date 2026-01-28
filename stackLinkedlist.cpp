#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data= value;
        next = NULL;
    }
};

class Stack{
    Node *top;
    int size;
    public:
    Stack(){
        top = NULL;
        size = 0;
    }
    void push(int value){
        Node *temp = new Node(value);
        if(temp ==NULL){
            cout<<"overflow";
            return;
        }
        else{
            temp->next =top;
            top = temp;
            size++;
            cout<<"pushed"<< value<<" in the stack"<<endl;

        }
    }
    void pop(){
        if(top == NULL){
            cout<<"underflow";
            return;
        }
        Node *temp = top;
        top = top->next;
        delete temp;
        size--;


    }

    int peek(){
        if(top==NULL){
            cout<<"empty";
        }
        else{
            return top->data;
        }
    }
    bool isEmpty(){
        return top==NULL;
    }
    int isSize(){
        return size;
    }
};

int main(){

    Stack s;
    s.push(6);
    s.push(3);
    s.push(4);
    s.push(9);
    s.push(8);
    s.push(5);
    s.pop();
    cout<<s.isSize();
    cout<<s.isEmpty();


}