#include<iostream>

#include<vector>
using namespace std;
int main(){
    vector<int> arr = {3,4,-2,5,8,20,-10,8};

    int n = arr.size();
        bool found = false;

    for(int i = 1 ; i<n ; i++){
        int firstSum = 0;
        int secondSum =0;
        for(int j = 0 ;j<i ; j++){
            firstSum += arr[j];
        }
        for(int k = i ;k<n ;k++){
            secondSum +=arr[k];
        }
        if(firstSum == secondSum){
            cout<<"yes";
            found=true;
            break;
        }
    }
    if(found != true){
        cout<<"no";

    }
}