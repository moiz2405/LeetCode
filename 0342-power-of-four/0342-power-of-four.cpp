class Solution {
public:
    bool isPowerOfFour(int n) {
       bool ans = false;
       	vector<int>arr;
	while(n>0){
	    int rem = n%4;
	    arr.push_back(rem);
	    n/=4;
	}
	reverse(arr.begin(),arr.end());

	int count=0,othercount=0;
	for(int n : arr){
	    if(n==1){count++;}
        else if(n!=1 and n!=0){
	        othercount++;
	    }
	}
	if(count==1 and othercount==0){
	    return true;
	}else{return false;}
    
    }
};