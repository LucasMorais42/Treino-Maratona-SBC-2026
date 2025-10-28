import sys
import math

for linha in sys.stdin:
    if not linha.strip():
        continue
    
    R1, X1, Y1, R2, X2, Y2 = map(int, linha.strip().split())

    dist = math.sqrt((X1-X2)**2 + (Y1-Y2)**2)

    if dist+R2<=R1:
        print("RICO")
    else:
        print("MORTO")