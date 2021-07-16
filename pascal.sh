echo -n "Enter iteration number"
read n
i=0
coef=1
binomial()
{
	r=1
	
while [ $i -lt $n ]
do
	w=1
	while [ $w -lt `expr $n - $i` ]
	do
		echo -n " "
	done
	j=0
	while [ $j -lt $i ]
	do
		if [ $i -eq 0 -o $j -eq 0 ]
		then
			coef=1
		else
			coef=(binomial $j $n)
		fi
		echo -n $coef" "
		j=`expr $j + 1`
	done
	echo
	i=`expr $i + 1`
done
