def problem_solver(n, k):
    if k == 0:
        return 1
    else:
        return ((n - k + 1) / k) * problem_solver(n, k - 1)


total = int(input("n= "))

print("{}".format(problem_solver(total, total)))
