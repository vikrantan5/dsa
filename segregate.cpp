#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr ={1,  0 , 0 , 1 , 0 , 1 , 1};
    int start =0;
    int end =arr.size()-1;
    
    while(end > start){
        if(arr[start] ==1 && arr[end] ==0){
            int temp  =arr[end];
            arr[end] = arr[start];
            arr[start] = temp;
            start++;
            end--;
        }
        else if(arr[start] ==0 && arr[end] == 1){
            start++;
        }
        else if(arr[start]==arr[end]){
            end--;
        }
    }
    for(int i = 0 ;i<arr.size() ; i++){
        cout<<arr[i]<<" ";
    }

}