class Solution {
public:

    void merge(vector<int>& arr, int s, int mid, int e) {

        int len1 = mid - s + 1;
        int len2 = e - mid;

        vector<int> first(len1);
        vector<int> second(len2);

        // Copy left half
        for(int i = 0; i < len1; i++) {
            first[i] = arr[s + i];
        }

        // Copy right half
        for(int i = 0; i < len2; i++) {
            second[i] = arr[mid + 1 + i];
        }

        int index1 = 0;
        int index2 = 0;
        int mainIndex = s;

        // Merge two sorted halves
        while(index1 < len1 && index2 < len2) {
            if(first[index1] < second[index2]) {
                arr[mainIndex++] = first[index1++];
            } else {
                arr[mainIndex++] = second[index2++];
            }
        }

        // Remaining elements (left)
        while(index1 < len1) {
            arr[mainIndex++] = first[index1++];
        }

        // Remaining elements (right)
        while(index2 < len2) {
            arr[mainIndex++] = second[index2++];
        }
    }

    void mergeSort(vector<int>& arr, int s, int e) {
        if(s >= e) return;

        int mid = s + (e - s) / 2;

        mergeSort(arr, s, mid);      // left part
        mergeSort(arr, mid + 1, e);  // right part

        merge(arr, s, mid, e);       // merge both sorted halves
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};
