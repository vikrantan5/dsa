#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>arr = {2 ,7 ,11 ,15 ,27};
    int target = 22;
    int start =0;
    int end =arr.size()-1;

    while(end >start){
        if(arr[start] + arr[end] ==target){
            cout<<"the numbers are:"<<arr[start]<<" "<<arr[end];
            break;
        }
        else{
            if(arr[start] + arr[end] > target){
                end--;
            }
            else{
                start++;
            }
        }
    }
}