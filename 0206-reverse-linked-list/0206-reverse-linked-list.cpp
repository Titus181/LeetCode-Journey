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
    ListNode* reverseList(ListNode* head) {
        // 1. çµæ­¢æ¢ä»¶ï¼å¦æéçµè¡¨çºç©ºæåªæä¸åç¯é»ï¼ç´æ¥åå³
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        // 2. éè¿´ï¼åèçå¾é¢çéçµè¡¨ï¼newHead ææ¯ä¸ç´å³åä¾çãåæ«ç«¯ç¯é»ã
        ListNode* newHead = reverseList(head->next);

        // 3. åè½ï¼è®ä¸ä¸åç¯é»ç next æåèªå·±
        // åè¨­åæ¬æ¯ 1 -> 2ï¼ç¾å¨è®æ 1 <-> 2
        head->next->next = head;

        // 4. æ·éï¼è®èªå·±ç next æåç©ºï¼é¿åç¡éå¾ªç°
        // ç¾å¨è®æ 1 <- 2
        head->next = nullptr;

        return newHead;
    }
};