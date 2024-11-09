class Solution:
    def bestClosingTime(self, customers: str) -> int:
        close_time = 0
        min_penalty = 0
        for char in customers:
            if char == 'Y':
                min_penalty += 1
        temp = min_penalty
        for i, char in enumerate(customers):
            if char == 'Y':
                temp -= 1
            else:
                temp += 1
            if (temp < min_penalty):
                close_time = i + 1
                min_penalty = temp
        
        return close_time