import time
import random
import matplotlib.pyplot as plt

def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]

def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key

def selection_sort(arr):
    for i in range(len(arr)):
        min_idx = i
        for j in range(i+1, len(arr)):
            if arr[j] < arr[min_idx]:
                min_idx = j
        arr[i], arr[min_idx] = arr[min_idx], arr[i]

def merge_sort(arr):
    if len(arr) > 1:
        mid = len(arr) // 2
        L = arr[:mid]
        R = arr[mid:]
        merge_sort(L)
        merge_sort(R)
        i = j = k = 0
        while i < len(L) and j < len(R):
            if L[i] < R[j]:
                arr[k] = L[i]
                i += 1
            else:
                arr[k] = R[j]
                j += 1
            k += 1
        while i < len(L):
            arr[k] = L[i]
            i += 1
            k += 1
        while j < len(R):
            arr[k] = R[j]
            j += 1
            k += 1

sizes = [100, 1000, 5000, 10000, 20000] # Tăng kích thước n
bubble_times = []
insertion_times = []
selection_times = []
merge_times = []

for n in sizes:
    arr = [random.randint(0, 1000) for _ in range(n)]
    arr_copy = arr[:]
    start_time = time.time()
    bubble_sort(arr_copy)
    bubble_times.append(time.time() - start_time)

    arr_copy = arr[:]
    start_time = time.time()
    insertion_sort(arr_copy)
    insertion_times.append(time.time() - start_time)

    arr_copy = arr[:]
    start_time = time.time()
    selection_sort(arr_copy)
    selection_times.append(time.time() - start_time)

    arr_copy = arr[:]
    start_time = time.time()
    merge_sort(arr_copy)
    merge_times.append(time.time() - start_time)

plt.plot(sizes, bubble_times, label='Bubble Sort')
plt.plot(sizes, insertion_times, label='Insertion Sort')
plt.plot(sizes, selection_times, label='Selection Sort')
plt.plot(sizes, merge_times, label='Merge Sort')
plt.xlabel('Kích thước đầu vào (n)')
plt.ylabel('Thời gian thực thi (giây)')
plt.title('So sánh thời gian thực thi của các thuật toán sắp xếp')
plt.legend()
plt.show()
