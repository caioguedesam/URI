'''
URI 1140 - Tautograma
Esse problema eu decidi fazer em python pois no momento
estou aprendendo e achei que seria bem mais fácil, dado
meu conhecimento atual de C++.
E em python é bem fácil. E isso porque eu devo ter colocado
coisas atoa aqui.
A solução verificar o primeiro caracter da string recebida,
e compará-lo sempre que haver uma palavra nova na string,
detectada com um ' '.
Talvez algum dia eu faça isso em menos linhas.
'''

string = input()
while string != '*':
	check = 1
	string = string.lower()
	first = string[0]
	for i in range(len(string)):
		if string[i] == ' ' and string[i+1] != first:
			check = 0
			break
	
	if check == 1:
		print('Y')
	else:
		print('N')
	string = input()