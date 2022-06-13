string getPermutation(int n, int k) {

        vector<int> v;
        for(int i=1; i<=n; i++)
        {
            v.push_back(i);
        }
        int t=1;
        string s;
        do{
            if(t==k)
            {
                for(int i=0; i<n; i++)
                    s=s+to_string(v[i]);
            }
            t++;
        }while(next_permutation(v.begin(), v.end()));
               
        return s;
    }