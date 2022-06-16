//https://leetcode.com/problems/median-of-two-sorted-arrays/
//HARD LEVEL


class Solution {
public:
    double findMedianSortedArrays(vector<int>& n1, vector<int>& n2) {
        int n=n1.size(),m=n2.size();
        int idx1=0,idx2=0,eve=0,odd=0;
        for(int i=0;i<=((m+n)/2);i++){
            if(idx1==n){
                if(i==((m+n)/2)){
                    odd=n2[idx2];
                }
                if(i==((m+n)/2)-1){
                    eve=n2[idx2];
                }
                idx2++;
                continue;
            }else if(idx2==m){
                if(i==((m+n)/2)){
                    odd=n1[idx1];
                }
                if(i==((m+n)/2)-1){
                    eve=n1[idx1];
                }
                idx1++;
                continue;
            }
            if(n1[idx1]<n2[idx2]){
                if(i==((m+n)/2)){
                    odd=n1[idx1];
                }
                if(i==((m+n)/2)-1){
                    eve=n1[idx1];
                }
                idx1++;
            }else{
                if(i==((m+n)/2)){
                    odd=n2[idx2];
                }
                if(i==((m+n)/2)-1){
                    eve=n2[idx2];
                }
                idx2++;
            }
        }
        if((n+m)%2!=0){
            cout << eve << "--" << odd; 
            return double(odd);
        }else{
            cout << eve << "--" << odd; 
            return double(eve+odd)/2;
        }
    }
};

