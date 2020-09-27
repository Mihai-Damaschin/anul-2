ROMAN_CHARACTERS = {
    "M": 1000,
    "D": 500,
    "C": 100,
    "L": 50,
    "X": 10,
    "V": 5,
    "I": 1,
    " ": 0
}


def to_arabic(roman_number):
    roman_number_len = len(roman_number)
    roman_number += " "
    arabic_number = 0
    # flag, ce raspunde de adaugare sau scadere
    add_status = 0

    for i in range(0, roman_number_len):
        if add_status:
            add_status = 0
            continue
        elif ROMAN_CHARACTERS[roman_number[i]] >= ROMAN_CHARACTERS[roman_number[i+1]]:
            arabic_number += ROMAN_CHARACTERS[roman_number[i]]
        else:
            arabic_number += ROMAN_CHARACTERS[roman_number[i+1]] - ROMAN_CHARACTERS[roman_number[i]]
            add_status = 1

    return arabic_number


def cmmdc(a, b):
    while a != b:
        if a > b:
            a = a - b
        else:
            b = b - a

    return a


print("R= ", end="")
r = input()
print("P= ", end="")
p = input()

print('Cel mai mare divizor comun este {}'.format(cmmdc(to_arabic(r), to_arabic(p))))

print()
