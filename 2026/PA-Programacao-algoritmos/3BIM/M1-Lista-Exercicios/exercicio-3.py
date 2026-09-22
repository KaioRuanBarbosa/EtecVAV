contador = 1
numero = int(input("Digite um número inteiro positivo: "))
if numero > 0:
    while contador <= numero:
        print(contador)
        contador += 1
else:
    print("Por favor, digite um número inteiro positivo.")
