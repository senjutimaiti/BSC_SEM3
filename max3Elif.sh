#Max among 3 numbers using nested loop

echo -n "Enter a = "
read a
echo -n "Enter b = "
read b
echo -n "Enter c = "
read c

if [ $a -gt $b ]
then 
	if [ $a -gt $c ]
	then
		echo "Max = $a"
	else
		echo "Max = $c"
	fi
else
	if [ $b -gt $c ]
	then
		echo "Max = $b"
	else
		echo "Max = $c"
	fi
fi


