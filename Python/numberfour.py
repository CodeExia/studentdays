expr = input("Enter expression: ").split()
ops = []
vals = []

for token in expr:
    if token == ")":
        v2 = vals.pop()
        op = ops.pop()
        v1 = vals.pop()
        vals.append(f"( {v1} {op} {v2} )")  
        # this just uhh, appends but with format. 
    elif token in "+-*/":
        ops.append(token)
    else:
        vals.append(token)

# finaly just output the result
print("Parenthesized expression:", vals[0])
