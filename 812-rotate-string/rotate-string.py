class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        return len(s) == len(goal) and ((goal+goal).find(s) != -1)