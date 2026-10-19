def hanoi(n):
    if n == 1:
        return 1
    else:
        return 2 * hanoi(n - 1) + 1
n = int(input())
print("Jumlah langkah minimum untuk %d cakram adalah %d" % (n, hanoi(n)))