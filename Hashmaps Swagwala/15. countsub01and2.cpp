Question: https://www.geeksforgeeks.org/problems/equal-0-1-and-23208/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    long long getSubstringWithEqual012(string str) {
        // code here
        
        long long ans = 0;
        
        int z0 = 0;
        int z1 = 0;
        int z2 = 0;
        int count = 0;
        
        unordered_map<string,int> mp;
        
        mp.insert({"0#0",1});
        
        for(int i = 0;i<str.size();i++)
        {
            if(str[i] == '0')
            {
                z0 += 1;
            }
            else if(str[i] == '1')
            {
                z1 += 1;
            }
            else
                z2 += 1;
                
            string key = to_string(z0-z1) + "#" + to_string(z1-z2);
            
            if(mp.find(key) != mp.end())
            {
                count = count + mp[key];
            }
            
            mp[key]++;
        }
        
        return count;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.getSubstringWithEqual012(s)<<endl;
	
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends