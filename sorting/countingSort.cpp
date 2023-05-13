#include <iostream>
#include <vector>
using namespace std;
// time complexity will be O(n) in case of finding the max it will be ( O(max(vec[i])))

void countSort(vector<int> &vec,int &n){
    // find the count of each element using the length of the array as max element in the vec
    int k=vec[0];
    for(int i=1;i<n;i++){
        k=max(k,vec[i]);
    }
    vector<int> arr(k+1,0);// size need to be +1 otherwise indexing will not be matched annd it
    // it wont get executed
    for(int i=0;i<k;i++){// frequency array
        arr[vec[i]]++;
    }
    for(int i=1;i<=k;i++){ // position array
        arr[i]+=arr[i-1];
    }
    vector<int> output(n,0);
    for(int i=n-1; i>=0; i--){
        cout << arr[vec[i]] << " ";
        output[--arr[vec[i]]] = vec[i];
    }
    cout << "\n";
    for(int i=0;i<n;i++){
        // cout << "yes";
        vec[i] = output[i];
    }
    
}
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(auto &i : vec){
        cin >> i;
    }
    countSort(vec,n);
    for(auto i : vec){
        cout << i << " ";
    }
}