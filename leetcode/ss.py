def fun( s, k):
        stack = [['', 0]]
        for c in s:
            if c == stack[-1][0]:
                stack[-1][1] += 1
                if stack[-1][1] == k:
                    stack.pop()
            else:
                stack.append([c, 1])
        res = ''
        for i in stack:
            for ii in range(i[1]):
                res += i[0]
        return res
str=input()
n=int(input())
print(fun(str,n))