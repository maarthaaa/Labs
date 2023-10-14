key = int(input("Key: "))
b = str(input("Message: "))
encode = [" "] * key

for row in range(key):
    p = row
    while p < len(b):
        encode[row]+=b[p] 
        p+=key
print(encode)


