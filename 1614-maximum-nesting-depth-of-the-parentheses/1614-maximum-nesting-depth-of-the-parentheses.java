class Solution {
    public int maxDepth(String s) {
        Stack<Character>st=new Stack<>();
        int maxlen=0;
        for(char c:s.toCharArray()){
            if(c=='('){
                st.push(c);
            }
            else if(c==')'){
                st.pop();
            }
            maxlen=Math.max(maxlen,st.size());
        }
        return maxlen;
    }
}