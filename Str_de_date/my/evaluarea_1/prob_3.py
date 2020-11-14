# metoda bulelor:
def bubble_sort(list):
    swapped = True
    while swapped:
        swapped = False
        for i in range(len(list) - 1):
            if list[i] > list[i + 1]:
                list[i], list[i + 1] = list[i + 1], list[i]
                swapped = True


# prin inserare:
def insertion_sort(list):
    for i in range(1, len(list)):
        item_to_insert = list[i]
        j = i - 1
        while j >= 0 and list[j] > item_to_insert:
            list[j + 1] = list[j]
            j -= 1
        list[j + 1] = item_to_insert
