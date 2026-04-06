def partition(arr, low, high, step):
    pivot = arr[high]
    i = low - 1
    for j in range(low, high):
        if arr[j] < pivot:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]
    arr[i + 1], arr[high] = arr[high], arr[i + 1]
    
    step[0] += 1
    print(f"Partisi ke-{step[0]} (Pivot: {pivot}):")
    print(arr)
    return i + 1

def quick_sort_helper(arr, low, high, step):
    if low < high:
        pi = partition(arr, low, high, step)
        quick_sort_helper(arr, low, pi - 1, step)
        quick_sort_helper(arr, pi + 1, high, step)

def quick_sort(arr):
    step = [0]
    quick_sort_helper(arr, 0, len(arr) - 1, step)
    return arr

# Data awal
data = [78, 48, 10, 3, 36, 37, 43, 16, 34, 45, 25, 38, 72, 36, 53, 6]

print("=== QUICK SORT ===")
print("Data Awal:", data)
print("-" * 30)

hasil = quick_sort(data.copy())

print("-" * 30)
print("Data Hasil Sorting:", hasil)