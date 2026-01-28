#include<iostream>
using namespace std;


class Stack{
    int *arr;
    int size;
    int top;
    public:
    bool flag;
    Stack(int s){
        size = s;
        top = -1;
        arr = new int[s];
    }
    void push(int value){
        if(top == size-1){
            cout<<"the stack is overflow";
            return;
        }
        else{
            top++;
            arr[top] = value;
            cout<<"pushed"<<value<<"into the stack"<<endl;
            flag=0;

        }

    }
    void pop(){
        if(top==-1){
            cout<<"underflow";
            return;
        }
        else{
            cout<<"popped"<<arr[top]<<endl;
            top--;
        }
        if(top==-1){
            flag==1;

        }
        
    }
    int peek(){
        if(top == -1){
            cout<<"emopty";
            return -1;
        }
        else{
            return arr[top];
        }
    }
    bool isEmpty(){
        return top == -1;

    }
    int isSize(){
        return top+1;
    }

};


int main(){
    Stack s(5);
    s.push(5);
    s.push(8);
    s.push(7);
    s.push(3);
    s.push(2);
    s.pop();
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;


}