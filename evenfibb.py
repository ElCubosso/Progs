
sum = 0
a=1
b=1
n=1
while b<= 4000000:
	n=b
	b=b+a
	a=n
	if b%2==0:
		sum = sum+b
print(sum)



