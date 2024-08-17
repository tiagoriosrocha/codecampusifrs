#!/usr/bin/python

l = int(input())
v = [
    f"k{'a' * (e.split('k')[0].count('a') * e.split('k')[1].count('a'))}"
    for e in (input() for _ in range(l))
]
print("\n".join(v))
