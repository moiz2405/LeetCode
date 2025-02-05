class Solution {
public:

    bool freq(string s1, string s2){
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

        for(int i = 0;i<s1.size();i++){
            if(s1[i] != s2[i]){
                return false;
            }
        }

        return true;
    }

    bool areAlmostEqual(string s1, string s2) {

        if(s1.size() != s2.size()){
            return false;
        }
        int count =0;
        
        if(freq(s1,s2)){

        for(int i = 0; i < s1.size(); i++){


            if(s1[i] != s2[i]){
                count ++;
            }
            if(count > 2 ){return false;}
            }

        }
            else{
                return false;
            }

        return true;
    }
};