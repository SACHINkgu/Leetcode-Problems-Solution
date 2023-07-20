#include <algorithm>

vector<int> findMedian(vector<int> &arr, int n){
	
	vector<int>store;
	
	vector<int> medians;
	
	for(int i = 0; i < n; i++){
		
		store.push_back(arr[i]);
		
		sort(store.begin(),store.end());
		
		int median;
		if((i+1)%2==0){
			
			median = (store[i/2] + store[(i+1)/2])/2;
				
		}
		else{
			
			median = store[i/2];
			
		}
		
		medians.push_back(median);
		
	}
	
	return medians;
}
