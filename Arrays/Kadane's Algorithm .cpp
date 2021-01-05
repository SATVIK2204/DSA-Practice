//Question Link -   https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1


// Required Function

int maxSubarraySum(int arr[], int n){
    
    
    int cs=0,ms=0;
    for(auto i=0;i<n;i++){
        cs=cs+arr[i];
        if(cs<0){
            cs=0;
        }
        ms=max(cs,ms);
        
    }
    return ms;
    
}