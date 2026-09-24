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
    

def main():
    t = int(input())
    for _ in range(t):
        solve()

if __name__ == '__main__':
    main()
