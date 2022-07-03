
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode *head)
    {
        vector<vector<int>> ans(m, vector<int>(n));

        int x=0,y=0;
        int k=m-1;
        for( ; k > 0; k -= 2){
            for(int j = 0; j < k; ++j)
                ans[x][y++] = head->val;
                head=head->next;
            for(int j = 0; j < k; ++j)
                ans[x++][y] = head->val;
                head=head->next;
            for(int j = 0; j < k; ++j)
                ans[x][y--] = head->val;
                head=head->next;
            for(int j = 0; j < k; ++j)
                ans[x--][y] = head->val;
                head=head->next;
            ++x;
            ++y;
        }
        return ans;
    }
};