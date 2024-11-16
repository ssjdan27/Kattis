def find_neighbors(row):
    neighbors = []
    for i in range(len(row)):
        if row[i] == 1:
            neighbors.append(i)

    return neighbors


def find_triangles(matrix, neighbors):
    neighbor_pairs = []
    for i in range(len(neighbors)):
        for j in range(i + 1, len(neighbors)):
            neighbor_pairs.append((neighbors[i], neighbors[j]))

    for pair in neighbor_pairs:
        x = pair[0]
        y = pair[1]
        if matrix[x][y] == 1:
            return True

    return False


while True:
    n = int(input())
    weak_vertices = []
    if n == -1:
        break
    else:
        matrix = [list(map(int, input().split())) for _ in range(n)]
        for i in range(n):
            neighbors = find_neighbors(matrix[i])
            if not find_triangles(matrix, neighbors):
                weak_vertices.append(i)
    for vertex in weak_vertices:
        print(vertex, end=" ")

    print()
