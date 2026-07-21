class Solution {
public:
    int majorityElement(vector<int>& arr) {
    int target= arr.size()/2;
    int count=0;
    int element;
    for(int i=0;i<arr.size();i++){
        if(count==0) {
            count=1;
            element =arr[i];
        }
        else if(arr[i]==element) count++;
        else if(arr[i]!=element) count--;
    
   
}

//now check if element that is in majority is > target or not
    int count1=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==element) count1++;
       
    }
     if(count1>target) return element;
     else return -1;
}
    
};