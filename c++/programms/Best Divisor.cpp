<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int sum(int n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int x=1;
    for(int i=1;i<=n;i++){
        if(n%i==0 && sum(i)>sum(x)){
            x=i;
        }
    }
    cout<<x;
=======
#include <bits/stdc++.h>
using namespace std;
int sum(int n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int x=1;
    for(int i=1;i<=n;i++){
        if(n%i==0 && sum(i)>sum(x)){
            x=i;
        }
    }
    cout<<x;
>>>>>>> 3bff3d08f24ad2857c8ef7b63920d6c9de4ed0c8
}