// Kth Smallest Element Query : Array , Sorting

// class Solution {
// public:
//     vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
//         // Using Map : 

//         map<int , vector<pair<string , int>>> mp;
//         int n = nums[0].length();

//         for(int i = 0 ; i<nums.size() ; i++){
//             mp[n].push_back({nums[i] , i});
//         }

//         sort(mp[n].begin() , mp[n].end());
//         for(int i = n-1; i>0 ; i--){
//             for(int j = 0 ; j<nums.size() ; j++){
//                 mp[i].push_back({nums[j].substr(n-i , i) , j});
//             }

//             sort(mp[i].begin() , mp[i].end());
//         }

//         vector<int> ans;
//         for(auto q:queries){
//             pair<string , int> p = *(mp[q[1]].begin() + q[0] -1);
//             ans.push_back(p.second);
//         }

//         return ans;
//     }
// };

