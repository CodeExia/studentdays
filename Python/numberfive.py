expr = input("Enter expression: ").split()
ops = []
vals = []

# I pretty much just used the code fom numer 4

for token in expr:
    if token == "(":
        continue  # Ignore opening parenthesis
    elif token in "+-*/":
        ops.append(token)
    elif token == ")":
        v2 = vals.pop()
        v1 = vals.pop()
        op = ops.pop()
        # Evaluate the operation
        if op == "+":
            vals.append(v1 + v2)
        elif op == "-":
            vals.append(v1 - v2)
        elif op == "*":
            vals.append(v1 * v2)
        elif op == "/":
            vals.append(v1 / v2)
    else:
        # Finally convert numbers to float or int
        if "." in token:
            vals.append(float(token))
        else:
            vals.append(int(token))

print("Value of expression:", vals[0])
