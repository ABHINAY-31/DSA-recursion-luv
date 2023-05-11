#include <iostream>
#include <vector>
using namespace std;
// timem complexity of the bubble sort is O(n^2)
// but for the best case it id  O(n)
// Bubble sort is a stable soting algoritm (we only swap when value is less than the value of next one)
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    vector<int> vec(n);
    for(auto &i : vec){
        cin >> i;
    }

    bool flag = true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(vec[j] > vec[j+1]){
                swap(vec[j],vec[j+1]);
                flag=false;
            }
        }
        if(flag){
            break; // already sorted no need for the iteration
        }
    }

    for(auto i : vec){
        cout << i << " ";
    }
}