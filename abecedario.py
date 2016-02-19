def abcGen(letter, reverse=False):
	c = 0
	letters = ('a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z')
	if reverse:
		letters = letters[-1::-1]
	for x in range(len(letters)):
		if letter == letters[x]:
			c = x
			break
	print(letters[:c + 1])

abcGen('b', True)

input('ingrese a continuacion la letra a la hasta la cual desea generar la piramide\n:')
