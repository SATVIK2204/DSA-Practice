//Question Link -   https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1#


// Required Function

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        int min=INT_MAX;
        int max=INT_MIN;
        for(int i=0;i<r;i++){
            if(matrix[i][0]<min){
                min=matrix[i][0];
            }
            
            if(matrix[i][c-1]>max){
                max=matrix[i][c-1];
            }
        }
        
        int req=(r*c+1)/2;
        while(min<max){
            int mid=min+(max-min)/2;
            int count=0;
            for(int i=0;i<r;i++){
                count+=upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();
            }
            if(count<req){
                min=mid+1;
            }
            else{
                max=mid;
            }
        }
        return min;
        
        
        
        
        
        
    }
};