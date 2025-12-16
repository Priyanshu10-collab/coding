#include<bits/stdc++.h>
using namespace std;

// int findUnique(int arr[], int size){

//     !Approach 1 (Better Time Complexity)
//     int ans = 0;
//     for(int i = 0 ; i < size ; i++){
//         ans = ans ^ arr[i];
//     }
//     return ans;
     
//     !Approach 2 (Not good time complexity)
//     for(int i = 0 ; i < size ; i++){
//         for(int j = i+1 ; j < size; j++){
//             if(arr[i] == arr[j]){
//                 arr[i] = arr[j] = -1;
//             }
//         }
//     }

//     for(int i = 0 ; i< size; i++){
//         if(arr[i] != -1){
//             return arr[i];
//         }
//     }
// }


// void movesZero(int arr[] , int size){
//     int i= 0;
//     for(int j = 0; j < size ; j++){
//         if(arr[j] != 0){
//             swap(arr[j],arr[i]);
//             i++;
//         }
//     }
// }

// void SortZeroAndOnes(int arr[] , int size){
//     int s = 0;
//     int e = size-1;

//     while(s<e){
//         if(arr[s] == 0) s++;
//         if(arr[e] == 1) e--;

//         if(arr[s] == 1 && arr[e] == 0 ){
//             swap(arr[s],arr[e]);
//             s++;
//             e--;
//         }
//     }
// }

// vector<int> findUnionVector(vector<int> &a, vector<int> &b){

//     vector<int>ans;
//     int i = 0, j = 0;

//     while(i < a.size() && j <b.size()){

//         if(a[i] < b[j]){
//             if(ans.empty() || ans.back() != a[i]){
//                 ans.push_back(a[i]);
//             }
//             i++;
//         }

//         else if(a[i] > b[j]){
//             if(ans.empty() || ans.back() != b[j]){
//                 ans.push_back(b[j]);
//             }
//             j++;
//         }

//         else{
//             if(a[i] == b[j] && (ans.empty() || ans.back() != a[i])){
//                 ans.push_back(a[i]);
//             }
//             i++; j++;
//         }
//     }

//     while(i < a.size() && a[i] != ans.back()){
//             ans.push_back(a[i]);
//             i++;
//     }
//     while(j < b.size() && b[j] != ans.back()){
//         ans.push_back(b[j]);
//             j++;
//     }
//     return ans;
// }

// int findMissing(int nums[], int size){
//     int expectedSum =  size * (size + 1) / 2;
//     int actualSum = accumulate(nums, nums + size, 0);
//     return expectedSum - actualSum;
// }

// int consecuttiveOnes(int arr[], int size){
    
//     int count = 0;
//     int ans = 0;

//     for(int i = 0 ; i < size ; i++){
//         if(arr[i] == 1){
//             count++;
//             ans = max(ans,count);
//         }
//         else{
//             count = 0;
//         }
//     }
//     return ans;
// }

// int longestSubarraySum(vector<int> a, int k){
//     int left = 0 , right = 0;
//     long long sum = 0;
//     int maxlen = 0;
//     int n = a.size();

//     while(right < n){
//         sum += a[right];

//         while(left<= right && sum > k){
//             sum -= a[left];
//             left++;
//         }

//         if(sum == k){
//             maxlen = max(maxlen, right-left+1);
//         }

//         right++;
//     }

//     return maxlen;
// }

// int longestSubarray(vector<int> &nums, int k) {
//         unordered_map<long long, int> preSumMap;  // prefix sum → first index
//         long long sum = 0;
//         int maxlen = 0;

//         for (int i = 0; i < nums.size(); i++) {
//             sum += nums[i];

//             // Case 1: subarray from 0 to i
//             if (sum == k) {
//                 maxlen = i + 1;
//             }

//             // Case 2: if prefix sum (sum - k) was seen before
//             long long rem = sum - k;
//             if (preSumMap.find(rem) != preSumMap.end()) {
//                 int len = i - preSumMap[rem];
//                 maxlen = max(maxlen, len);
//             }

//             // Store prefix sum if seeing it for the first time
//             if (preSumMap.find(sum) == preSumMap.end()) {
//                 preSumMap[sum] = i;
//             }
//         }

//         return maxlen;
//     }


// void sortColor(vector<int> &nums){
//     int low = 0;
//     int mid = 0;
//     int high = nums.size() - 1;

//     while(mid <= high){

//         if(nums[mid] == 0){
//             swap(nums[low],nums[mid]);
//             low++;
//             mid++;
//         }

