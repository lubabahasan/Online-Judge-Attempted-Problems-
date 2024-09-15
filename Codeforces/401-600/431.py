calories = input().split()

for i in range(len(calories)):
    calories[i] = int(calories[i])

moves = input()

totalCal = moves.count('1') * calories[0] + moves.count('2') * calories[1] + moves.count('3') * calories[2] + moves.count('4') * calories[3]

print(totalCal)
