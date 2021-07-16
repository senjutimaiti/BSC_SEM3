#Sum of n natural numbers
echo -n "Enter n = "
read n
c=0
sum=0
while [ $c -le $n ]
do
	s=`expr $s + $c`
	c=`expr $c + 1`
done
echo "Sum = $s"
