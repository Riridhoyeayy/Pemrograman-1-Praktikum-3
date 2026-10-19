angka=int(input(""))
for i in range (1, angka+1, 2):
    print(i, end=" ")
print()
awal=angka
if (awal % 2 != 0):
    awal=awal - 1
else:
    awal = angka
for i in range (awal, 1, -2):
    print(i, end=" ")