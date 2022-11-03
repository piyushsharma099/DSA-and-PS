#include <iostream>
using namespace std;
int main(){
    int mat[11][11]={0};
    int row =0 ,col=2;
    mat[0][5]=1;
    int a=1,b=2;
    int tr=0,tc=0;
    while(a<=121){
        row--;
        if(row<0){
            row=10;
        }
        col++;
        if(col>10){
            col=0;
        }    
        if(mat[row][col]==0){
            mat[row][col]=b;
            tr= row;
            tc= col;
            b++;a++;

        }
        else{
            tr = tr+1;
            mat[tr][tc]=b;
            row = tr;col= tc;
            b++;a++;
        }
        
    
    }
    for (int i = 0; i <= 10; i++)
    {
        /* code */
        for(int j =0;j<=10;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}