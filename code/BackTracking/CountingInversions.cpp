#include<iostream>
#include<vector>

using namespace std;

void solve(int i, vector<int> &arr, int &k) {
    cout<<arr.size();
    if (i >= arr.size()-1) {
      return;
    }

    for (int j = i+1; j < arr.size(); j++) {
      if (arr[i] > arr[j]) {
        k++;
      }
    
    }
    solve(i+1,arr,k);
    
  }

  int countInversions(vector<int> &arr) {

        int k=0;
        solve(0,arr,k);
        return k;

  }

int main(){
    vector<int> arr = {2,4,1};
    countInversions(arr);
    return 0; 
}