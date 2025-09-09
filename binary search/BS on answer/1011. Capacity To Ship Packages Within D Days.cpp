class Solution {
public:
bool possible(vector<int>& weights, int mid, int days){
    int daycount=1;
    int capacityday=0;
    for (int w: weights){
        if(capacityday +w<=mid){
            capacityday=capacityday+w;
        }else{
            daycount++;
            capacityday=0+w;
        }
    }
        if(daycount>days) return false;
        return true;
    }




    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int sum=0;
        for(int i=0;i<weights.size();i++){
            sum=sum+weights[i];
        }
        int high=sum;

        while(low<high){
            int mid=low+(high-low)/2;
            if (possible(weights,mid,days)){
                high=mid;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};