#!/usr/bin/python

# Exercícicio HameKameKa -> Solução otimizada
# Link: https://judge.beecrowd.com/pt/problems/view/2591
# Tiago Rios da Rocha
# 17 de Agosto de 2024

l = int(input())
v = [
    f"k{'a' * (e.split('k')[0].count('a') * e.split('k')[1].count('a'))}"
    for e in (input() for _ in range(l))
]
print("\n".join(v))
