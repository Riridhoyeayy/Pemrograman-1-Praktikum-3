def jumlah_digit(n):
    if n == 0:
        return 0
    else:
        return (n % 10) + jumlah_digit(n // 10)
n = int(input())
print("Jumlah digit dari %d adalah %d" % (n, jumlah_digit(n)))