Question One - Remove Duplicates from Sorted Array:

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;
    int j = 0;
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] != nums[j]) {
            ++j;
            nums[j] = nums[i];
        }
    }
    return j + 1;
}
Question Two - Rotate Array:

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}
Question Three - Contains Duplicate:

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen;
    for (int num : nums) {
        if (seen.count(num)) {
            return true;
        } else {
            seen.insert(num);
        }
    }
    return false;
}
Question Four - Single Number:
int singleNumber(vector<int>& nums) {
    int result = 0;
    for (int num : nums) {
        result ^= num;
    }
    return result;
}


