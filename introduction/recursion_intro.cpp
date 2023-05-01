#include <bits/stdc++.h>
using namespace std;
void decreasing(int n){
    if(n<=0){
        return;
    }
    cout << n << " ";
    decreasing(n-1);
}
int main(){
    // recursion necessary condition
    /*
        1- Base Case
        2- Recursive relation
        3- Operation and processing
    */

    // Print in decreasing order -------------
    /*
        i/p - n=6
        o/p - 6 5 4 3 2 1
    */
    int n;
    // cin >> n;
    decreasing(n);


    //


}