//
// Created by satyamchauhan on 16/07/26.
//
#include"iostream"
struct l1 {
    int val;
    l1 * next;
    l1 () : val(0), next(nullptr){};
    l1(int x) : val(x) , next(nullptr){};
    l1(int x , l1* next): val(x) , next(next){};
};
class l2 {
public:
    l1 *head = nullptr;
    l1* rev(l1* head) {
        l1 * prev = nullptr;
        l1 * curr = head;
        while (curr) {
            l1 * next = curr -> next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    void insert(int val) {
        l1 * node = new l1(val);
        if (!head){head = node ; return;}
        l1 * temp = head;
        while (temp->next) { // we used temp->next instead of temp  coz we hv to stop before null not on null
            temp = temp->next; // this is only to move to last element
        }
        temp->next = node; // here we input the value

    }
    void print() {
        l1 * temp = head;
        while (temp) {
            std::cout<<temp->val<<"->";
            temp = temp ->next;
        }
        std::cout<<std::endl;

    }
    ~l2() {
        l1 * temp = head;
        while (temp) {
            l1 * next = temp->next;
            delete temp;
            temp = next;
        }
    }
};
int main() {
    l2 lt;
    for (int i = 0 ; i<5 ; i++) {
        int x =0;
        std::cin>>x;
        lt.insert(x);
    }
    lt.print();
    lt.head = lt.rev(lt.head);
    lt.print();

}