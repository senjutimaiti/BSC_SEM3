#Sum of series S = 1 + (1 + 2) + ... + (1 + 2 + 3 + ... + n)

echo -n "Enter n = "
read n
s=0
i=1
while [ $i -le $n ]
do
	j=1
	while [ $j -le $i ]
	do
		s=`expr $s + $j`
		j=`expr $j + 1`
	done
	i=`expr $i + 1`
done
echo "Sum = $s" 
