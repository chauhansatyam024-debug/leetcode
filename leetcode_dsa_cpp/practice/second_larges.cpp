//
// Created by satyamchauhan on 24/07/26.
//
#include"iostream"
#include"climits"
int main() {
    int arr[] = {1,2,3,1,89,2,3,4,6,54,64,65464,3754,75,6,75,56,4364,3656,46,46,43,643,643,643,6,53,6753,6753,75346243,5353,524,64,64,3,6436,43,643,6,43,643,643,643,6,43,6436,43,643,6,436653,643,643,643,43,64,36,43,643,643,64};
    int second =INT_MIN;
    int n = (sizeof arr/sizeof arr[0]) - 1;
    int largest = INT_MIN;
    for (int i = 0; i<n;i++) {
        if (arr[i] > largest) {
            second = largest ;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > second) {
            second = arr[i];
        }
    }
    std::cout<<second<<std::endl;
    std::cout<<largest<<std::endl;


    return 0;
}