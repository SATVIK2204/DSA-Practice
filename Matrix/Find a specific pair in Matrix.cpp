//Question Link -   https://www.geeksforgeeks.org/find-a-specific-pair-in-matrix/


// Required Function

#include <bits/stdc++.h>
using namespace std;
#define N 5
int findMaxValue(int mat[][N]){

    int maxvalue= INT_MIN;
    int maxmat[N][N];

    maxmat[N-1][N-1]=mat[N-1][N-1];

    for(int j=N-2;j>=0;j--){
            if(maxvalue<mat[N-1][j]){
                maxvalue=mat[N-1][j];
            }
            maxmat[N-1][j]=maxvalue;
    }

    for(int i=N-2;i>=0;i--){
            if(maxvalue<mat[i][N-1]){
                maxvalue=mat[i][N-1];
            }
            maxmat[i][N-1]=maxvalue;
    }


    for(int i=N-2;i>=0;i--){
        for(int j=N-2;j>=0;j--){

            if (maxmat[i+1][j+1] - mat[i][j] > maxvalue) 
            maxvalue = maxmat[i + 1][j + 1] - mat[i][j]; 
  
          
            maxmat[i][j] = max(mat[i][j],  max(maxmat[i][j + 1], maxmat[i + 1][j]) ); 

        }
    }


    return maxvalue;




}


int main() 
{ 
    int mat[N][N] = { 
                      { 1, 2, -1, -4, -20 }, 
                      { -8, -3, 4, 2, 1 }, 
                      { 3, 8, 6, 1, 3 }, 
                      { -4, -1, 1, 7, -6 }, 
                      { 0, -4, 10, -5, 1 } 
                    }; 
    cout << "Maximum Value is " 
         << findMaxValue(mat); 
  
    return 0; 
} 
