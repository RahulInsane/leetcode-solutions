class Solution {
public:
    bool lemonadeChange(vector<int>& bill) {
        int five=0,ten=0;
    for(int i=0;i<bill.size();i++){
        if(bill[i]==5) five++;
        else if(bill[i]==10){
            if(five){
                five--;
                ten++;
            }
            else return false;
        }
        else{
            if(ten && five){
                ten--;
                five--;
            }
            else if(five>=3) five-=3;
            else return false;
        }
    }
    return true;
    }
};