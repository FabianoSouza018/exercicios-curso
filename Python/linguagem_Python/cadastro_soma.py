class cadastro_escolar:
    matricula = 0
    nome = ""
    curso = ""


def main():

    cadastro = cadastro_escolar()
    resposta = ""
    quantidade_alunos = 0

    while True:

        print("Digite a Matricula.: ")
        cadastro.matricula = int(input())

        print("Digite o nome do aluno.: ")
        cadastro.nome = input()

        print("Deseja cadastrar um curso? (S/N): ")
        resposta = input()

        if resposta == "S" or resposta == "s":

            print("Digite o curso do aluno: ")
            cadastro.curso = input()

        else:

            cadastro.curso = "Não Informado"

        quantidade_alunos = quantidade_alunos + 1

        resposta = input("\nDeseja cadastrar outro aluno? (S/N): ")

        if resposta == "N" or resposta == "n":
            break

    print("\n=== RESUMO ===")
    print("Quantidade de alunos cadastrados:", quantidade_alunos)
    print("\n=== FINAL DO RESUMO ===")


main()