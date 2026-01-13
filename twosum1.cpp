#include<iostream>

#include<vector>

using namespace std;


int Binary_Search( vector<int> arr,int start ,int end ,int x){
     if (start > end) return -1;
    int mid= start + (end - start) / 2;
    if(arr[mid] == x){
        return mid;
    }
    else{
        if(arr[mid]>x){
            return Binary_Search(arr, start ,mid-1 , x);
        }
        else{
            return Binary_Search(arr , mid+1 , end , x);
        }
    }
}


int main(){
    vector<int>arr = {2,7,11,15,27};
    int target = 22;

    for(int i = 0 ; i<arr.size() ; i++){
        int x  =target-arr[i];
        int start = i+1;
        int end =arr.size()-1;

        int result = Binary_Search(arr ,start ,end ,x);


       if(result != -1){
        cout<<"the number is "<<arr[i]<<" "<<arr[result];
        break;
       }
      

    }
}