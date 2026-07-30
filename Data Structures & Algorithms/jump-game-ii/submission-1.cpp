class Solution {
public:
    int jump(vector<int>& nums) {
        int totaljump = 0, coverage = 0, lastjump = 0;
        int des = nums.size() - 1;

        if (nums.size() == 1) return 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            coverage = max(coverage, nums[i] + i);
            if (i == lastjump) {
                totaljump++;
                lastjump = coverage;
                if (lastjump >= des) return totaljump;
            }
            
        }

        return totaljump;
    }
};
