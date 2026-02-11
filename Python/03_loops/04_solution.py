# def swap(arr,s,e):
#    arr[s],arr[e] = arr[e],arr[s]


# word = input("Enter the word \n").lower()
# char = list(word)
# length = len(word)
# s=0
# e = length-1

# while s < e:
#     swap(char,s,e)
#     s += 1
#     e -= 1


# word = "".join(char)
# print(word)

input_str = "Hello"
reversed_str = ""

for char in input_str:
    reversed_str = char + reversed_str

print(reversed_str)