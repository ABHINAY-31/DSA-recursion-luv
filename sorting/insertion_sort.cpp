#include <iostream>
#include <vector>
using namespace std;
// time complexity of the insertion sort is O(n^2)
// best case it can be O(n)

// it is a stable algorthm the order of the key does not change
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(auto &i : vec){
        cin >> i;
    }

    //backward shifting of the element but not change the position of the similar key or order
    // that['s why it is stable

    for(int i = 1;i < n; i++){
        int temp = vec[i];
        int j = i-1;
        for(;j>=0;j--){
            if(vec[j] > temp){
                vec[j+1] = vec[j];
            }
            else break;
        }
        vec[j+1] = temp;
    }

    for(auto i : vec){
        cout << i << " ";
    }
}