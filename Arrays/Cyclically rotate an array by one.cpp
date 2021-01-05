//Question Link -   https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one/0#


// Required Function

#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(auto i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int ele=a[n-1];
	    for(auto i=n-2;i>=0;i--){
	        a[i+1]=a[i];
	    }
	    a[0]=ele;
	    for(auto i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
}