#Reversing a string

s="$1"

l=${#s}
i=0
ans=""

while [ $i -lt $l ]
do
	ans="${s:$i:1}$ans"
	i=`expr $i + 1`
done
if [ "$ans" = "$s" ]
then
	echo "YES"
else
	echo "NO"
fi
echo "The Reverse of $s is $ans"
