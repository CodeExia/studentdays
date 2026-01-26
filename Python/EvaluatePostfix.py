def evaluate_postfix(expr):
    stack = []
    
    for token in expr.split():
        if token.isnumeric() or '.' in token:
            if '.' in token:
                stack.append(float(token))
            else:
                stack.append(int(token))
        else:
            b = stack.pop()
            a = stack.pop()
            # Bunch of ifs for the operators
            if token == '+':
                stack.append(a + b)
            elif token == '-':
                stack.append(a - b)
            elif token == '*':
                stack.append(a * b)
            elif token == '/':
                stack.append(a / b)
    
    return stack[0]

# Input, honestly just copy pasted from previous number
postfix_expr = input("Enter postfix expression: ")
value = evaluate_postfix(postfix_expr)
print("Value of expression:", value)
