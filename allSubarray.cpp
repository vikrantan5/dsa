#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cout<<"enter size of the aray"<<endl;
    cin>>n;

    vector<int> arr(n) ;

    cout<<"Enter"<<n <<"elements";
    for(int i = 0 ; i<n; i++){
        cin>>arr[i];
    }

      cout << "\nAll subarrays:\n";
    for(int i = 0 ; i<n ; i++){
        for(int j = i ;j<n;j++){
            for (int k = i; k <= j; k++) { // print subarray
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}