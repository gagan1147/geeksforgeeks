

def func(string,l,r):
    if l==r:
        print("".join(string))
    else:
        for i in range(l,r+1):
            string[i],string[l] = string[l],string[i]
            func(string,l+1,r)
            string[i],string[l] = string[l],string[i]


string  = ["A","B","C"]
func(string,0,len(string)-1)