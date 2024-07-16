// repeat and duplicates in an array

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        int missing;
        int duplicate;
        long long n = nums.size();
        
        long long sumOfn = (n*(n+1))/2;
         
        long long arraySum=0 ;
        for(int i=0;i<n;i++)
            arraySum += nums[i];
        
        
       long long ans1 = sumOfn - arraySum;
        
      // ans1= missing duplicate; // --------------------

        
        long long squareOfSumofn = n*(n+1)*(2*n+1)/6;
        
        long long squareArraySum=0;
        for(int i=0;i<n;i++)
        {
            squareArraySum += nums[i]*nums[i];
        }
        
        // ans2 =  missing*missing - duplicate*duplicate;
       long long ans2 = squareOfSumofn - squareArraySum;
        
      long long  ans3 = (squareOfSumofn - squareArraySum)/(sumOfn - arraySum);
        
        // ans3=  missing + duplicate ;   // ------------------

        duplicate =(ans3-ans1)/2;
        
        missing = (ans1+ans3)/2;
        
        return {duplicate,missing};
        
        
        
    }
};