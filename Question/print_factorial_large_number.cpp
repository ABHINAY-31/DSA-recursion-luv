#include <bits/stdc++.h>
using namespace std;
vector<int> fact(vector<int> &vec,int digits){
    int carry = 0;
    for(int i=0;i<vec.size();i++){
        int prod=vec[i]*digits+carry;
        vec[i]=prod%10;
        carry=prod/10;
    }
    while(carry){
        vec.push_back(carry%10);
        carry/=10;
    }
    return vec;
}
int main(){
    int n;
    cin >> n;
    vector<int> vec;

    vec.push_back(1);
    for(int i=2;i<=n;i++){
        vec = fact(vec,i);
    }
    reverse(vec.begin(),vec.end());
    for(auto i:vec){
        cout << i;
    }
}