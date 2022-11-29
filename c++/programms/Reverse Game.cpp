#include <bits/stdc++.h>
using namespace std;
int reverse(int arr[], int start, int end){
    while (start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    return 0;
} 

int main() {
  int T;
  cin >> T;
  while(T--){
    int N, K,ans;
    cin >> N >> K;
    int a[N];
    for(int i=0 ; i<N ; i++){
        a[i]=i;
    }
    for(int i=0 ; i<N ; i++){
        reverse(a,i,N);
    }
    for(int i=0 ; i<N ; i++){
        cout<<a[i];
    }
    cout<<endl;
    // for(int i=0 ; i<N ; i++){
    //     if(a[i]==K){
    //         ans=i;
    //         break;
    //     }
    // }
    // cout<<ans<<endl;
  }
  return 0;
}