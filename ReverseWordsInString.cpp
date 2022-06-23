class Solution {
public:
    string reverseWords(string s) {
        int count=0;
        string ans;
        int i=0;
        while(s[i]==' ')
            i++;
        int j=s.length()-1;
        while(s[j]==' ')
            --j;
        for(int k=i;k<=j;++k){
            if(s[k]!=' '){
              ans+=s[k];
                count=0;
            }
            else if(s[k]==' ' && count==0){
                ans+=s[k];
                count=1;
            }
            else 
                count++;
        }
        reverse(ans.begin(),ans.end());
        count=0;
        string res;
        stack<char> st;
        for(int k=0;k<ans.length();k++){
            if(ans[k]!=' ')
                st.push(ans[k]);
            else{
                while(!st.empty()){
                    res+=st.top();
                    st.pop();
                }
                res+=' ';
            }
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        return res;
    }
};