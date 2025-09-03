class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }

        vector<int> majority;
        int threshold=nums.size()/3;

        for(auto count:map){
            int element=count.first;
            int totalcount=count.second;

            if(totalcount>threshold){
                majority.push_back(element);
            }
        }
        return majority;
        
    }
};