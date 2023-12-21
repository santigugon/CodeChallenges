/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ptr1=l1;
        ListNode* ptr2=l2;
        int res=ptr1->val+ptr2->val;
        ptr1=ptr1->next;
        ptr2=ptr2->next;
        int carry=0;
        if(res>=10){
            res-=10;
            carry=1;
        }
        ListNode* head= new ListNode(res);
        ListNode* currNode=head;
        res=0;
        while(ptr1!=nullptr||ptr2!=nullptr){

            if(ptr1!=nullptr){
                res+=ptr1->val;
                ptr1=ptr1->next;
            }
            if(ptr2!=nullptr){
                res+=ptr2->val;
                ptr2=ptr2->next;
            }
            res+=carry;
            carry=0;
            if(res>=10){
                res-=10;
                carry=1;
            }
            ListNode* newNode=new ListNode(res);
            currNode->next=newNode;
            currNode=newNode;

            res=0;

        }
        if(carry==1){
            ListNode* newNode=new ListNode(carry);
            currNode->next=newNode;
            currNode=newNode;
        }

        return head;

    };
};