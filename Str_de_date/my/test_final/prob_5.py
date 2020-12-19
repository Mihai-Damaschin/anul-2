def insertion_sort(array):
    for i in range(1, len(array)):
        key = array[i]

        j = i - 1
        while j >= 0 and key < array[j]:
            array[j + 1] = array[j]
            j -= 1
        array[j + 1] = key


init_array = [1, 4, 13, 5, 6, 8]
insertion_sort(init_array)
print("Vectorul sortat este:")
for i in range(len(init_array)):
    print("%d" % init_array[i])
