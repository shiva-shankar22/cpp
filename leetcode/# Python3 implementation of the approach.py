# Python3 implementation of the approach

from math import sqrt

# Function that returns true
# if n is prime
def isPrime(n) :
	
	if (n == 0 or n == 1) :
		return False
		
	for i in range(2, int(sqrt(n)) + 1) :
		if (n % i == 0):
			return False;

	return True;

def sumAscii(string, n) :

	# To store the sum
	sum = 0;

	# For every character
	for i in range(n) :

		# If current position is prime
		# then add the ASCII value of the
		# character at the current position
		if (isPrime(i + 1)) :
			sum += ord(string[i]);

	return sum(sum);


# Driver code
if __name__ == "__main__" :

	string = "geeksforgeeks";
	n = len(string);

	print(sumAscii(string, n));

# This code is contributed by AnkitRai01
