#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target) {
        std::vector<std::vector<int>> finalarr;
        if (nums.size() < 4) {
            return finalarr;
        }

        std::sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i = 0; i < n - 3; ++i) {
            // Skip duplicates for the first element
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            for (int j = i + 1; j < n - 2; ++j) {
                // Skip duplicates for the second element
                if (j > i + 1 && nums[j] == nums[j - 1]) {
                    continue;
                }

                long long sum_ij = (long long)nums[i] + nums[j];
                int k = j + 1;
                int l = n - 1;

                while (k < l) {
                    long long sum_kl = (long long)nums[k] + nums[l];
                    long long totalSum = sum_ij + sum_kl;

                    if (totalSum == target) {
                        finalarr.push_back({nums[i], nums[j], nums[k], nums[l]});

                        // Skip duplicates for the third element
                        while (k < l && nums[k] == nums[k + 1]) {
                            k++;
                        }
                        // Skip duplicates for the fourth element
                        while (k < l && nums[l] == nums[l - 1]) {
                            l--;
                        }

                        k++;
                        l--;
                    } else if (totalSum < target) {
                        k++;
                    } else {
                        l--;
                    }
                }
            }
        }
        return finalarr;
    }
};