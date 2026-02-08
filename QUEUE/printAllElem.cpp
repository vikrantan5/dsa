// #include<iostream>

// #include<queue>
// #include<vector>

// using namespace std;

// int main(){
//     queue<int>q;
//     vector<int>v;
//     q.push(35);
//     q.push(95);
//     q.push(75);
//     q.push(25);
//     q.push(45);
//     q.push(55);


//     while(!q.empty()){
//         cout<<q.front()<<endl;
//         v.push_back(q.front());
//         q.pop();
//     }
//     for(int i = 0 ; i<v.size() ;i++){
//         q.push(v[i]);
//     }
// }


#include<iostream>
#include<queue>

using namespace  std;

int main(){
    queue<int> q;

    q.push(5);
    q.push(2);
    q.push(3);
    q.push(7);
    q.push(6);

    int queueSize= q.size();
    while(queueSize--){
        cout<<q.front()<<endl;
        q.push(q.front());
        q.pop();
        // queueSize--;
    }
}