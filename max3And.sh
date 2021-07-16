#Find the max among 3 numbers

echo -n "Enter a = "
read a
echo -n "Enter b = "
read b
echo -n "Enter c = "
read c
if [ $a -gt $b -a $a -gt $c ]
then
	echo  "Max = $a"
elif [ $b -gt $a -a $b -gt $c ]
then
	echo "Max = $b"
else
	echo "Max = $c"
fi

