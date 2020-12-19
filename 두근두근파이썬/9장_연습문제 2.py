import random
counters=[0,0,0,0,0,0]
for i in range(1000):
    value=random.randint(0,5)
    counters[value]=counters[value]+1
for j in range(6):
    print("주사위가", j+1, "인 경우는", counters[j])


