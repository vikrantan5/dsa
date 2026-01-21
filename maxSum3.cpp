#include<iostream>

#include<vector>

using namespace std;
int main(){
    int n;
    cout<<"Enter the value of the Array"<<endl;
    cin>>n;

    cout<<"Enter the value of the arrrya";
    vector<int>arr(n);
    for(int i = 0 ;i<n ; i++){
        cin>>arr[i];
    }


    int maxi =0;
    int prefix = 0;

    for(int i = 0 ; i<n ;i++){
        prefix = prefix+arr[i];
        if(prefix <0){
            prefix =0;
        }
        maxi = max( maxi,prefix);
    }
    cout<<"the maximum is"<<maxi;
}