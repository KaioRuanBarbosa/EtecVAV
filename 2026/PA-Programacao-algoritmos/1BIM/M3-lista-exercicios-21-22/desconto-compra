programa
{
    funcao inicio()
    {
        real valor, desconto, valorFinal

        escreva("Digite o valor da compra: ")
        leia(valor)

        // Verificação das faixas de desconto
        se (valor < 100)
        {
            desconto = 0
        }
        senao se (valor <= 500)
        {
            desconto = valor * 0.10
        }
        senao
        {
            desconto = valor * 0.20
        }

        valorFinal = valor - desconto

        escreva("Valor final com desconto: R$ ", valorFinal, "\n")
    }
}
