import sys

for i in range(1, 101):
    mod4 = (i % 4 == 0)
    mod7 = (i % 7 == 0)
    if mod4:
        sys.stdout.write("Bizz")
    if mod7:
        sys.stdout.write("Fuzz")
    if not mod4 and not mod7:
        sys.stdout.write(str(i))
    print("")
