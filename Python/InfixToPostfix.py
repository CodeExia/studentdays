def precedence(op):
    if op in ('+', '-'):
        return 1
    if op in ('*', '/'):
        return 2
    return 0

# Shunting Yard Algorithm
# Tbh when I fnished i couldnt understand what I just wrote bruh but it works

def infix_to_postfix(expr): # Just used to swap stuff around
    output = []
    stack = []
    
    for token in expr.split():
        if token.isnumeric() or '.' in token:
            output.append(token)
        elif token == '(':
            stack.append(token)
        elif token == ')':
            while stack and stack[-1] != '(':
                output.append(stack.pop())
            stack.pop()  # Reemoivng ')'
        else:  # For operator
            while stack and precedence(stack[-1]) >= precedence(token):
                output.append(stack.pop())
            stack.append(token)
    
    while stack:
        output.append(stack.pop())
    
    return ' '.join(output)

# Input stuff
expr = input("Enter infix expression: ")
postfix = infix_to_postfix(expr)
print("Postfix expression:", postfix)
