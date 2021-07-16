#Fibonacci series

echo -n "Enter the number of terms "
read n

a=0
b=1
c=0

echo "Fibonacci series : "

i=1
while [ $i -le $n ]
do
	echo "$c "
	a=$b
	b=$c
	c=`expr $a + $b`
	i=`expr $i + 1`
done
