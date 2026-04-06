def selection_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        print(f"Iterasi {i + 1}:")
        min_idx = i
        # Cari nilai terkecil di sisa array yang belum urut
        for j in range(i + 1, n):
            if arr[j] < arr[min_idx]:
                min_idx = j
                
        # Tukar dengan elemen pertama dari bagian yang belum urut
        arr[i], arr[min_idx] = arr[min_idx], arr[i]
        print(arr)
    return arr

# Data awal
data = [78, 48, 10, 3, 36, 37, 43, 16, 34, 45, 25, 38, 72, 36, 53, 6]

print("=== SELECTION SORT ===")
print(f"Jumlah Data: {len(data)}")
print("Data Awal:", data)
print("-" * 30)

hasil = selection_sort(data.copy())

print("-" * 30)
print("Data Hasil Sorting:", hasil)