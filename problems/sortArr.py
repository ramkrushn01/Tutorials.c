def sortMe(arr):
    for i in range(len(arr)-1):
        if(arr[i] > arr[i+1]):
            temp = arr[i+1]
            arr[i+1] = arr[i]
            arr[i] = temp

arr = [10, 8, 9, 7, 2, 1, 10, 3, 4, 5, 6, 10, 5, 8, 80, 20, 10, 40, 85, 60, 52]
print("length of arr is ",len(arr))

sortMe(arr)

print(arr)
list.sort(arr)
print(arr)
