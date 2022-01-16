#include<iostream>
#include <vector>
#include<unordered_map>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == '(')
            {
                st.push('(');
            }
            else if(s[i] == '[')
            {
                st.push('[');
            }
            else if(s[i] == '{')
            {
                st.push('{');
            }
            
            if(s[i] == ')')
            {
                if(st.empty() || st.top() != '(')
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }
            else if(s[i] == '}')
            {
                if(st.empty() || st.top() != '{')
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }
            else if(s[i] == ']') 
            {
                if(st.empty() || st.top() != '[')
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }   
        }
        return st.empty();
    }
};


int main(){

    Solution s;
    string sol = "{}()[]";
    bool result;
	result = s.isValid(sol);
    cout<<result;
}