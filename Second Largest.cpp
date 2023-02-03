class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int max_ele = arr[0];
	    for(int i=1;i<n;i++){
	        max_ele = max(max_ele,arr[i]);
	    }
	    int max2=INT_MIN;
	    for(int i=0;i<n;i++){
	        if(arr[i]==max_ele) continue;
	        else max2 = max(max2,arr[i]);
	    }
	    if(max2==INT_MIN) return -1;
	    return max2;
	}
};
