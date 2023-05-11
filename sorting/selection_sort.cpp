#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(auto &i : vec){
        cin >> i;
    }
    // algorthm for the selection sort 
    // time complexity is O(n^2) in all the cases
    // selection sort is not a stable sorting algoritm it swaps the position of the element
    for(int i=0;i<n;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(vec[min] > vec[j]){
                min=j;
            }
        }
        swap(vec[min],vec[i]);
    }

    // for making it stable what we need to do is to shift the value for the min indx to the i th one
    

    for(auto i : vec){
        cout << i << " ";
    }
}