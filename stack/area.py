def largestArea(arr,n)->int:
        res = 0
        ps = [0]*n
        ns = [0]*n
        stack = []
        stack.append(0)
        for i in range(n):
            if (len(stack) > 0) and arr[stack[-1]]>=arr[i]:
                stack.pop()
            if len(stack) > 0:
                ps[i] = stack[-1]
            else:
                ps[i] = -1
            stack.append(i)
        
        stack = []
        stack.append(n-1)
        for i in range(n-1,-1,-1):
            if (len(stack) > 0) and arr[stack[-1]]>=arr[i]:
                stack.pop()
            if len(stack) > 0:
                ns[i] = stack[-1]
            else:
                ns[i] = n
            stack.append(i)
        for i in range(n):
            curr = arr[i]
            curr += (i-1-ps[i])*arr[i]
            curr += (ns[i]-i-1)*arr[i]
            res = max(curr,res)
            
        return res
        
    
def maximalRectangle(matrix) -> int:
    
    row = len(matrix)
    col = len(matrix[0])
    for i in range(row):
        for j in range(col):
            matrix[i][j] = int(matrix[i][j])
    res = largestArea(matrix[0],col)
    for i in range(1,row):
        for j in range(col):
            if(matrix[i][j] == 1):
                matrix[i][j] += matrix[i-1][j]
        res = max(res,largestArea(matrix[i],col))
    return res


matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]

print(maximalRectangle(matrix))