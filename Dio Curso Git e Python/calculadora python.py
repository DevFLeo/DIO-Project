def add(x, y):
    return x + y

def subtract(x, y):
    return x - y

def multiply(x, y):
    return x * y

def divide(x, y):
    if y == 0:
        return "Erro! Divisão por zero."
    return x / y

def main():
    print("Selecione a operação:")
    print("1. Adição")
    print("2. Subtração")
    print("3. Multiplicação")
    print("4. Divisão")

    escolha = input("Digite a escolha (1/2/3/4): ")

    num1 = float(input("Digite o primeiro número: "))
    num2 = float(input("Digite o segundo número: "))

    if escolha == '1':
        print(f"{num1} + {num2} = {add(num1, num2)}")
    elif escolha == '2':
        print(f"{num1} - {num2} = {subtract(num1, num2)}")
    elif escolha == '3':
        print(f"{num1} * {num2} = {multiply(num1, num2)}")
    elif escolha == '4':
        print(f"{num1} / {num2} = {divide(num1, num2)}")
    else:
        print("Escolha inválida")

if __name__ == "__main__":
    main()