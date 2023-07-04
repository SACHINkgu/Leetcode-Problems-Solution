vector<int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int freq[n+1]={0};
	for(int  i =0 ;i < n ; i++){
		if(freq[arr[i]]==0){
			freq[arr[i]]++;

		}
		int rep = -1;
		int miss = -1;
		for(int i =1;i<=n;i++){
			if(freq[i]==2){
				rep =i;
			}
			else if(freq[i]==0){
			   miss =i;

			}
			if (rep != -1 && miss != -1)
            break;
		
		}
		
	} return {rep, miss};
}
