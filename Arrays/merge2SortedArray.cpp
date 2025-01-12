https://www.naukri.com/code360/problems/sorted-array_6613259?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse&leftPanelTabValue=SUBMISSION


vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    vector<int> res;

    int n = a.size();
    int m = b.size();

    int i = 0;
    int j = 0;

    int lastElement = -1;

    while(i<n && j<m)
    {
        if(a[i]<=b[j])
        {
          if (a[i] != lastElement) {
            res.push_back(a[i]);
            lastElement = a[i];
          }
          i++;
        }
        else
        {
            if(b[j] != lastElement) {
                res.push_back(b[j]);
                lastElement = b[j];
            }
            j++;
        }
    }

    while(i<n)
    {
        if(a[i]!=lastElement)
        {
            res.push_back(a[i]);
        }
        i++;
    }

    while(j<m)
    {
        if(b[j]!=lastElement)
        {
            res.push_back(b[j]);
        }
        j++;
    }

    return res;

}