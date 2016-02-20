def cuttingStr(strin, number):
	return strin[:number + 1]

letters = 'abcdefghijklmnopqrstuvwxyz'
letter = input('ingresa la letra limite\n:').lower()
letters = letters[:letters.find(letter) + 1]
spaceX = list(range(len(letters)))
spaceY = spaceX[:]
indice = len(spaceY) - 1
spaceY.insert(indice, spaceX[indice - 1])
spaceY = spaceY[:-1]
space0 = list(range((2 * indice) - 1, -1, -2))
space0.append(0)
for x, y, o in zip(spaceX, spaceY, space0):
	print(cuttingStr(letters, x) + o * " " + cuttingStr(letters, y)[-1::-1])
