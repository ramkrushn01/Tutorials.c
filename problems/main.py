
def algo(arr):
    for i in range(len(arr)):
        for j in range(len(arr)):
            temp = arr[j]
            arr[j] = arr[i]
            arr[i] = temp
            if arr == list("ramkr"):
                print(arr)
                exit()
            else:
                print(arr)

arr = [6,1,0,2,5,8,6,2,2,7,10,6,1,0,2,5,8,6,2,2,7,10]
arr = [6,1,0]
# ramkrushn
arr = list("rakmr")
algo(arr)
