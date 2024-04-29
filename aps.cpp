#include<iostream> 
#include<vector>
#include<algorithm>
#include<climits>

using namespace std; 
int main ( ){
    vector<vector<int>>g ={{0,2,1000,1000},{1,0,3,1000},{1000,1000,0,1000},{3,5,4,0}};

    int m = 4 ;
    int n = 4 ;
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                 g[i][j]=min(g[i][j],(g[i][k]+g[k][j]));
            }
        }
    }
     for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                 cout<<g[i][j]<<" ";
            }
            cout<<endl;
    }

    return 0 ;
}