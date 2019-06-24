class Solution:
    def longestValidParentheses(self, s: str) -> int:
        res, start, stack = 0, 0, []
        for i in range(len(s)):
            if s[i] == '(':
                stack.append(i)
            else:
                if stack == []:
                    start = i + 1
                else:
                    stack.pop()
                    res = max(res, i - start + 1) if stack == [] else max(res, i - stack[-1])
        return res
