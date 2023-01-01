string getHint(string secret, string guess) {
        
        unordered_map<char , int> mp;
        for(int i=0;i<secret.length();i++)
        {
            mp[secret[i]]++;
        }
        int count =0;
        for(int i=0;i<guess.length();i++)
        {
            if(mp[guess[i]]!=0)
            {
                count++;
                mp[guess[i]]--;
            }
        }
        int bulls=0;
        int cows=0;
       for(int i=0;i<secret.length();i++)
       {
           if(secret[i]==guess[i])
           bulls++;
           else
           {
cows++;
           }

       }
       return to_string(bulls)+"A"+to_string(count-bulls)+"B";
    }
