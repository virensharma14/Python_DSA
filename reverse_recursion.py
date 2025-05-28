# using 2 pointers/index approach

def swap(x,y):
    temp=x
    x=y
    y=temp
    return x,y

def reverse_arr(arr,i,r):
    if i>=r:
        return 
    arr[i],arr[r]=swap(arr[i],arr[r])
    reverse_arr(arr,i+1,r-1)


def main():
    arr=[1,5,6,9,10]
    i=0
    r=len(arr)-1
    reverse_arr(arr,i,r)
    print(arr)









if __name__=="__main__":
    main()