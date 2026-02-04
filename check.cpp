#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr ={6,10,7,4,8,9,4};

    int n = arr.size();
    cout<<arr.size()<<endl;


    vector<int>arr2(2*n);
    
    for(int i = 0 ; i<arr2.size() ; i++){
        arr2[i] = arr[i%n];
       
    }



    for(int i = 0 ;i<arr2.size() ; i++){
        cout<<arr2[i] <<" ";
    }
}