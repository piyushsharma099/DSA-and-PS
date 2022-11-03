<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,x,k,y;
    int s1=0,s2=0;
    cin>>t;
    k=t;
    while(t--){
        cin>>x>>y; 
        s1+=x;
        s2+=y;
    }
   if(s1==k*x||s2==k*y){
        cout<<"YES"<<endl;
   }
   else{
        cout<<"NO"<<endl;
   }
=======
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,x,k,y;
    int s1=0,s2=0;
    cin>>t;
    k=t;
    while(t--){
        cin>>x>>y; 
        s1+=x;
        s2+=y;
    }
   if(s1==k*x||s2==k*y){
        cout<<"YES"<<endl;
   }
   else{
        cout<<"NO"<<endl;
   }
>>>>>>> 3bff3d08f24ad2857c8ef7b63920d6c9de4ed0c8
}