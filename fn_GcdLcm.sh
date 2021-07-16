#To find the gcd and lcm using functions

echo -n "a="
read a
echo -n "b="
read b

gcd()
{
	if [ $1 -eq 0 ]
	then
		echo 0	
	else
		if [ `expr $2 % $1` -eq 0 -a `expr $3 % $1` -eq 0 ]
		then
			echo $1
		else
			echo $(gcd `expr $1 - 1` $a $b)
		fi
	fi
}
lcm()
{
	hcf=$(gcd $1 $1 $2)
	pro=`expr $1 \* $2`
	l=`expr $pro / $hcf`
	echo $l
}

if [ $a -lt $b ]
then
	echo "GCD = $(gcd $a $a $b)"
	echo "LCM = $(lcm $a $b)"
else
	echo "GCD = $(gcd $b $b $a)"
	echo "LCM = $(lcm $b $a)"
fi



