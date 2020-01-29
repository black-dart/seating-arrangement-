
seat = int(input())

seat = seat + 2 * (6 - (seat - 1) % 12) - 1

# determining facing seat
print(seat, end=" ")

# determining seat type
if seat % 6 < 2:
    print("WS\n")  # window seat
elif seat % 6 == 2 or seat % 6 == 5:
    print("MS\n")  # mid seat
else:
    print("AS\n")  # aisel seat
