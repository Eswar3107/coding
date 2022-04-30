##  Python Quick Tips

## Get quotient and remainder with a single operation

## divmod()

dividend = 53
divisor = 10

quotient, remainder = divmod(dividend, divisor)
print('Quotient:', quotient)
print('Remainder:', remainder)



## Insert to a sorted list

## bisect module

import bisect

sorted_list = [1,3,10]
new_elem = 5
bisect.insort(sorted_list, new_elem)

sorted_list

## Check if a given year is leap year or not

## calendar module

import calendar

calendar.isleap(2003)

## Get unique elements (remove duplicate elements) of a list

big_list = [1,2,1,1,2,5]
unique_list = list(set(big_list))

unique_list

## Reverse a list

a_list = [1,2,3]
rev_list = a_list[::-1]

rev_list

## Get elements from odd (or even) indices

pairs = ['John', 'Maria', 'Tom', 'Mary', 'Charles', 'Rose']
wifes = pairs[1::2] # odd indices - start from 1 and take step size of 2
husbands = pairs[0::2] # even indices - start from 0 and step size of 2

print('wifes:', wifes)
print('husbands:', husbands)

## Convert decimal to binary, octal or hexadecimal and back.

## int(), bin(), oct(), hex()

decimal = 13

binary = bin(decimal) # 0b will be present infront of the actual value
octal = oct(decimal) # 0o will be present infront of the actual value
hexa_decimal = hex(decimal) # 0x will be present infront of the actual value


print('Decimal:', decimal)
print('Binary:', binary)
print('Octal:', octal)
print('Hexa decimal', hexa_decimal)

# convert back to decimal - use int() - and pass the base appropriately
int(binary, base=2) == int(octal, base=8) == int(hexa_decimal, base=16) == decimal

## Get all permutations of a list

## itertools.permutations()

import itertools
a_list = [1,4,2]

for perm in itertools.permutations(a_list):
  print(perm)
