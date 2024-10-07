// class Solution {
//     static int remlen(String s, int len){
//            //10
//         for(int i =1;i<s.length();i++){
//             if(s.charAt(i-1)=='A' && s.charAt(i+1)=='B'){
//                 len = len-2;   //8
//             }
//             if(s.charAt(i-1)=='C' && s.charAt(i+1)=='D'){
//                 len = len-2;   //8
//             }
//     }
//         return len;
//     }
//     public int minLength(String s) {
//         int len =s.length();
//         remlen(s,len);
//         return len;
//     }
// }
class Solution {
    static int remlen(String s, int len) {
        boolean foundPair = true;
        while (foundPair) {
            foundPair = false; 
            
            for (int i = 0; i < s.length() - 1; i++) {
                
                if ((s.charAt(i) == 'A' && s.charAt(i + 1) == 'B') || 
                    (s.charAt(i) == 'C' && s.charAt(i + 1) == 'D')) {
                    len -= 2;      
                    s = s.substring(0, i) + s.substring(i + 2);  
                    foundPair = true; 
                    break;  
                }
            }
        }
        return len;
    }
    
    public int minLength(String s) {
        int len = s.length();
        return remlen(s, len);
    }
}
