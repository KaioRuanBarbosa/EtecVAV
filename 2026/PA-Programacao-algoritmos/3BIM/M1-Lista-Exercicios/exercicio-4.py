numero = int(input('digite um numero inteiro positivo : '))

if numero > 0:
  contador = 1
  soma = 0

  while contador <= numero:
    if contador % 2 == 0:
      soma += contador
    contador += 1
  print(f'A soma dos números pares de 1 até {numero} é: {soma}')

else:
  print('Por favor, digite um número inteiro positivo.')
