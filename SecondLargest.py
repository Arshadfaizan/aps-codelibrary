def print2largest(arr, arr_size):
    if (arr_size < 2):
        print(" Invalid Input ");
        return
    largest = second = -2454635434;
    for i in range(0, arr_size):
        largest = max(largest, arr[i]);
    for i in range(0, arr_size):
        if (arr[i] != largest):
            second = max(second, arr[i])
 
    if (second == -2454635434):
        print("There is no second " +
              "largest element")
    else:
        print("The second largest " +
              "element is \n", second)
              
arr = list(map(int,input().split()))
n = len(arr)
print2largest(arr, n)
