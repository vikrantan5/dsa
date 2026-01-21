#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr ={3,4,-2,5,8,20,-10,8};
    int n =arr.size();
    int totalSum =0;
    for(int i = 0 ; i<n ;i++){
        totalSum += arr[i];
    }


    int currSum = 0;
    for(int i =0 ;i<n ;i++){
        currSum +=arr[i];
        if(totalSum - currSum == currSum){
            cout<<"yes";
            break;
        }
    }

}