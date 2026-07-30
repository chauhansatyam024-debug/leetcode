//
// Created by satyamchauhan on 30/07/26.
//

#include"iostream"
#include"algorithm"
#include"vector"

int bestDay(std::vector<int> st) {

    int n = st.size();
    int maxx = 0;
    int minn = st[0];

    for (int i = 1; i<n ; i++) {
        maxx = std::max(maxx,st[i] - minn);
        minn = std::min(minn , st[i]);
    }
    return maxx;
}
int main() {
    std::vector<int> supra = {6,23,15,9,6,4,6,7,3};
    std::cout<<bestDay(supra);



    return 0;
}