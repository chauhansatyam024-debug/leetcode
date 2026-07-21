//
// Created by satyamchauhan on 21/07/26.
//
#include "iostream"

int bin2(int target) {
    int arr[] = {1,2,3,4,5,6,7,8,9,11,24};
    int low = 0;
    int high = (sizeof arr/sizeof arr[0]) - 1;
    while (low <= high) {
        int mid = (low + high ) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] > target) high = mid -1;
        else low= mid + 1;
    }
    return -1 ; // we can use low for return coz of returning the index in which target would be added in arr
 }