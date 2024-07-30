class Calculadora():
	def __init__(self):
		pass

	def exec(self, v1, op, v2):
		if op == '*':
			return v1 * v2
		elif op == '/':
			return v1 / v2
		elif op == '+':
			return v1 + v2
		elif op == '-':
			return v1 - v2
		else:
			return 'Erro: Operador Inválido!'