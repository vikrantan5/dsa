// push
// pop
// siize
// front
// empty


#include<iostream>
#include<queue>

using namespace std;


int main(){

    queue<int> q;
q.push(8);
q.push(85);
q.push(87);

cout<<q.size()<<endl;
cout<<q.front()<<endl;
cout<<q.empty()<<endl;
}
