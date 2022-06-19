class Solution {
public:
    bool isValid(string s) {
        stack<char> va;
        bool so=true;
        va.push('@');
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                va.push(s[i]);
            }
            else if(s[i]==')' && va.top()=='(')
                va.pop();
            else if(s[i]=='}' && va.top()=='{')
                va.pop();
            else if(s[i]==']' && va.top()=='[')
                va.pop();
             else if(s[i]==')' && va.top()!='(')
             {
                 so=false;
                 va.push(s[i]);
                 break;
             }
            else if(s[i]=='}' && va.top()!='{')
             {
                 so=false;
                va.push(s[i]);
                 break;
             }
            else if(s[i]==']' && va.top()!='[')
             {
                 so=false;
                va.push(s[i]);
                 break;
             }
        }
        
        // if(va.empty())
        //     return true;
        // return va;
        if(so==true && va.top()=='@')
            return true;
        return false;
    }
};