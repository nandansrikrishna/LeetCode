class Solution:
    def longestPalindrome(self, s: str) -> int:
        # create a dictionary of character frequencies
        freqs = Counter(s)
        
        # start with a length of 0
        length = 0

        # track if there was a character with an odd frequency
        odd_exists = False

        # iterate over character frequencies
        for freq in freqs.values():
            # if the frequency is even, add it directly to the length
            if freq % 2 == 0:
                length += freq
            else:
                # if the frequency is odd, add the largest even number less than it
                length += freq - 1
                # and mark that there was a character with an odd frequency
                odd_exists = True

        # if there was a character with an odd frequency, add 1 more to the length
        if odd_exists:
            length += 1

        return length