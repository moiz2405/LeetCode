class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int count=1;
        int n = a.size();
        int m = b.size();
        string str = a;

        while(str.size()<b.size()){
            str+=a;
            count++;
        }
        
        if(str.find(b)!=string::npos){
            return count;
        }
         str+=a;
         count++;
       
        if(str.find(b)!=string::npos){
            return count;
        }

return -1;
    }
};