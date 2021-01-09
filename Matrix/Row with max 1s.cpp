//Question Link -   https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1#


// Required Function

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int er=n-1;
	    int ec=m-1;
	    int idx;
	    int max=0;
	    for(int i=0;i<=er;i++){
	        int count=0;
	        for(int j=0;j<=ec;j++){
	            if(arr[i][j]==1){
	                count++;
	            }
	        }
	        if(count>max){
	            max=count;
	            idx=i;
	        }
	    }
	    if(max==0){
	        return -1;
	    }
	    return idx;
	}

};