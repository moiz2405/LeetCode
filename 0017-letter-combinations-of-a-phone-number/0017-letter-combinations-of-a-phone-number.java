import java.util.*;

class Solution {
    public List<String> letterCombinations(String digits) {
        HashMap<Character, String> map = new HashMap<>();
        map.put('2', "abc");
        map.put('3', "def");
        map.put('4', "ghi");
        map.put('5', "jkl");
        map.put('6', "mno");
        map.put('7', "pqrs");
        map.put('8', "tuv");
        map.put('9', "wxyz");
        if (digits.length() == 0) {
            return new ArrayList<>();
        }
        List<String> results = new ArrayList<>();
        results.add(""); 
        for (int i = 0; i < digits.length(); i++) {
            char digit = digits.charAt(i);
            String letters = map.get(digit);
            List<String> newResults = new ArrayList<>();

          
            for (String combination : results) {
                for (char letter : letters.toCharArray()) {
                    newResults.add(combination + letter);
                }
            }
            results = newResults;
        }

        return results;
    }
}
