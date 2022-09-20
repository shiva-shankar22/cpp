def minValueExpression(input1,input2):
    n=input1
    ar=input2
    ds=str(ar[0])
    s=[]
    m=M()
    m.solve1(m,ar,s,1,n,ds)
    ans=100000000
    for i in s:
        val= eval(i)
        if val<ans and val>0:
            ans=val
    return ans


class M:
    def solve1(self,ar,s,idx,n,ds : str):
        if idx>=n:
            s.append(ds)
            return
        self.solve1(ar,s,idx+1,n,ds+'-'+str(ar[idx]))
        self.solve1(ar,s,idx+1,n,ds+'+'+str(ar[idx]))



print(minValueExpression(4,[51,35,11,12]))