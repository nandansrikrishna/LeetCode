class Solution:
    def minRemoveToMakeValid(self, s: str) -> str:
        num_open = num_closed = 0
        temp = []

        for char in s:
            if char == '(':
                num_open += 1
            if char == ')':
                if num_closed >= num_open:
                    continue
                num_closed += 1
            temp.append(char)

        num_open = num_closed = 0
        cleaned = []

        for char in reversed(temp):
            if char == '(':
                if num_open >= num_closed:
                    continue
                num_open += 1
            if char == ')':
                num_closed += 1 
            cleaned.append(char)
        
        return "".join(reversed(cleaned))