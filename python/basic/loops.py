# no1 = int(input("enter a no1= "))
# no2 = int(input("enter a n02= "))
# for i in range(no1,no2):
#     print(i,end=" ")


# fact = 1
# no1 = int(input("enter a no1= "))
# for i in range(1,no1+1):
#     fact = fact * i
    
#     print(fact)
  


# no1 = 0
# no2 = 1
# for i in range(10):
#     print(no1, end=" ")
#     next = no1+no2
#     no1 = no2
#     no2 = next

# no1 = int(input("Enter a number: "))
# sumdigits = 0
# while no1 > 0:
#     digit = no1 % 10
#     sumdigits += digit
#     no1 = no1 // 10
# print("Sum of digits:", sumdigits)


# armstrong = 0
# num = int(input("Enter a Number :"))
# temp = num
# while temp >0:
#     digit = temp %10
#     armstrong = armstrong + (digit ** 3)
#     temp = temp // 10
# if armstrong == num:
#     print(num, " Armstrong number")
# else:
#     print(num, "not Armstrong number")


no1=  int(input("Enter a Number :"))
no2 = int(input("Enter a Number :"))
if(no1 > no2):
    max = no1
else:
    max = no2
while True: 
    if(max%no1 == 0 and max%no2 == 0):
        print("LCm is",max)
        break
    max = max+1




