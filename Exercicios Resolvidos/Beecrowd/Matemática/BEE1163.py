import math

PI = 3.14159
GRAVIDADE = 9.80665

try:
    while True:
        H = float(input())
        p1, p2 = map(int, input().split())
        comeco = min(p1, p2)
        fim = max(p1, p2)

        N = int(input())
        for _ in range(N):
            angulo, V = map(float, input().split())

            theta = angulo * PI / 180.0
            Vsin = V * math.sin(theta)

            delta = Vsin * Vsin + 2 * GRAVIDADE * H
            tempo = (Vsin + math.sqrt(delta)) / GRAVIDADE

            X = V * math.cos(theta) * tempo

            if comeco <= X <= fim:
                print(f"{X:.5f} -> DUCK")
            else:
                print(f"{X:.5f} -> NUCK")
except EOFError:
    pass
