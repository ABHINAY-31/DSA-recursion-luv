#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &vec,int l ,int mid, int r){
    int len1 = mid-l+1;
    int len2 = r-mid;
    int *arr1 = new int(len1);
    int *arr2 = new int(len2);
    int k=l;
    for(int i=0;i<len1;i++){
        arr1[i] = vec[k++]; 
    }
    k=mid+1; // checking for the second array which is mid + 1 to r
    for(int i=0;i<len2;i++){
        arr2[i] = vec[k++];
    }
    k=l;
    int index1=0,index2=0;
    while(index1 < len1 && index2 < len2){
        if(arr1[index1] > arr2[index2]){
            vec[k++] = arr2[index2++];
        }
        else{
            vec[k++] = arr1[index1++];
        }
    }
    while(index1 < len1){
        vec[k++] = arr1[index1++];
    }
    while(index2 < len2){
        vec[k++] = arr2[index2++];
    }
}
void mergeSort(vector<int> &vec,int l,int r){
    if(l>=r){
        return ;
    }
    int mid = (r-l)/2+l;
    mergeSort(vec,l,mid);
    mergeSort(vec,mid+1,r);
    merge(vec,l,mid,r);
}

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(auto &i : vec){
        cin >> i;
    }
    mergeSort(vec,0,n-1);

    for(auto i : vec){
        cout << i << " ";
    }
}




// // mid = (r-l)/2 + l;
//     int len1=mid-l+1;
//     int len2 = r-mid;
//     int *arr1 = new int(len1);
//     int *arr2 = new int(len2);

//     int k=l;
//     for(int i=0; i<len1; i++){
//         arr1[i] = vec[k++];
//     }

//     k=mid+1;
//     for(int i=0; i<len2; i++){
//         arr2[i] = vec[k++];
//     }

//     int index1=0, index2=0;
//     k = l;
//     while(index1 < len1 && index2 < len2){
//         if(arr1[index1] < arr2[index2]){
//             vec[k++] = arr1[index1++];
//         }
//         else{
//             vec[k++] = arr2[index2++];
//         }
//     }

//     while(index1 < len1){
//         vec[k++] = arr1[index1++];
//     }
//     while(index2 < len2){
//         vec[k++] = arr2[index2++];
//     }