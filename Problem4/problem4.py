def nextInt(arr):
    newArr = sorted(arr, reverse = True)
    if(newArr[0] + 1 >= 1):
        return newArr[0] + 1
    else:
        return 1

array = [3, 4, -1, 1]
ans = nextInt(array)
print("For the array", array, "the next positive integer is", ans, ".")
array = [1, 2, 0]
ans = nextInt(array)
print("For the array", array, "the next positive integer is", ans, ".")
