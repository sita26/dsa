check=["+","-","*","/"]
stack=[]
def postfix(stack,exp):
    for i in exp:
    if i !=" ":
        if i not in check:
        stack.append(i)
        else:
        op1=int(stack.pop())
        op2=int(stack.pop())
        if i=="*":
            result=op2*op1
            stack.append(result)
        if i=="+":
        result=op2+op1
        stack.append(result)
        if i=="-":
        result = op2-op1
        stack.append(result)
        if i=="/":
        result=op2/op1
        stack.append(result)  
    print(stack)
Input=input("Enter the postfix expression")
exp=Input.split()
postfix(stack.reverse,exp)
