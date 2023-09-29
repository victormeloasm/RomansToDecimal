def roman_to_decimal(roman):
    roman_numerals = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    decimal, prev = 0, 0

    for r in reversed(roman):
        v = roman_numerals.get(r, 0)
        if v < prev:
            decimal -= v
        else:
            decimal += v
        prev = v

    return decimal

def decimal_to_roman(decimal):
    if not 0 < decimal < 1000001:
        return "Decimal number must be in range 1-1,000,000"

    roman_numerals = [(1000, 'M'), (900, 'CM'), (500, 'D'), (400, 'CD'), (100, 'C'), (90, 'XC'), (50, 'L'), (40, 'XL'),
                      (10, 'X'), (9, 'IX'), (5, 'V'), (4, 'IV'), (1, 'I')]
    roman = ""

    for value, numeral in roman_numerals:
        while decimal >= value:
            roman += numeral
            decimal -= value

    return roman

while True:
    print("Choose an option:")
    print("1. Convert Roman numeral to decimal")
    print("2. Convert decimal number to Roman numeral")
    print("0. Exit")

    choice = input("Option: ")

    if choice == '1':
        roman_input = input("Enter a Roman numeral: ").upper()
        if roman_input == '0':
            print("Zero is not a valid Roman numeral.")
        else:
            decimal_result = roman_to_decimal(roman_input)
            print(f"The decimal value is: {decimal_result}")
    elif choice == '2':
        decimal_input = int(input("Enter a decimal number (1-1,000,000): "))
        roman_result = decimal_to_roman(decimal_input)
        print(f"The corresponding Roman numeral is: {roman_result}")
    elif choice == '0':
        break
    else:
        print("Invalid option. Please choose 1, 2, or 0 to exit.")
