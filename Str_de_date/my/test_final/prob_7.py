def get_sum(val):
    if val == 0 or val == 1:
        return 1
    else:
        return val * get_sum(val - 2)


print("S= {}".format(get_sum(150)))
