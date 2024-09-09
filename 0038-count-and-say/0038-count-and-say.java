class Solution {
    public String countAndSay(int n) {
        String result ="1";
        for(int i=2;i<=n;i++)
        {  result = generateNextTerm(result);   }
        return result;}
private String generateNextTerm(String currentTerm) {
    StringBuilder nextTerm = new StringBuilder();
    int count = 1;
    for (int i = 1; i < currentTerm.length(); i++) {
        if (currentTerm.charAt(i) == currentTerm.charAt(i - 1)) {
            count++;
        } else {
            nextTerm.append(count).append(currentTerm.charAt(i - 1));
            count = 1; 
        }
    }
    nextTerm.append(count).append(currentTerm.charAt(currentTerm.length() - 1));
    return nextTerm.toString();
}
}