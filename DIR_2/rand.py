def print_diamond(rows):
    for i in range(1, rows + 1):
        print(" " * (rows - i), end="")
        print("* " * i)
    
    for i in range(rows - 1, 0, -1):
        print(" " * (rows - i), end="")
        print("* " * i)

# Example usage with 5 rows
print_diamond(6)
