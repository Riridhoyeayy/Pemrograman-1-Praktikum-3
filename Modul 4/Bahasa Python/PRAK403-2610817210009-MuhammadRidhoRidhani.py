angkaA, angkaB = map(int, input().split())
total = angkaA+angkaB
if angkaA < angkaB:
    for i in range (angkaA, angkaB +1):
        angka_pasangan= total-i
        print(i, angka_pasangan, end="")
        if i < angkaB:
            print(" - ", end="")
else:
    for i in range (angkaA, angkaB-1, -1):
        angka_pasangan=total-i
        print(i, angka_pasangan, end="")
        if i>angkaB:
            print(" - ", end="")