// Combination Sum III : Array , Backtracking

// class Solution {
// public:
//     void solve( vector<vector<int>> &ans , vector<int> &output , int i , int k , int n){
//         // Using recursion :

//         // Base Case : 
//         if(output.size() == k && n== 0){
//             ans.push_back(output);
//             return;
//         }
//         if(output.size() == k && n!= 0){
//             return;
//         }

//         // Recursion : 
//         for(int j = i ; j<=9 ; j++){
//             output.push_back(j);
//             solve(ans , output , j+1 , k , n-j);

//             // Backtracking : 
//             output.pop_back();
//         }
//     }
//     vector<vector<int>> combinationSum3(int k, int n) {
//         vector<vector<int>> ans;
//         vector<int> output;
//         int i = 1;
//         solve(ans , output , i , k , n);
//         return ans;
//     }
// };

