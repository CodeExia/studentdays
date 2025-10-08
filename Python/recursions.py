def sum_of_digits(n):
    # Base case: If the number is a single digit, return it
    if n == 0:
        return 0
    else:
        # Recursive case: add the last digit to the sum of the rest
        return n % 10 + sum_of_digits(n // 10)

# Example usage:
num = int(input("Enter an integer: "))
result = sum_of_digits(abs(num))  # Using abs() to handle negative numbers
print("The sum of the digits is:", result)
