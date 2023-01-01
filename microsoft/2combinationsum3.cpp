void find(vector<vector<int>> &v , vector<int> v1 , int k , int n , int i , vector<int> v2) 
{
    if(n==0 && k==0)
    v.push_back(v2);

    if(n==0 && k!=0 || i<0)
    return ;
if(v1[i]<=n)
{
    v2.push_back(v1[i]);
    find(v , v1 , k-1 , n -v1[i], i-1 , v2);
    v2.pop_back();
    }
    if(n!=0)
    find(v , v1 , k , n ,i-1 , v2);


}


    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> v;

        if(n>45 || (n>9 && k==1))
        return v;
       vector<int> v1;
       for(int i=1;i<=9;i++)
       v1.push_back(i);
       vector<int> v2;

       find( v , v1 , k , n , v1.size()-1  , v2);
        
    
return v;
    }
