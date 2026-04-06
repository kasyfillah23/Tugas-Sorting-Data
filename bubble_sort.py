def bubble_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        print(f"Iterasi {i + 1}:")
        swapped = False
        for j in range(n - i - 1):
            if arr[j] > arr[j + 1]:
                # Tukar posisi
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True
        print(arr)
        # Jika tidak ada yang ditukar, berarti data sudah urut
        if not swapped:
            break
    return arr

# Data awal
data = [78, 48, 10, 3, 36, 37, 43, 16, 34, 45, 25, 38, 72, 36, 53, 6]

print("=== BUBBLE SORT ===")
print(f"Jumlah Data: {len(data)}")
print("Data Awal:", data)
print("-" * 30)

hasil = bubble_sort(data.copy())

print("-" * 30)
print("Data Hasil Sorting:", hasil)