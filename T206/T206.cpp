#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		if (head == NULL || head->next == NULL)
			return head;
		ListNode* q = head->next;
		ListNode* pre = head;;
		head->next = nullptr;
		while (q)
		{
			ListNode* t = q;
			q = q->next;
			t->next = pre;
			pre = t;
		}
		return pre;
	}
};

