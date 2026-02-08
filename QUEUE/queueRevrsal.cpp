#include<iostream>
#include<stack>
#include<queue>

using namespace std;


int main(){


    stack<int>st;

    queue<int>q;
    q.push(25);
    q.push(65);
    q.push(45);
    q.push(53);
    q.push(52);

    int queueSize = q.size();
    while(queueSize--){
        st.push(q.front());
        q.pop();
    }
    int stackSize =st.size();
    while(stackSize--){
        q.push(st.top());
        st.pop();
    }

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }


}