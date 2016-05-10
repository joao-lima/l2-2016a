# -*- coding: utf-8 -*-
# Programa: Exercicio com estrutura de repeticao
# Linguagem: Python
# Data: 2016-05-9
#
# Requer matplotlib: http://matplotlib.org/
#
import matplotlib.pyplot as pyplot

# ---------------------------------------------------------------
# Escreva seu programa no espaco a seguir usando WHILE.
# Variaveis necessarias para o outro codigo sao:
# contador - conta o total de idades digitadas
# maior18 - conta quantos sao maior que 18
# menor18 - conta quantos sao menores que 18

contador = 1
maior18 = 0
menor18 = 0

# AQUI: escreva seu codigo abaixo

# ---------------------------------------------------------------
# Nao modifique o codigo abaixo!
if contador > 2:
	# make a square figure and axes
	figure(1, figsize=(6,6))
	menor18 = menor18/float(contador)*100.
	maior18 = maior18/float(contador)*100.
	legenda = ['Menor de 18', 'Maior de 18']
	dados = [menor18, maior18]
	pyplot.pie(dados, labels=legenda)
	pyplot.show()

