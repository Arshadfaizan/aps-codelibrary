def maxProduct(arr, n):
    minVal = arr[0]
    maxVal = arr[0]
 
    maxProduct = arr[0]
 
    for i in range(1, n, 1):
        if (arr[i] < 0):
            temp = maxVal
            maxVal = minVal
            minVal = temp
        maxVal = max(arr[i], maxVal * arr[i])
        minVal = min(arr[i], minVal * arr[i])
        maxProduct = max(maxProduct, maxVal)
    return maxProduct


arr = [-1, -3, -10, 0, 60]
n = len(arr)
print("Maximum Subarray product is",
                 maxProduct(arr, n))
