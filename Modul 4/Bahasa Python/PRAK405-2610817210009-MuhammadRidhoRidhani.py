angka1, angka2 = map(int, input().split())
total = 0
for i in range(1, angka1 + 1):
    baris_total = 0
    for j in range(i, 0, -1):
        nilai = j * angka2
        baris_total += nilai
        print("(%d * %d)" % (j, angka2), end="")
        if j > 1:
            print(" + ", end="")
        else:
            print(" = %d" % baris_total)
    total += baris_total
print(total)