#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>arr = {2 , 7 , 11 , 15 , 27};

    int target =14;
    int isExist =0;
    for(int i = 0 ; i<arr.size() ;i++){
        for(int j =i+1 ; j<arr.size() ;j++){
            if(arr[i]+ arr[j] ==target){
                cout<<"The numbers are"<<arr[i]<<" "<<arr[j];
                isExist++;
            }
        }
    }
    if(isExist ==0){
        cout<<"not exist";
    }
}