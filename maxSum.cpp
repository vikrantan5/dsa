#include<iostream>
#include<vector>

using namespace std;

int main(){

    int n ;
    cout<<"enter the size of th array"<<endl;
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter the elements of the array";
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int max =0 ;
    
    for(int i =0 ;i<n ; i++){
        for(int j =i; j<n ;j++){
            int sum =0;
            for(int k =i ; k<=j ;k++){
                sum +=arr[k];
                if(sum > max){
                    max = sum;
                }
            }
        }
    }

    cout<<"the maximum sum is:" <<max;


}