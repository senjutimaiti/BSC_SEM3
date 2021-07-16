#To check whether a number is prime or not
n=$1
s=1
while [ $s -le $n ]
do
	f=0
	i=1
	while [ $i -le $s ]
	do
		if [ `expr $s % $i` -eq 0 ]
		then
			f=`expr $f + 1`
		fi
		i=`expr $i + 1`
	done
	if [ $f -eq 2 ]
	then	
		num=$s
		rem=0
		sum=0
		while [ $num -gt 0 ]
		do
			rem=`expr $num % 10`
			sum=`expr $sum \* 10`
			sum=`expr $sum + $rem`
			num=`expr $num / 10`
		done
		if [ $sum -eq $s ]
		then		
			echo "$s "
		fi
	fi
	s=`expr $s + 1`
done
