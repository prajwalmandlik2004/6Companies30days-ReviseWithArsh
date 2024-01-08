// Minimum Moves to Equal Array Elements II : Array , Sorting 

// class Solution
// {
// public:
//     int minMoves2(vector<int> &nums)
//     {
//         sort(nums.begin(), nums.end());
//         int n = nums.size();
//         int mid = n & 1 == 0 ? n + 1 / 2 : n / 2;
//         int equal = nums[mid];
//         int result = 0;
//         for (auto i : nums)
//         {
//             result += abs(equal - i);
//         }
//         return result;
//     }
// };

