#include <bits/stdc++.h>
using namespace std;
int main() {
  int T;
  cin >> T;
  while(T--){
    int N, K,ans;
    cin >>N>>K;
    int a[N];
    for(int i=0 ; i<N ; i++){
        a[i]=i;
    }
    int b[N];
    int s=0;
    int e=N-1;
    int k=0;
    while(k<N){
        b[k]=a[e];
        b[k+1]=a[s];
        s++;
        e--;
        k+=2;
    }
    for(int i=0 ; i<N ; i++){
        cout<<b[i];
    }
    cout<<endl;
    // for(int i=0 ; i<N ; i++){
    //     if(b[i]==K){
    //         ans=i;
    //         break;
    //     }
    // }
    // cout<<ans<<endl;
  }
  return 0;
}