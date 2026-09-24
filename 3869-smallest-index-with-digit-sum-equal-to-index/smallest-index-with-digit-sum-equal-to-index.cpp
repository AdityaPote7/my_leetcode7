class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int dig=0,temp=nums[i];
            while(temp>0){
                dig+=temp%10;
                temp/=10;
            }
            if(dig==i){
                return dig;
            }
        }
        return -1;
    }
};