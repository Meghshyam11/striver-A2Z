class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());

        for (int i=0;i<nums.size()-2;++i){
            if (i>0&&nums[i]==nums[i-1]) continue;

            int j=i+1, k=nums.size()-1;

            while(j<k){
                int sum=nums[i]+nums[k]+nums[j];

                if (sum==0){
                    result.push_back({nums[i],nums[j],nums[k]});

                    while((j<k&&j+1<k&&nums[j]==nums[j+1]))++j;
                    while((j<k&&k-1>j &&nums[k]==nums[k-1]))--k; 

                    ++j;
                    --k;
                }else if(sum<0){
                    ++j;
                } else{
                    --k;
                }
            }
        }
        return result;
    }
};