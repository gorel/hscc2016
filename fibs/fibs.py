import sys

for i in range(1, 101):
    mod2 = (i % 2 == 0)
    mod5 = (i % 5 == 0)
    mod9 = (i % 9 == 0)
    if mod2:
        sys.stdout.write("Fibs")
    if mod5:
        sys.stdout.write("Jubs")
    if mod9:
        sys.stdout.write("Magoo")
    if not mod2 and not mod5 and not mod9:
        sys.stdout.write(str(i))
    print("")
