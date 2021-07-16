#To write a string in abbreviated form

s="$1"
l=${#s}
i=0
ans="${s:$i:1}."
while [ $i -lt $l ]
do
	c=${s:$i:1}
	if [ "$c" = " " ]
	then
		i=$(( $i + 1 ))
		ans="$ans${s:$i:1}."
	fi
	i=`expr $i + 1`
done

echo "Abbreviated form of $s is $ans"
