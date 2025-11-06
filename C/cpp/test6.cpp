#include<iostream>
using namespace std;
struct LinkedNode {
    int val;
    LinkedNode* next;
    LinkedNode(int val):val(val),next(nullptr){}
};

void printLinkedList(LinkedNode* head) {
    LinkedNode* cur = head;
    while (cur != nullptr) {
        cout << cur->val << " ";
        cur = cur->next;
    }
    cout << endl;
}

void printLinkedListV(LinkedNode* head) {
    LinkedNode* cur = head;
    int lastA, lastB;
    while (cur != nullptr && cur->next != nullptr) {
        if (cur->val != cur->next->val) cout << cur->val << " ";
        cur = cur->next;
    }
    cout << cur->val;
    cout << endl;
}

int main() {
    int n, m;
    LinkedNode* dummyHead = new LinkedNode(0);
    while (cin >> n) {
        if (n == 0) {
            cout << "list is empty" << endl;
            continue;
        }
        LinkedNode* cur = dummyHead;
        while (n--) {
            cin >> m;
            LinkedNode* newNode = new LinkedNode(m);
            cur->next = newNode;
            cur = cur->next;
        }
        printLinkedList(dummyHead->next);
        printLinkedListV(dummyHead->next);
    }
}