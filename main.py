# run using Python 3.x

with open("./input.txt", "r") as input_file:
    data_str = input_file.readlines() # Read input file
    data_num = [int(s.strip()) for s in data_str] # Convert list[str] to list[int]
    squares = [i ** 2 for i in data_num] # square each number in the list

    print(f"The sum is {sum(squares)}")