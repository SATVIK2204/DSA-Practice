//Question Link -   https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1#


// Required Function

class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int sr=0;
        int er=r-1;
        int ec=c-1;
        int sc=0;
        while(sr<=er and sc<=ec){
            
            for(int i=sc;i<=ec;i++){
                cout<<matrix[sr][i]<<" ";
            }
            sr++;
            for(int i=sr;i<=er;i++){
                cout<<matrix[i][ec]<<" ";
            }
            ec--;
            for(int i=ec;i>=sc;i--){
                cout<<matrix[er][i]<<" ";
            }
            er--;
            for(int i=er;i>=sr;i--){
                cout<<matrix[i][sc]<<" ";
            }
            sc++;
            
        }
        
        
    }
};