class Solution {
public:
    int minRange(int a, int b, int c) {
        int arr[3]={a,b,c};
        sort(arr,arr+3);
        if(arr[2]>arr[0]+arr[1]){
            return arr[1];
        }
        return arr[2]-arr[0];
    }
};