def merge(arr, left, mid, right):
    n1 = mid - left + 1
    n2 = right - mid
    L = arr[left:mid + 1]
    R = arr[mid + 1:right + 1]

    i = 0; j = 0; k = left
    while i < n1 and j < n2:
        if L[i] <= R[j]:
            arr[k] = L[i]
            i += 1
        else:
            arr[k] = R[j]
            j += 1
        k += 1

    while i < n1:
        arr[k] = L[i]
        i += 1
        k += 1
    while j < n2:
        arr[k] = R[j]
        j += 1
        k += 1

def merge_sort_helper(arr, left, right, step):
    if left < right:
        mid = (left + right) // 2
        merge_sort_helper(arr, left, mid, step)
        merge_sort_helper(arr, mid + 1, right, step)
        merge(arr, left, mid, right)
        step[0] += 1
        print(f"Proses Merge ke-{step[0]}:")
        print(arr)

def merge_sort(arr):
    step = [0] # Menggunakan list agar pass-by-reference
    merge_sort_helper(arr, 0, len(arr) - 1, step)
    return arr

# Data awal
data = [78, 48, 10, 3, 36, 37, 43, 16, 34, 45, 25, 38, 72, 36, 53, 6]

print("=== MERGE SORT ===")
print("Data Awal:", data)
print("-" * 30)

hasil = merge_sort(data.copy())

print("-" * 30)
print("Data Hasil Sorting:", hasil)