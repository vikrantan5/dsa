// #include<iostream>
// #include<queue>


// using namespace std;

// int main(){

//     queue<int>q;
//     q.push(30);
//     q.push(13);
//     q.push(56);
//     q.push(25);
//     q.push(45);
//     q.push(3);

// }


// time needed to buy tickets 





// 1 2 4 6 8
// 2 4 6 8
// 4 6 8 1
// 6 8 1 3
// 8 1 3 5





// 1 5 2 3 7



#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    vector<int>v  ={3,6,2,7,8,11};

    queue<int>q;

    int size = 3;

    int i = 0;


    while(i< v.size()){
        if(q.size() <size){
        q.push(v[i]);
        i++;
        }
    }
    



}