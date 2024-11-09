class Solution:
    def bestClosingTime(self, customers: str) -> int:
        close_time = -1
        min_penalty = 0
        temp = 0
        for i, char in enumerate(customers):
            if char == 'Y':
                temp -= 1
            else:
                temp += 1
            if (temp < min_penalty):
                close_time = i
                min_penalty = temp
        
        return close_time + 1