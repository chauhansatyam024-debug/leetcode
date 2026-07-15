//
// Created by satyamchauhan on 15/07/26.
//
// only for sorted linkedlist
// only removeDupli is part of 83 problem
// temp == curr
#include"iostream"
struct ListNode {
    int val;
    ListNode * next;
    ListNode () : val(0) ,next(nullptr) {};
    ListNode(int x): val(x), next(nullptr){};
    ListNode(int x , ListNode * next): val(x) , next(next){};
};
class LinkedList {
public :
    ListNode * head = nullptr;
    ListNode* removeDupli(ListNode *head) {
        ListNode * temp = head;
        while (temp && temp->next) { // this  check if temp != null and temp -> next ! = null
            if (temp -> val == temp -> next -> val) {
                temp -> next = temp-> next -> next;
            }else temp = temp -> next;
        }
    return head;
}
    void insert(int val) {
        ListNode * node = new ListNode(val);
        if (!head) {head = node; return;}
        ListNode * temp = head;
        while (temp -> next) {
            temp = temp -> next;
        }
        temp -> next = node;
    }
    void print() {
        ListNode * temp = head;
        while (temp) {
            std::cout<<temp->val;
            temp = temp ->next;
        }
        std::cout<<std::endl;
    }
    ~LinkedList() {
        ListNode * temp = head;
        while (temp) {
            ListNode * node = temp->next;
            delete temp;
            temp = node;
        }
    }

};
int main() {
    LinkedList lt;
    for (int i = 0 ; i<5 ; i++) {
        int x =0;
        std::cin>>x;
        lt.insert(x);
    }
    lt.print();
    lt.head = lt.removeDupli(lt.head);
    lt.print();

}