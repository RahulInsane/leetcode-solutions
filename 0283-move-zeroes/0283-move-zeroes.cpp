class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int non_zero=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            arr[non_zero++]=arr[i];
        }

    }

    //adding zeros to the last
    while(non_zero<arr.size()){
       arr[non_zero++]=0;
    }
    }
};