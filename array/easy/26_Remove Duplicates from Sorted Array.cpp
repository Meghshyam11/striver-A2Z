class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
   
        if (nums.empty()) return 0;

        int insert_pos = 1;  // Pointer to place the next unique element

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[i - 1]) {
                nums[insert_pos] = nums[i];
                ++insert_pos;
            }
        }
        return insert_pos;
    }
    
};