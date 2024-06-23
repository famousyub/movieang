

print(" Instruction <range> ".center(40, '-'), "\n")
print(range(5))
print(range(3, 10))
print(range(0, 10, 2))
print("\n"+" <range> dans un <for> ".center(40, '-'), "\n")
for i in range(0, 15, 3):
    print(i, end=" ")
    print()


for i in range(1, 11):
    if i == 5:
        break
    print(i, end=" ")
    print()


from easygui import integerbox, msgbox
# programme principal -----------------------------------------------
## Boucle for-else
uneSequence = [2, 5, 9, 7, 11]
cible = integerbox("Entrez un entier :","")
for i in uneSequence:
    if i == cible:
        sauve = i
        break
    else:
        msgbox("L'element cherche n'est pas dans la sequence.")
        sauve = None
        msgbox("Boucle for-else. On obtient : sauve = {}".format(sauve))
## Boucle while-else
        y = integerbox("Entrez un entier positif :", "", 5, 1)
        x = y // 2
        while x > 1:
            if y % x == 0:
                msgbox("{:d} a pour facteur {:d}".format(y, x))
                break
                x = x - 1
            else:
                msgbox("{:d} est premier".format(y))