num1 = int(input("Escolha o primeiro número: "))
num2 = int(input("Escolha o segundo número: "))
if num1 > num2:
    print(f"O número {num1} é o maior. ")
elif num2 > num1:
    print(f"O número {num2} é o maior.")
else:
    print(f"Os números {num1} são iguais.")