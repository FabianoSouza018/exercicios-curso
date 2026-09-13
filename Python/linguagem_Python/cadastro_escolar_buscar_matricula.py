class cadastro_escolar:
    matricula = 0
    nome = ""
    curso = ""


def main():

    cadastros = []
    quantidade_alunos = 0

    while True:

        cadastro = cadastro_escolar()

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

        cadastros.append(cadastro)
        quantidade_alunos = quantidade_alunos + 1

        resposta = input("\nDeseja cadastrar outro aluno? (S/N): ")

        if resposta == "N" or resposta == "n":
            break


    print("\n=== ALUNOS CADASTRADOS ===\n")

    for cadastro in cadastros:

        print("Matricula:", cadastro.matricula)
        print("Nome:", cadastro.nome)
        print("Curso:", cadastro.curso)
        print("-------------------------")


    print("\nQuantidade de alunos cadastrados:", quantidade_alunos)


    matricula_pesquisa = int(input("\nDigite a matrícula que deseja pesquisar: "))

    encontrado = False

    for cadastro in cadastros:

        if cadastro.matricula == matricula_pesquisa:

            print("\n=== ALUNO ENCONTRADO ===")

            print("Matricula:", cadastro.matricula)
            print("Nome:", cadastro.nome)
            print("Curso:", cadastro.curso)

            encontrado = True

            break


    if encontrado == False:

        print("\nAluno não encontrado.")


    print("\n=== FINAL DO RESUMO ===")


main()