class Calculadora():
	def __init__(self):
		print('-='*30)
		print('Inicializando a calculadora...')
		print('-='*30)
		pass
	def exec(self, calculo:str):
		# Este código deve apenas receber os números e operadores e executar as funćoes atribuidas a cada conta
		n1, op, n2 = calculo.strip().split(' ')
		n1 = float(n1)
		n2 = float(n2)

		if op == "+":
			return n1+n2
		elif op == "-":
			return n1-n2
		elif op == "*":
			return n1*n2
		elif op == "/":
			return n1/n2
		else:
			print('Operador ou formato da conta incoerente.')
		return 0
	
if __name__ == '__main__':

	c = Calculadora()

	while True:
		r = str(input('Insira a operação desejada, seguindo o modelo (<número> <operador> <numero>) (-1 para sair): '))
		if r == -1: 
			print('Encerrando Calculadora!')
			break
		else: 
			print(c.exec(r))
		print('-='*30)