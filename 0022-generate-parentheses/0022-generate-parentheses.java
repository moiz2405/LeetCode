class Solution {
    public List<String> generateParenthesis(int n) {
    List<String> res = new ArrayList<>();
    paren(0,0,"",n,res);
    return res;    
    }
    private void paren(int open,int close, String s, int n, List<String> res){
   if(open == close  && open + close ==n*2){
    res.add(s);
    return;
   } 
   if(open<n){
    paren(open+1,close,s+"(",n,res);
   }
   if(close<open){
    paren(open,close+1,s+")",n,res);
   }

    }

}