import random

l1=[]
l2=[] 

# finding palindrome using math operation
for i in range(6):
    c =random.randint(1,1000)
    print(c)
    
    temp=c                      #temporary variable
    rev=0

    # Extracting the last digit of number to define palindrome    
    while(c>0):
        dig=c%10                # % - after  decimal point    0.5 -> 5
        rev=rev*10+dig          
        c=c//10                 # // - before decimal point   0.5 -> 0
    if(temp==rev):
        print("The number is a palindrome!")
        l1.append(temp)
    else:
        print("The number isn't a palindrome!")



print("------")


# converting int to str for [::-1]
for i in range(6):
    c =random.randint(1,1000)
    print(c)   #oko
    c_to_str = int(str(c)[::-1])    
    if c == c_to_str:
        print(" ^ Palindrome ")
        l2.append(c)     
    else:
        print(" ^ Just a number ")

print("---")

print("All palindromes: ",  l1, l2)






