class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
         vector <int> temp;
    int j=0;
    for(int i=0;i<arr.size();i++){
            if(i==0){
                temp.push_back(arr[i]);
                
            } 
            else if (arr[i]!=temp[j]) {
                temp.push_back(arr[i]);
                j++;
            }
    }
    int k=temp.size();
    for(int i=0;i<k;i++){
        arr[i]=temp[i];
    }
    return k;
    }
};