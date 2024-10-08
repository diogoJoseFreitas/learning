from python.models.calculadora import Calculadora

class iCalculadora():
	def __init__(self):
		print('-='*30)
		print('Inicializando a calculadora...')
		print('-='*30)
		self.calc = Calculadora()
		self.interface()

	def quit(self):
		print('-='*30)
		print('Finalizando a calculadora...')
		print('-='*30)
		return -1
		

	def interface(self):
		values = []
		while True:
			# Implementar as funções 's' para sair
			quests = [
				"Inisra o primeiro número ('s' para sair): ",
				"Inisra o operador ('s' para sair): ",
				"Inisra o último número ('s' para sair): "
			]
			for i, v in enumerate(quests):
				while True:
					inp = input(str(v))
					if inp == 's': return self.quit()
					elif inp in '/*-+':
						break
					else:
						try:
							inp = float(inp)
							break
						except:
							print('Insira um valor condizente com o que pede!')
				values.append(inp)
			print(self.calc.exec(*values))
			print('-='*30)