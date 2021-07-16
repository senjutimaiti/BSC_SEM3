#WAP to input n number of integers and find the maximum and minimum number

i=0
echo "Enter the number of elements"
read n
echo "Enter the elements"
while [ $i -lt $n ]
do
	read -p "a[$i]=" a[$i]
	i=`expr $i + 1`
done
echo "The elements of the array: ${a[@]}"
i=0
max=${a[0]}
min=${a[0]}
for x in "${a[@]}"
do
	if [ $max -lt $x ]
	then
		max=$x
	fi
	if [ $min -gt $x ]
	then
		min=$x
	fi
done
echo "The maximum number $max"
echo "The minimum number $min"
