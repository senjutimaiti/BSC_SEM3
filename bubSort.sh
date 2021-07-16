#To perform bubble sort in an array

read -p "Enter the no. of elements " n
echo "Enter the array elements:"
i=0
while [ $i -lt $n ]
do
	read -p "a[$i]=" a[$i]
	i=`expr $i + 1`
done
i=0
while [ $i -lt `expr $n - 1` ]
do
	j=0
	f=`expr $n - $i`
	while [ $j -lt `expr $f - 1` ]
	do
		g=`expr $j + 1`
		if [ ${a[$j]} -gt ${a[$g]} ]
		then
			t=${a[$j]}
			a[$j]=${a[$g]}
			a[$g]=$t
		fi
		j=`expr $j + 1`
	done
	i=`expr $i + 1`
done
echo "The sorted array ${a[@]}"

