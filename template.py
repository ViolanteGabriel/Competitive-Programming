#
#    Author: Gabriel Violante
#    CF Handle: SUPER_ZOIAO
#    Federal University of Minas Gerais (UFMG)
#

import sys

# Increase recursion depth for deep recursion (e.g., DFS)
sys.setrecursionlimit(200005)

# Fast I/O
def input(): return sys.stdin.readline().strip('\r\n')

# Useful Constants
INF = float('inf')
MOD = 10**9 + 7

def solve():
    n = int(input())
    a = list(map(int, input().split()))
    
    # Write your solution here
    

class Solution:
    def findDifference(self, nums1: list[int], nums2: list[int]) -> list[list[int]]:
        set1 = set()
        set2 = set()

        for i in nums1:
            set1.add(i)
        for i in nums2:
            set2.add(i)

        answer0 = []
        answer1 = []
        answer0set = set()
        answer1set = set()

        for i in nums1:
            if (i not in set2) and (i not in answer0set):
                answer0.append(i)
                answer0set.add(i)

        for i in nums2:
            if (i not in set1) and (i not in answer1set):
                answer1.append(i)
                answer1set.add(i)
        answer = [answer0, answer1]
        return answer
        
            
            

def main():
    t = int(input())
    for _ in range(t):
        solve() 

if __name__ == '__main__':
    main()
