//
// Created by satyamchauhan on 14/07/26.
//
#include"iostream"
struct ListNode {
    int val;
    ListNode * next;
    ListNode() : val(0) ,next(nullptr) {};
    ListNode(int x): val(x) , next(nullptr) {};
    ListNode(int x , ListNode * next) : val(x) , next(next) {} ;
};
class remvElement {
public :
    ListNode * head = nullptr;

    ListNode* removeElement(ListNode * head , int val) {
        while (head && head -> val == val) {
            head = head -> next;
        }
        ListNode * temp = head;
        while (temp && temp -> next) {
            if (temp -> next-> val == val) {
                temp -> next = temp -> next -> next ;
            }
            else temp = temp-> next;
        }
        return head ;
    }

    void insert(int val) {
        ListNode* newNode = new ListNode(val);
        if (!head) { head = newNode; return; }
        ListNode* temp = head;   // temp pointing to first value
        while (temp->next) {
            temp = temp->next;   // this loop is for taking temp to last value
        }
        temp->next = newNode;
    }

    void print() {
        ListNode * temp = head;
        while (temp) {
            std::cout<<temp->val<<"->";
            temp = temp->next;
        }
        std::cout<<std::endl;
    }
    ~remvElement() {
        ListNode * temp = head;
        while (temp) {
            ListNode * newNode = temp -> next;
            delete temp;
            temp = newNode;
        }

    }
};

int main() {
    remvElement re;
    re.insert(23);
    re.insert(23);
    re.insert(5);
    re.insert(8);
    re.print();
    re.head = re.removeElement(re.head,23);
    re.print();
}