class Solution {
public:
  
    int majorityElement(vector<int> v) {
        int n = v.size();
        map<int ,int> mp;
        for(int  i = 0 ;i< n ;i++){
            mp[v[i]]++;
        }
        int o =0;
        for(auto it : mp){
            if(it.second > (n/2))
                o=it.first;
        }
        return o;
    } 
};