//         else if(nums[mid] == 1){
//             mid++;
//         }

//         else{
//             swap(nums[mid],nums[high]);
//             high--;
//         }
//     }
// }


// int maximumSubarraySum(vector<int> &a){
//     int maxSum = a[0];
//     int currSum = a[0];

//     for(int i = 0 ; i < a.size() ; i++){
//         currSum = max(a[i], currSum + a[i]);
//         maxSum = max(currSum,maxSum);
//     }
//     cout<<maxSum;
// }


// 

// void nextPermutation(vector<int> &nums){
//     int n = nums.size();
//     int index = -1;

//     for(int i = n-2; i>=0 ; i--){
//         if(nums[i] < nums[i+1]){
//             index = i;
//             break;
//         }
//     }

//     if(index == -1){
//         reverse(nums.begin(),nums.end());
//         return;
//     }

//     for(int i = n -1 ; i > index ; i--){
//         if(nums[i] > nums[index]){
//             swap(nums[i],nums[index]);
//             break;
//         }
//     }

//     reverse(nums.begin() + index + 1, nums.end());
// }

// 

// vector<int> nextPermutation(vector<int> &nums){
//     int n = nums.size();
//     int index = -1;

//     for(int i = n-2; i >= 0 ; i--){
//         if(nums[i] < nums[i+1]){
//             index =i;
//             break;
//         }
//     }

//     if(index == -1){
//         reverse(nums.begin(), nums.end());
//     }

//     for(int i = n-1 ; i>= index ; i--){
//         if(nums[i] > nums[index]){
//         swap(nums[i], nums[index]);
//         break;
//         }
//     }

//     reverse(nums.begin()+index+1, nums.end());

//     return nums;

// }

// int Subarraysum(vector<int> &nums, int k){
//     int left = 0;
//     int right = 0;
//     int maxlen = 0;

//     long long sum = 0;

//     while( right < nums.size()){

//         sum +=nums[right];

//         while(left <= right && sum > k){
//             sum -= nums[left];
//             left++;
//         }

//         if(sum == k){
//             maxlen = max(maxlen,right-left+1);
//         }
//         right++;
//     }
//     return maxlen;
// }

// vector<int> arrayLeader(vector<int> &nums){
//     vector<int>ans;
//     int n = nums.size();
//     int maxright = nums[n-1];

//     ans.push_back(nums[n-1]);
//     for(int i = n-2; i>= 0; i--){
//         if(nums[i] > maxright){
//             ans.push_back(nums[i]);
//             maxright = nums[i];
//         }
//     }

//     reverse(ans.begin(),ans.end());
//     return ans;
// }

// int longestSuccesiveElement(vector<int>&nums){
//     int n = nums.size();
//     int longest = 1;
//     int count = 1;

//     sort(nums.begin(),nums.end());

//     for(int i = 1 ; i < n ; i++){
//         if(nums[i] == nums[i-1]){
//             continue;
//         }

//         if(nums[i] == nums[i-1] + 1){
//             count++;
//         }
//         else{
//             longest = max(longest,count);
//             count = 1;
//         }
//     }

