#include <bits/stdc++.h>
#include <vector>
using namespace std;
// It is an unstable algorithm it changes the key position 
// its time complexity is O(n log n ) but in worst case it is O(n^2)

int partition(vector<int> &vec,int s,int e){
    int pivot = vec[s];
    // now i will locate the position it belongs
    int count=0;
    for(int i=s+1;i<e;i++){
        if(pivot > vec[i]){
            count++;
        }
    }
    int pivotIndex = s + count;
    // place the pivot element to its position
    swap(vec[s],vec[pivotIndex]);
    int i=s,j=e;
    while(i < pivotIndex && j > pivotIndex){
        while(vec[i] <= pivot) i++;
        while(vec[j] >= pivot) j--; 
        if(i<pivotIndex && j>pivotIndex){
            swap(vec[i++],vec[j--]);
        }
    }
    return pivotIndex;
}
void quickSort(vector<int> &vec,int s,int e){
    if(s>=e){
        return ;
    }
    int p = partition(vec,s,e);
    quickSort(vec,s,p-1);
    quickSort(vec,p+1,e);
}

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(auto &i : vec){
        cin >> i;
    }
    quickSort(vec,0,n-1);
    for(auto i : vec){
        cout << i << " ";
    }
}



// int partition(vector<int> &vec,int s,int e){
//     int cnt = 0;
//     // int pivot = vec[s];
//     for(int i=s+1 ; i<e ; i++){ // find the number of elements that are less thanmy pivot
//         if(vec[s] > vec[i]){
//             cnt++;
//         }
//     }
//     int p = s + cnt; //add number of element to the s (that is my pivot location)
//     swap(vec[s],vec[p]); // than swap the value
//     int i=s, j=e;
//     while(i < p && j > p){ // find the value on both side which are less than my pivot and swap them
//         while(vec[i] <= vec[p]){
//             i++;
//         }
//         while(vec[j] >= vec[p]){
//             j--;
//         }
//         if(i < p && j > p){
//             swap(vec[i++],vec[j--]);;
//         }
//     }
//     return p;
// }
// void quickSort(vector<int> &vec,int l,int r){
//     if(l>=r){
//         return ;
//     }
//     int p = partition(vec,l,r);
//     quickSort(vec,l,p-1);
//     quickSort(vec,p+1,r);
// }