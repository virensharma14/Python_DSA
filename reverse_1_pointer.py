# using 1 pointers/index approach

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


def main():
    arr=[1,5,6,9,10,10,100]
    i=0
    reverse_arr(arr,i)
    print(arr)



if __name__=="__main__":
    main()