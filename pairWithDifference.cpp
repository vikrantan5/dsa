#include<iostream>

#include<vector>

using namespace std;

int main(){
    vector<int>arr={2,3,5,10,50,80};
    int target= 45;
    int start =0;
    int end =1;
    while(end<arr.size()){
        if(arr[end] - arr[start] == target){
            cout<<"numbers mil gaya:"<<arr[end]<<" "<<arr[start];
            break;
        }
        else{
            if(arr[end] - arr[start] < target){
                end++;
            }
            else{
                start++;
            }
        }
    }
    return 0;
}