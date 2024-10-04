class Solution {
    public boolean isIsomorphic(String s, String t) {
        if (s.length() != t.length()) {
            return false;
        }
        Map<Character, Character> mapSToT = new HashMap<>();
        Map<Character, Character> mapTToS = new HashMap<>();

        for (int i = 0; i < s.length(); i++) {
            char charS = s.charAt(i);
            char charT = t.charAt(i);
            if (mapSToT.containsKey(charS)) {
                if (mapSToT.get(charS) != charT) {
                    return false;
                }
            } else {
                mapSToT.put(charS, charT);
            }
            if (mapTToS.containsKey(charT)) {
                if (mapTToS.get(charT) != charS) {
                    return false;
                }
            } else {
                mapTToS.put(charT, charS);
            }
        }
        return true;
    }
}
