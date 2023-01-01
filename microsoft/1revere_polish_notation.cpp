int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="+"||tokens[i]=="-"|| tokens[i]=="*" || tokens[i]=="/")
            {
                int x = s.top();
                s.pop();
                int y=s.top();
                s.pop();
                int z =0;
                if(tokens[i]=="+")
                z=x+y;
               else if(tokens[i]=="-")
                z=y-x;
                else if(tokens[i]=="*")
                z=x*y;
                else if(tokens[i]=="/")
                z=y/x;

                s.push(z);
            }
            else
            {
                s.push(stoi(tokens[i]));
            }
        }
        return s.top();
    
    }
