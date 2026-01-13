#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(){
    // vector<int>v;

    // cout<<"Size of v:"<<v.size()<<endl;
    // cout<<"Capacity of v "<<v.capacity()<<endl;

    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(10);
    // v.push_back(12);
    // v.push_back(1);
    //  cout<<"Size of v:"<<v.size()<<endl;
    // cout<<"Capacity of v "<<v.capacity()<<endl;


    // //update
    // v[1] = 5;
    // cout<<v[1];

   
    vector<int>v1(5 , 1);

    // cout<<v1.size()<<endl;
    // cout<<v1.capacity()<<endl;
    v1.push_back(6);
    // cout<<v1.size()<<endl;
    // cout<<v1.capacity()<<endl;


    vector<int>v3 = {1,2,5,6,8};
    //  cout<<v3.size()<<endl;
    // cout<<v3.capacity()<<endl;

//delete value from vector
    v3.pop_back();
    //  cout<<v3.size()<<endl;
    // cout<<v3.capacity()<<endl;
   
    v3.erase(v3.begin()+1);
    // cout<<v3.size()<<endl;
    // cout<<v3.capacity()<<endl;


    // for(int i = 0;  i<v3.size() ;i++){
    //     cout<<v3[i]<<" ";
    // }


    cout<<endl;
    v3.insert(v3.begin()+1 , 60);

    // for(int i = 0;  i<v3.size() ;i++){
    //     cout<<v3[i]<<" ";
    // }
cout<<endl;
    v3[1]= 37;
    // for(int i = 0;  i<v3.size() ;i++){
    //     cout<<v3[i]<<" ";
    // }
cout<<endl;

    v3.clear();

   
    // cout<<v3.size()<<endl;
    // cout<<v3.capacity()<<endl;


    cout<<endl;
    v3.push_back(2);
    v3.push_back(22);
    v3.push_back(25);
    v3.push_back(24);
    v3.push_back(23);
    v3.push_back(28);
    v3.push_back(42);
    v3.push_back(62);

    //  cout<<v3.size()<<endl;
    // cout<<v3.capacity()<<endl;

    // cout<<v3.front()<<endl;
    // cout<<v3.back();


    vector<int>v4;
    v4 = v3;
    // for(int i = 0 ; i<v4.size(); i ++){
    //     cout<<v4[i]<<" ";
    // }

    // for(auto i: v4){
    //     cout<<i<<" ";
    // }

    sort(v4.begin(), v4.end());
     for(auto i: v4){
        cout<<i<<" ";
    }

    // cout<<endl;
    // sort(v4.rbegin(), v4.rend());
    //  for(auto i: v4){
    //     cout<<i<<" ";
    // }

cout<<endl;
    // search in binary search
    cout<<binary_search(v4.begin() , v4.end() , 23)<<endl;
    cout<<find(v4.begin() ,v4.end(), 54)-v4.begin()<<endl;
}