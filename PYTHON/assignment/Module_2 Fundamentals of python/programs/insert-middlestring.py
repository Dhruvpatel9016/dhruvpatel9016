def insert_string_middle(str, word):
    return str[:2] + word + str[2:]
first = input("Enter First Name = ")
mid = input("Enter Midle Name = ")

print(insert_string_middle((first), (mid))) 