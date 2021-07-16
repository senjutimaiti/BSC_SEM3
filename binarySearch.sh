#To perform bubble sort in an array

read -p "Enter the no. of elements " n
echo "Enter the array elements:"
i=0
while [ $i -lt $n ]
do
	read -p "a[$i]=" a[$i]
	i=`expr $i + 1`
done

sel()
{
	local -n b="$2"
	i=0
	while [ $i -lt `expr $1 - 1` ]
	do
		j=`expr $i + 1`
		min=$i
		while [ $j -lt $1 ]
		do
			if [ ${b[$min]} -gt ${b[$j]} ]
			then
				min=$j
			fi
			j=`expr $j + 1`
		done
		t=${b[$min]}
		b[$min]=${b[$i]}
		b[$i]=$t
		i=`expr $i + 1`
	done
}

sel $n a
echo "The sorted array ${a[@]}"

echo -n "Enter no. to search - "
read x

l=0
h=`expr $n - 1`
k=1

while [ $l -le $h ]
do
	mid=`expr $l + $h`
	mid=`expr $mid / 2`
  	if [ ${a[$mid]} -eq $x ]
   	then
        	echo "$x found at position `expr $mid + 1`"
		k=0
		break
	elif [ ${a[$mid]} -lt $x ]
	then
        	l=`expr $mid + 1`
	else
        	h=`expr $mid - 1`
	fi
done

if [ $k -eq 1 ]
then
    echo "$x not found"
fi
