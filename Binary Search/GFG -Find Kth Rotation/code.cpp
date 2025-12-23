class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int l = 0, r = arr.size()-1;
        while(l <= r){
            int mid = l + (r - l)/2;
            if(mid != 0 && arr[mid] < arr[mid-1]){
                return mid;
            }
            else if(r - l + 1 == 1){
                return 0;
            }
            else if(arr[mid] > arr[r]){
                l = mid+1;
            }
            else{
                r = mid;
            }
        }

        return 1;
    }
};
