#Implement the algorithm to evaluate a postfix expression using stack

def result(value):
    stack = []
    for char in value:
        if char in "123456789":
            stack.append(int(char))
        else:
            op1 = stack.pop()
            op2 = stack.pop()
            
            if char == "*":
                stack.append(op2*op1)
            elif char == "-":
                stack.append(op2-op1)
            elif char == "+":
                stack.append(op2+op1)
                return stack.pop()
value = "32*42-+"
answer = result(value)  
print(f"the result is:{answer}")              
                
