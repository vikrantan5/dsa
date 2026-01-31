#include <iostream>
using namespace std;

class Stack
{

    int *arr;
    int top;
    int size;

public:
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
    }
    void push(int value)
    {

        if (top == size - 1)
        {
            cout << "overflow";
        }
        else
        {
            top++;
            arr[top] = value;
            cout<<"pushed elelemnt is"<<value<<" "<<endl;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"underflow condition";
        }
        else{
            cout<<"popped elemrnt is"<<arr[top];
            top--;
        }
        

    }
    int peek(){
        if(top==-1){
            cout<<"underflow";

        }
        else{
            return arr[top];
        }
    }
    bool isEmpty(){
        return top==-1;
    }

    int isSize(){
        return top+1;
    }
};

int main()
{

    Stack s(5);
    s.push(5);
    s.push(6);
    s.push(4);
    s.push(8);
    s.push(6);
    s.push(4);

    cout<<endl;
    int elem = s.peek();
    cout<<elem<<endl;
    cout<<s.isEmpty()<<endl;

}