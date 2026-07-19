//
// Created by satyamchauhan on 19/07/26.
//
#include<iostream>
#include<vector>
#include<string>

int bina(int target) {

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int low = 0;
    int high = (sizeof(arr)/ sizeof(arr[0]) ) -1 ;
    while (true) {
        int mid = (low + high ) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] > target) {
            high--;
        }
        else low++;
    }

    return -1;
}
int main() {
    std::cout<<bina(9);



    return 0;
}