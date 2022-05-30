https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

class Solution{
    public:
    long long maxSubarraySum(int arr[], int n){
        long long Gsum=LLONG_MIN,Csum=0;
        for(int i=0;i<n;i++){
            Csum = Csum + arr[i];
            if(Csum > Gsum)
            Gsum=Csum;
            if(Csum < 0)
            Csum = 0;
        }
        return Gsum;

    }
};