//     return max(longest,count);
// }
// vector<pair<int,int>> findZero(vector<vector<int>> &nums, int m, int n , int target) {
//     vector<pair<int,int>> ans;
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             if (nums[i][j] == target) {
//                 ans.push_back({i, j});
//             }
//         }
//     }
//     return ans;
// }

// void setZeroes(vector<vector<int>> &matrix) {
//     int m = matrix.size();
//     int n = matrix[0].size();

//     vector<pair<int,int>> zeros = findZero(matrix, m, n, 0);

//     for (auto [row, column] : zeros) {
//         // Set entire row to 0
//         for (int j = 0; j < n; j++) {
//             matrix[row][j] = 0;
//         }
//         // Set entire column to 0
//         for (int i = 0; i < m; i++) {
//             matrix[i][column] = 0;
//         }
//     }
// }

// void rotateMatrix(vector<vector<int>>& matrix) {
//     int n = matrix.size();
//     for(int i =0 ; i < n ; i++){
//         for(int j =i+1; j < n; j++){
//             swap(matrix[i][j], matrix[j][i]);
//         }
//     }

//     //reverse
//     for(int i = 0; i < n ; i++){
//         reverse(matrix[i].begin(),matrix[i].end());
//     }
// }

// vector<int> spiralOrder(vector<vector<int>>& matrix){
//     vector<int>ans;
//     int row = matrix.size();
//     int column = matrix[0].size();

//     int count = 0;
//     int total = row*column;

//     int startingRow = 0;
//     int startingColumn = 0;
//     int endingRow = row -1;
//     int endingColumn= column -1;

//     while(count < total){

//         //printing starting row
//         for(int i = startingColumn ; count < total && i <= endingColumn ; i++){
//             ans.push_back(matrix[startingRow][i]);
//             count ++;
//         }
//         startingRow++;
        
//         //printing ending column
//         for(int i = startingRow; count < total && i <= endingRow ; i++){
//             ans.push_back(matrix[i][endingColumn]);
//             count++;
//         }
//         endingColumn--;


//         //printing endingRow{}

//         for(int i =endingColumn; count < total && i >= startingColumn ; i--){
//             ans.push_back(matrix[endingRow][i]);
//             count++;
//         }
//         endingRow--;

//         //printing starting Column
//         for(int i = endingRow; count < total && i >`1= startingRow ; i--){
//             ans.push_back(matrix[i][startingColumn]);
//             count++;
//         }

//         startingColumn++;
//     }
//     return ans;

// }

//For Given row and column
// int NcR(int row , int column){
//     int ans = 1;

//     for(int i = 0; i< column ; i++){
//         ans = ans*(row-i);
//         ans = ans / (i +1);
//     }
//     return ans;
// }

// //For entire row
// vector<int> FullNcR(int row){
//     vector<int>ans;
//     for(int i =0 ; i <= row ; i++){
//         ans.push_back(NcR(row,i));
//     }
//     return ans;
// }

// //Entire Triangle(Pascal Triangle)
// vector<int> pascalTriangle(int n){
//     vector<int>ans;
//     for(int i =0; i < n ; i++){
//         for(int j = 0 ; j <= i ; j++){
//             ans.push_back(NcR(i,j));
//         }
//     }
//     return ans;
// }

// int NcR(int row, int column){
//     int ans = 1;

//     for(int i = 0; i< column; i++){
//         ans = ans * (row - i);
//         ans = ans / (i+1);
//     }
//     return ans;
// }

// //for entire row
// vector<int> fullNcR(int row){
//     vector<int>ans;
//     for(int i = 0 ; i <= row ; i++){
//         ans.push_back(NcR(row,i));
//     }
//     return ans;

// }

// //For Entire Triangle(Pascal Triangle)
// vector<int> pascalTriangle(int row){
//     vector<int>ans;
//     for(int i = 0 ; i < row ; i++){
//         for(int j = 0 ; j <= i; j++){
//             ans.push_back(NcR(i,j));
//         }
//     }
//     return ans;
// }


// vector<int> majorityElement(vector<int> &nums){
//     vector<int>ans;
//     int n = nums.size();
//     int mini = (n/3) + 1;
//     map<int,int>mp;

//     for(int i = 0 ; i < n ; i++){
//         mp[nums[i]]++;

//         if(mp[nums[i]] == mini){
//             ans.push_back(nums[i]);
//         }

//         if(ans.size() == 2){
//             return ans;
//         }
//     }
//     sort(ans.begin(),ans.end());
//     return ans;
// }

// vector<vector<int>> FourSum(vector<int> &nums, int target){
//     int n = nums.size();
//     vector<vector<int>>ans;
//     sort(nums.begin(),nums.end());

//     for(int i = 0 ; i < n; i++){
//         if(nums[i] == nums[i-1]){
//             continue;
//         }
//         for(int j = i+1; j < n; j++){
//             if(j != i+1 && nums[j] == nums[j-1]){
//                 continue;
//             }
//             int k = j+1;
//             int l = n-1;

//             long long sum = nums[i];
//             sum += nums[j];
//             sum += nums[k];
//             sum += nums[l];

//             if(sum == target){
//                 vector<int>temp= {nums[i],nums[j],nums[k],nums[l]};
//                 ans.push_back(temp);
//                 k++;
//                 l--;

//                 while(k < l && nums[k] == nums[k-1]){
//                     k++;
//                 }
//                 while(k < l && nums[l] == nums[l+1]){
//                     l--;
//                 }
//             }
//             else if(sum > target){
//                 l--;
//             }
//             else{
//                 k++;
//             }
//         }
//     }
//     return ans;
// }

// int maxlen(vector<int> &arr){
//     map<long long, int> presumMap;
//     long long sum = 0;
//     int maxlen = 0;

//     for(int i = 0 ; i < arr.size() ; i++){
//         sum += arr[i];


//         if(sum == 0){
//             maxlen = max(maxlen, i+1);
//         }

//         long rem = sum - 0;

//         if(presumMap.find(rem) != presumMap.end()){
//             int len = i - presumMap[rem];
//             maxlen = max(maxlen,len);
//         }

//         if(presumMap.find(sum) == presumMap.end()){
//             presumMap[sum] = i;
//         }
//     }
//     return maxlen;
// }

// vector<vector<int>> mergeOverlapping(vector<vector<int>> &intervals) {
//     int n = intervals.size();
//     vector<vector<int>> ans;

//     // Sort intervals by start time
//     sort(intervals.begin(), intervals.end());

//     for (int i = 0; i < n; i++) {
//         int start = intervals[i][0];
//         int end = intervals[i][1];

//         // If ans is not empty and current interval overlaps with last interval in ans
//         if (!ans.empty() && start <= ans.back()[1]) {
//             ans.back()[1] = max(ans.back()[1], end);
//         } 
//         else {
//             ans.push_back({start, end});
//         }
//     }

//     return ans;
// }


// void swapGreater(vector<int>& arr1, vector<int>& arr2, int index1, int index2) {
//     if (arr1[index1] > arr2[index2]) {
//         swap(arr1[index1], arr2[index2]);
//     }
// }

// void mergeIntervals(vector<int>& nums1, int n, vector<int>& nums2, int m) {
//     int len = n + m;
//     int gap = (len / 2) + (len % 2);

//     while (gap > 0) {
//         int left = 0;
//         int right = left + gap;

//         while (right < len) {
//             // Case 1: both in nums1
//             if (left < n && right < n) {
//                 swapGreater(nums1, nums1, left, right);
//             }
//             // Case 2: left in nums1, right in nums2
//             else if (left < n && right >= n) {
//                 swapGreater(nums1, nums2, left, right - n);
//             }
//             // Case 3: both in nums2
//             else if (left >= n) {
//                 swapGreater(nums2, nums2, left - n, right - n);
//             }
//             left++;
//             right++;
//         }

//         if (gap == 1)
//             break;

//         gap = (gap / 2) + (gap % 2);
//     }

//     // Merge the two arrays
//     for (int i = 0; i < m; i++) {
//         nums1[n + i] = nums2[i];
//     }
// }

// vector<int> MissingReapeatingNumbers(vector<int> &nums){
//     int n = nums.size();
//     vector<int>ans(n+1,0);

//     for(int i = 0; i <n ; i++){
//         ans[nums[i]]++;
//     }
    
//     int missing = -1;
//     int repeating = -1;

//     for(int i = 0 ; i < n ; i++){
//         if(ans[i] == 2 ) repeating = i ;
//         if(ans[i] == 0 ) missing = i ;

//         if(missing != -1 && repeating != -1) break;
//     }

//     return {repeating, missing};
// }

// int maxiProduct(vector<int> &nums){
//     int n = nums.size();
//     int maxi = INT_MIN;
//     int pref = 1;
//     int suff = 1;

//     for(int i = 0 ; i < n ; i++){
//         if(pref == 0) pref = 1;
//         if(suff == 0) suff = 1;

//         pref *= nums[i];
//         suff *= nums[n-i-1];

//         maxi = max(maxi, max(pref,suff));
//     }
//     return maxi;
// }

// int floorIndex(vector<int> &nums, int target){
//     int low = 0 ;
//     int high = nums.size() - 1;
//     int floorIndex = -1;

//     while(low <= high){
//         int mid = low + (high - low) / 2;

//         if(nums[mid] <= target){
//             floorIndex = nums[mid];
//             low = mid + 1;
//         }
//         else{
//             high = mid - 1;
//         }
//     }
//     return floorIndex;
// }

// vector<int> floorIndexAndCeil(vector<int> &nums, int target){
//     int low = 0;
//     int high = nums.size() -1;
//     int floorIndex = -1;
//     int CeilIndex = -1;

//     while(low <= high){
//         int mid = low + (high -low) / 2;

//         if(nums[mid] == target){
//             return{target,target};
//         }

//         if(nums[mid] <= target){
//             floorIndex = nums[mid];
//             low = mid + 1;
//         }

//         else{
//             CeilIndex = nums[mid];
//             high = mid - 1;
//         }
//     }
//     return {CeilIndex, floorIndex};
// }

// int searchInsertPosition(vector<int> &nums, int target){
//     int n = nums.size();
//     int s = 0;
//     int e  = n-1;
//     int floorIndex = 1;

//     while(s <= e){
//         int mid = s + (e-s)/2;

//         if(nums[mid] == target){
//             return mid;
//         }
//         else if(nums[mid] < target){
//             floorIndex = mid + 1;
//             s = mid + 1;
//         }
//         else{
//             e = mid - 1;
//         }
//     }
//     return floorIndex;
// }

// int firstIndex(vector<int> &nums, int target){
//     int n = nums.size();
//     int s = 0;
//     int e = n -1;
//     int first = -1;

//     while(s <= e){
//         int mid = s + (e-s)/2;

//         if(nums[mid] == target){
//             first = mid ;
//             e = mid -1;
//         }
//         else if(nums[mid] < target){
//             s = mid + 1;
//         }
//         else{
//             e = mid - 1;
//         }
//     }
//     return first;
// }

// int lastIndex(vector<int> &nums, int target){
//     int n = nums.size();
//     int s = 0;
//     int e = n - 1;
//     int last  = -1;

//     while(s <= e){
//         int mid = s + (e-s)/2;

//         if(nums[mid] == target){
//             last = mid;
//             s = mid + 1;
//         }
//         else if(nums[mid] < target){
//             s = mid + 1;
//         }
//         else{
//             e = mid - 1;
//         }
//     }
//     return last;
// }

// vector<int> searchRange(vector<int> &nums, int target){
//     vector<int> ans(2,-1);
//     ans[0] = firstIndex(nums,target);
//     ans[1] = lastIndex(nums,target);
//     return ans;
// }


// int findMinimuminRotatedSortedArray(vector<int> &nums){
//     int n = nums.size();
//     int low = 0;
//     int high = n-1;

//     while(low < high){
//         int mid = low + (high - low) /2;

//         if(nums[mid] > nums[high]){
//             low = mid + 1;
//         }
//         else{
//             high = mid;
//         }
//     }
//     return nums[low];
// }

int findKthRotation(vector<int> &nums){
    int n = nums.size();
    int s = 0;
    int e = n -1;

    while(s < e){
        int mid = s + (e-s) / 2;

        if(nums[mid] > nums[e]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
    }
    return s;
}

int SingleElement(vector<int> &nums){
    int n = nums.size();
    int s = 0;
    int e = n-1;

    while(s < e){
        int mid = s + (e-s) /2;

        if(mid % 2 == 1){
            mid --;
        }
        if(nums[mid] != nums[mid+1]){
            e = mid;
        }
        else{
            s = mid + 2;
        }
    }
    return nums[e];
}
int FindPeakElement(vector<int> &arr){
    int n = arr.size();
    int s = 0;
    int e = n-1;

    while(s < e){
        int mid = s + (e-s)/2;

        if(arr[mid] > arr[mid+1]){
            s = mid +1;
        }
        else{
            e = mid;
        }
    }
    return s;
}

int findMinimuminRotatedSortedArray(vector<int> &nums){
    int n = nums.size();
    int s = 0;
    int e = n-1;

    while(s < e){
        int mid = s + (e-s)/2;

        if(nums[mid] > nums[e]){
            s = mid + 1;
        }

        else{
            e = mid;
        }

        return nums[s];
    }
}

int nthRoot(int n , int m){
    int s = 0;
    int e = m ;

    while(s<=e){
        int mid = s + (e-s) /2;

        if(pow(mid,n) == m){
            return mid;
        }
        else if(pow(mid,n) < m){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
}

int getMax(vector<int> &nums){
    int n = nums.size();
    int ans = INT_MIN;

    for(int i = 0 ; i < n ; i++){
        ans = max(ans,nums[i]);
    }
    return ans;
}

int CalculateTotalHour(vector<int> &nums, int hours){
    int n = nums.size();
    int totalHours = 0;

    for(int i = 0 ; i < nums.size() ; i++){
        totalHours += ceil(double(nums[i]) / (double) hours);
    }
    return totalHours;
}
int minEatingSpeed(vector<int> &nums, int h){
    int s = 1;
    int e = getMax(nums);

    while(s <= e){
        int mid = s + (e-s)/2;
        int hours = CalculateTotalHour(nums,mid);

        if(hours <= h){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return s;
}

string removeparenthesis(string s){
    string result;
    int count = 0;

    for(auto ch : s){
        if(ch == '('){
            if(count > 0){
                result += ch;
            }
            count++;
        }
        else if(ch == ')'){
            count--;
            if(count > 0){
                result += ch;
            }
        }
    }
    return result;
}

string reverseWords (string s){
    string ans = "";
    reverse(s.begin(),s.end());

    for(int i = 0 ; i < s.size() ; i++){
        string word= "";

        while(i < s.size() && s[i] != ' '){
            word += s[i];
            i++;
        }

        reverse(word.begin(),word.end());
        ans += word + ' ';
    }
    return ans;
}

string largestOddNumber(string num){
    for (int i = num.size() - 1; i >= 0; i--) {
        if ((num[i] - '0') % 2 == 1) {
            return num.substr(0, i + 1);
        }
    }
    return "";
}

string longestCommonPrefix(vector<string> &v){
    string ans= "";
    sort(v.begin(),v.end());

    int n = v.size();
    string first= v[0], last = v[n-1];
    for(int i= 0; i< min(first.size(), last.size()); i++){
        if(first[i] != last[i]){
            return ans;
        }
        else{
            ans +=first[i];
        }
    }
    return ans;
}

bool isomorphic(string s, string t) {
    if(s.length() != t.length()){
        return false;
    }

    unordered_map<char,vector<int>>mp1,mp2;

    for(int i = 0 ; i < s.length(); i++){
        mp1[s[i]].push_back(i);
        mp2[t[i]].push_back(i);
    }

    for(int i = 0 ; i < s.length(); i++){
        if(mp1[s[i]] != mp2[t[i]]){
            return false;
        }
    }
    return true;
}

bool rotateString(string s, string goal) {
    if(s.length() != goal.length()){
        return false;
    }
    string temp =  s+s;

    return temp.find(goal) != -1;
}

//Approach 1
bool anagram(string s, string t) {
    if(s.length() != t.length()){
        return false;
    }

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] != t[i]){
            return false;
        }
    }
    return true;
}

//Approach 2
// bool anagram(string s, string t) {
//     if(s.length() != t.length()){
//         return false;
//     }

//     unordered_map<char,int> ma;

//     for(auto ch : s){
//         ma[ch]++;
//     }

//     for(auto ch : t){
//         ma[ch]--;

//         if(ma[ch] < 0){
//             return false;
//         }
//     }
//     return true;
// }

// string FrequencySort(string s) {
//     unordered_map<char, int> mp;
//     for (char c : s) mp[c]++;

//     priority_queue<pair<int, char>> maxHeap;
//     for (auto it = mp.begin(); it != mp.end(); ++it) {
//         maxHeap.push({it->second, it->first});
//     }

//     string result;
//     while (!maxHeap.empty()) {
//         pair<int, char> top = maxHeap.top();
//         int freq = top.first;
//         char ch = top.second;
//         maxHeap.pop();
//         result.append(freq, ch);
//     }

//     return result;
// }


int maxDepth(string s){
    int currDepth = 0, maxDepth = 0;

    for(auto ch : s){
        if(ch == '('){
            currDepth++;
            maxDepth = max(currDepth,maxDepth);
        }
        else if(ch == ')'){
            currDepth--;
        }
    }
    return maxDepth;
}
int romanToInteger(string s){
    unordered_map<char,int> roman = {
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}
    };

    int result = 0;
    int n = s.length();

    for(int i = 0 ;  i < n ; i++){
        if(roman[s[i]] < roman[s[i+1]]){
            result -= roman[s[i]];
        }
        else{
            result += roman[s[i]];
        }
    }
    return result;
}

int main()
{
    // vector<int> nums = {4,5,6,7,0,1,2};
    // cout<<findMinimuminRotatedSortedArray(nums);
    // return 0;
    // int a = nthRoot(3,27);
    // cout<<a;

    // string s = "(a(b(c)d)";
    // string a = "((((a))))";
    // cout<<removeparenthesis(a);

    // string s = " The Sky is Blue";
    // cout<<reverseWords(s);

    // string s = "1234";
    // cout<<largestOddNumber(s);

    // vector<string>s = {"flower","flow","flight"};
    // cout<<longestCommonPrefix(s);

    // string s = "egg", t = "add";
    // cout<<isomorphic(s,t);

    // string s = "abc", goal = "bca";
    // cout<<rotateString(s,goal);

    // string s = "listen", t = "silent";
    // cout<<anagram(s,t);

    // string s = "tree";
    // cout<<FrequencySort(s);

    // string s = "(a(b(c)d)";
    // cout<<maxDepth(s);

    string s = "XXI";
    cout<<romanToInteger(s);
}


