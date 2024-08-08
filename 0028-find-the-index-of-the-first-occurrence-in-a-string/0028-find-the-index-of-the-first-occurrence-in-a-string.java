class Solution {
    public int strStr(String haystack, String needle) {
        int i;
        int a1 = haystack.length();
        int a2 = needle.length();
         if(a1<a2){
            return -1;
         }
         for(i=0;i<=a1-a2;i++){
            int j=0;
            while(j<a2 && haystack.charAt(i+j)==needle.charAt(j)){
                j++;
                if(j==a2){
                    return i;
                }
            }
         }
            return -1;
    }
}