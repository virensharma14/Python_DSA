# Palindrome
from copy import deepcopy
def swap(x,y):
    temp=x
    x=y
    y=temp
    return x,y

def reverse_arr(arr,i):
    n=len(arr)
    if i>=n/2:
        return 
    arr[i],arr[n-i-1]=swap(arr[i],arr[n-i-1])
    reverse_arr(arr,i+1)

    return arr


def main():
    arr=[1,5,6,6,5,8]
    temp=deepcopy(arr)
    i=0
    reverse_arr(arr,i)

    if arr==temp:
        print("True")
    else:
        print("False")



if __name__=="__main__":
    main()