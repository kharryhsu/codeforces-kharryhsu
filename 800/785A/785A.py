n = int(input())

polyhedrons = {
    "Tetrahedron": 4,
    "Cube": 6,
    "Octahedron": 8,
    "Dodecahedron": 12,
    "Icosahedron": 20,
}

count = 0

for i in range(n):
    count += polyhedrons[input()]
    
print(count)