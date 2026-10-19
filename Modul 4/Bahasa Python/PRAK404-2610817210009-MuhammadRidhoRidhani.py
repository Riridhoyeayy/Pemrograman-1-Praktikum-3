while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    
    pilihan = int(input("Masukkan Pilihan : "))
    
    if pilihan == 5:
        print("Terimakasih, telah menggunakan kalkulator Muhammad Ridho Ridhani!")
        break
    elif pilihan >= 1 and pilihan <= 4:
        nilai1 = float(input("Masukkan nilai pertama: "))
        nilai2 = float(input("Masukkan nilai kedua: "))
        
        if pilihan == 1:
            hasil = nilai1 + nilai2
            print("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f" % (nilai1, nilai2, hasil))
            print()
        elif pilihan == 2:
            hasil = nilai1 - nilai2
            print("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f" % (nilai1, nilai2, hasil))
            print()
        elif pilihan == 3:
            hasil = nilai1 * nilai2
            print("Hasil perkalian antara %.2f dengan %.2f adalah %.2f" % (nilai1, nilai2, hasil))
            print()
        elif pilihan == 4:
            hasil = nilai1 / nilai2
            print("Hasil pembagian antara %.2f dengan %.2f adalah %.2f" % (nilai1, nilai2, hasil))
            print()
    else:
        print("Input anda salah, silahkan coba lagi")
        print()