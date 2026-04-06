def insertion_sort(arr):
    n = len(arr)
    # Mulai dari elemen kedua (indeks 1)
    for i in range(1, n):
        key = arr[i]
        j = i - 1
        # Pindahkan elemen yang lebih besar dari key ke kanan
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
        print(f"Iterasi {i}:")
        print(arr)
    return arr

# Data awal
data = [78, 48, 10, 3, 36, 37, 43, 16, 34, 45, 25, 38, 72, 36, 53, 6]

print("=== INSERTION SORT ===")
print("Data Awal:", data)
print("-" * 30)

hasil = insertion_sort(data.copy())

print("-" * 30)
print("Data Hasil Sorting:", hasil)