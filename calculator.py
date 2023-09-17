print(f'''
    Calculator
    Enter numbers and choose math operation
      ''')

a = int(input("First number "))
b = int(input("Second number "))


while True:
    choice = input("Add/Minus/Divide/Multiply/Exit ")
    if choice == "Add":
        c= a+b
        print(c)
    elif choice == "Minus":
        c= a-b
        print(c)   
    elif choice == "Divide":
        if b ==0:
            print("Error")
        else:
            c= a/b
            print(c)
    elif choice == "Multiply":
        c= a*b
        print(c)

    elif choice == "Exit":   # exiticting only after entering numbers
        break
    else:
        print("Operation not found")


    a = int(input("First number "))
    b = int(input("Second number "))



