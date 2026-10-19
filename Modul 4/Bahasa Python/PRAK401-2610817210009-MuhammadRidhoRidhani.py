kelipatan, simbol=input("").split()
kelipatan=int(kelipatan)
for i in range (1,50+1):
    if(i % kelipatan==0):
        print(simbol, end=" ")
    else:
        print(i, end=" ")