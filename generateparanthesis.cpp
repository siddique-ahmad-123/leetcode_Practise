class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        int close=n;
        int open=n;
        string op="";

        solve(open,close,v,op);

        return v;

    }

    void solve(int open,int close,vector<string> &v,string op){
        if(open==0 && close==0){
        v.push_back(op);
        return;
        }

        if(open!=0){
            string op1=op;
            op1.push_back('(');
            solve(open-1,close,v,op1);

        }

        if(open<close){
            string op2=op;
            op2.push_back(')');
            solve(open,close-1,v,op2);
        }

    return;
    }
};