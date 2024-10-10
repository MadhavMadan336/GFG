class Solution {
  public:
    vector<int> leaders(int n, int arr[]) {
        // Code here
        vector<int>vis;
        
        vis.push_back(arr[n-1]);
        int max = arr[n-1];
        
        for(int i = n-2;i>=0;i--){
            if(arr[i]>=max){
                vis.push_back(arr[i]);
                max = arr[i];
            }
        }
        
        reverse(vis.begin(),vis.end());
        return vis;
    }
};
