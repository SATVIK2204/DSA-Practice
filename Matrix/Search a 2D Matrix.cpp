//Question Link -   https://leetcode.com/problems/search-a-2d-matrix/


// Required Function

class Solution {
public:
    
    
    
    bool found(int m, int target){
        if(m==target){
            return true;
        }
        else{
            return false;
        }
    }
    
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        
        
        int sr=0;
        int er=r-1;
        int sc=0;
        int ec=c-1;
        
       
        while(sr<=er){
            
            for(int i=sc;i<=ec;i++){
                if(found(matrix[sr][i],target)){
                    
                    return true;
                }
            }
            sr++;
            
        }
        return false;
    }
};