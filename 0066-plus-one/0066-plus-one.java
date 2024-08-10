class Solution {
    public int[] plusOne(int[] digits) {
        for(int i=digits.length-1; i>=0; i--){
        if(digits[i]<9){
            digits[i]+=1;
            return digits;
        }
        
        digits[i]=0;
        }

       int[] newnum = new int[digits.length +1 ];
        newnum[0]=1;
        return newnum;
    }
}