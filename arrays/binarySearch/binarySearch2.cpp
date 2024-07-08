#include <vector>
#include <iostream>
using namespace std;




// Book Allocation
// class Solution {
// public:
//     bool isPossible(vector<int>& arr, int n, int m, int mid) {
//         int studentCount = 1;
//         int pageSum = 0;

//         for (int i = 0; i < n; i++) {
//             if (pageSum + arr[i] <= mid) {
//                 pageSum += arr[i];
//             } else {
//                 studentCount++;
//                 if (studentCount > m || arr[i] > mid) {
//                     return false;
//                 }
//                 pageSum = arr[i];
//             }
//         }
//         return true;
//     }

//     // Function to find minimum number of pages.
//     long long findPages(int arr[], int n, int m) {
//         int start = 0;
//         int sum = 0;
//         for (int i = 0; i < n; i++) {
//             sum += arr[i];
//         }
//         int end = sum;
//         int ans = -1;
//         int mid = start + (end - start) / 2;

//         while (start <= end) {
//             if (isPossible(arr, n, m, mid)) {
//                 ans = mid;
//                 end = mid - 1;
//             } else {
//                 start = mid + 1;
//             }
//             mid = start + (end - start) / 2;
//         }
//         return ans;
//     }
// };

// int main() {
//     Solution sol;
//     int arr[] = {12, 34, 67, 90};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int m = 2; // Number of students
//     cout << "Minimum number of pages = " << sol.findPages(arr, n, m) << endl;
//     return 0;
// }



















// Aggressive cows
bool isPossible(vector<int> &stalls, int k, int mid){
    int cowsCount = 0;
    int lastPosi = stalls[0];

    for(int i=0; i<stall.size(); i++){
        if(stalls[i]-lastPosi >= mid){
            cowsCount++;
            if(cowsCount == k){
                return true;
            }
            lastPosi = stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k){
    sort(stalls.begin(), stalls.end());
     int s =0;
     int maxi = -1;
     for(int i=0; i<stalls.size(); i++){
        maxi = max(maxi , stalls[i]);
     }
     int e = maxi;
     int ans =-1;
     int mid = s+ (e-s)/2;

     while(s<=e){
        if(isPossible(stalls, k , mid)){
            ans = mid;
            s = mid +1;
        }else{
            e = mid-1;
        }
         mid = s+ (e-s)/2;
     }
     return ans;
}