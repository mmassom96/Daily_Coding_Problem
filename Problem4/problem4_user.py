def nextInt(arr):
    newArr = sorted(arr, reverse = True)
    if(newArr[0] + 1 >= 1):
        return newArr[0] + 1
    else:
        return 1

array = []
arraySize = int(input('Define the size of your array: '))
for i in range(arraySize):
    tmp = int(input('Input integer for index ' + str(i) + ' in your array: '))
    array.append(tmp)
ans = nextInt(array)
print("For the array", array, "the next positive integer is", ans, ".")