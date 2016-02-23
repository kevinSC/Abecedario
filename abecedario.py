xaxis = range(int(input('ingrese el numero de caracteres que desea ver horizontalmente:\n')))  # numero de caracteres que se mostraran horizontalmente
yaxis = range(int(input('ingrese el numero de caracteres que desea ver verticalmente:\n')))  # numero de caracteres que se mostrara verticalmente
letters = 'abcdefghijklmnopqrstuvwxyz'
letters = letters[:letters.find(input('ingresa la letra limite:\n').lower()) + 1]  # String que contiene desde la a la letra ingresada
changin = letters  # variable que guarda copia a letters para luego ser modificado
lon = len(letters) - 1  # variable que guarda el numero de subindices de letters
white, rev = 0, False  # white determina el numero de espacios condicionada por rev
for y in yaxis:
	limit = 0
	changin = letters[:white + 1] + (lon - white) * ' '
	for x in xaxis:
		if limit == (lon + 1):
			changin = changin[-1::-1]
			limit = 1
		print(changin[limit], end='')
		limit += 1
	print('')
	if rev:
		white -= 1
	else:
		white += 1
	if white == lon:
		rev = True
	if white == 0:
		rev = False
	changin = letters
