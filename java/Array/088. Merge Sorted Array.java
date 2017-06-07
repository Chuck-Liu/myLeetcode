public class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int r = m + n - 1;
        int i1 = m - 1, i2 = n - 1;
        while(i1 >= 0 || i2 >= 0) {
            if(i1 < 0 || i2 < 0) {
                if(i1 < 0) {
                    nums1[r] = nums2[i2];
                    r--;
                    i2--;
                }
                else {
                    nums1[r] = nums1[i1];
                    r--;
                    i1--;
                }
                continue;
            }

            if(nums1[i1] > nums2[i2]) {
                nums1[r] = nums1[i1];
                r--;
                i1--;
            }
            else{
                nums1[r] = nums2[i2];
                r--;
                i2--;
            }
        }
    }
}
