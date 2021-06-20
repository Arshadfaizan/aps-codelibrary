#Given a number, find the greatest number less than the given a number which is the power of two or find the most significant bit number 
def setBitNumber(n):
	if (n == 0):
		return 0;

	msb = 0;
	n = int(n / 2);

	while (n > 0):
		n = int(n / 2);
		msb += 1;

	return (1 << msb);

n = 0;
print(setBitNumber(n));
	

