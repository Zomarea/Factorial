def factorial(x):
    if(x == 1):
        return x
    else:
        return x * factorial(x - 1)
print("Work out the factorial of... \n")
n = input()
r = factorial(int(n))
print("The factorial of " + str(n) + " is " + str(r))
