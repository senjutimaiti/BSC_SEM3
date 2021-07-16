#To check whether a number is prime or not

echo -n "Enter the no. "
read n

f=0
i=1
while [ $i -le $n ]
do
	if [ `expr $n % $i` -eq 0 ]
	then
		f=`expr $f + 1`
	fi
	i=`expr $i + 1`
done
if [ $f -eq 2 ]
then
	echo "$n is a prime number"
else
	echo "$n is not a prime number"
fi
