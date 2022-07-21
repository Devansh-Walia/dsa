// https://leetcode.com/problems/reverse-linked-list-ii/submissions/

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right || !head) return head;
        ListNode *t1=nullptr,*t2=head;
        for(int i=0;i<left-1;i++){
            t1=t2;
            t2=t2->next;
        } 
        int cnt=0;
        ListNode *c=t2,*p=nullptr,*n;
        while(cnt<right-left+1){
            n=c->next;
            c->next=p;
            p=c;
            c=n;
            cnt++;
        }
        if(!t1) head=p;
        else t1->next=p;
        t2->next=c;
        return head;
    }
};

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *dummy= new ListNode(0),*pre = dummy,*curr;
        dummy->next = head;
        
        for(int i=0;i<left-1;i++)
            pre= pre->next;
        
        curr = pre->next;
        
        for(int i=0;i<right-left;i++){
            ListNode *temp = pre->next;
            pre->next = curr->next;
            curr->next = curr->next->next;
            pre->next->next = temp;
        }
        
        return dummy->next;
    }
};

