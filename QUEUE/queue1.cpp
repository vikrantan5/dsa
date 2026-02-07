#include<iostream>
using namespace std;



class Queue{
    int *arr;
    int front , rear;
    int size;
    public:
    Queue(int n){
        arr = new int[n];
        front =-1;
        rear =-1;
        size = n;
    }

    bool isEmpty(){
    return front == -1;
    }

    bool isFull(){
        return rear == size-1;
    }

    void push(int x){
        if(isEmpty()){
            cout<<"Pushed "<<x<<" into the queue \n";
            front = rear = 0;
            arr[0] = x;
            return;
        }
        else if(isFull()){
            cout<<"Queue is overflow";
            return ;
        }
        else{
            rear = rear +1;
            arr[rear] = x;
            cout<<"Pushed "<<x<<" into the queue \n";
        }

    }


    void pop(){
        if(isEmpty()){
            cout<<"QUeue underflow";
            return;
        }
        else{
            if(front == rear){
              
                front = rear = -1;
            }
            else{
                  cout<<"POPPED"<<"into the QUEUE \n";
                front  = front +1;
            }
           
        }
    }



     // start me kaun sa elem rakha h use return karanan haui
    int start(){
        if(isEmpty()){
            cout<<"Queue is Empty";
            return -1;
        }
        else{
            return arr[front];
        }

    }

   
};




int main(){

// 
    Queue q(5);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.pop();
    // cout<<q.start();
    int x = q.start();
    if(!q.isEmpty()){
        cout<<x<<" ";
    }

}