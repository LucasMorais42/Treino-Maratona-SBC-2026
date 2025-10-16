H, E, A, O, W, X = map(int,input().split())

heroes = H+E+A+X
villain = O+W

if heroes>villain:
    print("Middle-earth is safe.")
else:
    print("Sauron has returned.")