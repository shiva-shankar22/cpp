def teraform(cls,input1,input2,input3):
    cnt=0
    for i in range(input1-1):
        if input2[i]!=input2[i]:
            input2[i]=input2[i]-1
            input2[i+1]=input2[i+1]-1
            cnt+=1
    
    b=0
    for i in range(input1):
        if input2[i]==input3[i] and input2[i]>0:
            b=1
        else:
            break
    if b==1:
        return cnt
    else:
        return -1
        
