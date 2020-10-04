MY_ARRAY = []


def is_number(s):
    try:
        int(s)
        return True
    except ValueError:
        return False


print('Introducei un sir de numere')
entered_number = input()

while is_number(entered_number):
    MY_ARRAY.append(entered_number)
    entered_number = input()

print('Tripletele crescatoare sunt: ')
for i in range(len(MY_ARRAY)-2):
    if MY_ARRAY[i] < MY_ARRAY[i+1] < MY_ARRAY[i+2]:
        print('{} {} {}'.format(MY_ARRAY[i], MY_ARRAY[i+1], MY_ARRAY[i+2]))

print('Tripletele nici crescatoare, nici descrescatoare sunt: ')
for i in range(len(MY_ARRAY)-2):
    if not (MY_ARRAY[i] < MY_ARRAY[i+1] < MY_ARRAY[i+2]) and \
            not (MY_ARRAY[i] > MY_ARRAY[i+1] > MY_ARRAY[i+2]):
        print('{} {} {}'.format(MY_ARRAY[i], MY_ARRAY[i+1], MY_ARRAY[i+2]))
