class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
            int n = neededTime.size();
    int sum =0;
    for(int i = 0;i<n-1;i++)
    {
        if(colors[i] == colors[i+1]  )
        {
            if(neededTime[i+1]>neededTime[i])
            {
              sum+=neededTime[i];
            }
            else
            {
                sum+=neededTime[i+1];
                //swap to take forward the greateer time , after we accounted the smaller one
                int temp  = neededTime[i+1];
                neededTime[i+1] = neededTime[i];
                neededTime[i] = temp;
            }

        }
       
    }
    return sum;
    }
};
