class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int n=nums.size();
         
         cout<<n<<"\n";
        vector<pair<int,int>> arr;

        for(int i=0;i<n;i++){
            for(auto &j : nums[i]) arr.push_back({j,i});
        }

        sort(arr.begin(),arr.end());

        vector<int> res = {(int)-1e5,(int)1e5};

        map<int,int> mp;

        int l=0,r=0;

        while(r<arr.size()){
            mp[arr[r].second]++;

            if(mp.size()==n){
                while(mp.size()==n){

                    mp[arr[l].second]--;

                    if(mp[arr[l].second]==0)
                     mp.erase(arr[l].second);

                    l++;

                }

                l--;

                if(arr[r].first-arr[l].first<res[1]-res[0]){
                    res[1]=arr[r].first;
                    res[0]=arr[l].first;
                }
                l++;
            }

            r++;
        }

        return res;
    }
};