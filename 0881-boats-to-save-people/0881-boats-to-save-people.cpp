class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int boat=0;
        sort(people.begin(),people.end());
        int low=0;
        int n=people.size();
        int high=n-1;
        while(low<=high){
            if(people[low]+people[high]<=limit){
                boat++;
                low++;
                high--;
            }
            else{
                boat++;
                high--;
            }
        }
        return boat;

    }
};