#include <bits/stdc++.h>
using namespace std;
int t_digits(int n){
    if (n==0){
        return 1;
    }
    int c=0;
    while (n!=0) {
        n=n/10;
        c++;
    }
    return c;
}
int sum1(int n , int ans){
    int s=0 ,r , c=0;
    while(n>0){
        r=n%10;    
        s=s+r;    
        n=n/10;
        c++;
        if(c<ans/2-1){
            break;
        }
    }
    return s;
}
int sum2(int n , int ans){
    int s=0 ,r , c=0;
    while(n>0){
        c++;
        if(c>ans/2-1){
            continue;
        }
        else{
            r=n%10;    
            s=s+r;    
            n=n/10;
            c++;
            if(c<ans){
                break;
            }
        }
    }
    return s;
}

int main(){
    int n,ans,i,s1,s2;
    cout<<"enter the number :- ";
    cin>>n;
    ans=t_digits(n);
    s1=sum1(n,ans);
    s2=sum2(n,ans);
    if(s1==s2){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

}