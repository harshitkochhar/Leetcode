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

private:

int getLength(ListNode* &head)
{
    ListNode *curr=head;

    int cnt=0;

    while(curr!=NULL)
    {
        cnt++;
        curr=curr->next;
    }
    return cnt;

}

public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if(head->next==NULL)
        {
            return NULL;
        }

        ListNode* temp=head;
        ListNode* prev=NULL;

        int len=getLength(head);

        int cnt=1;

        int pos=(len-n+1);

        if(pos==1)
        {
            temp=head;
            head=head->next;
            temp->next=NULL;
            delete(temp);

            return head;
        }

        while(cnt<pos)
        {   prev=temp;
            temp=temp->next;
            cnt++;
        }

        prev->next=temp->next;
        temp->next=NULL;
        delete(temp);

        return head;



        
    }
};
