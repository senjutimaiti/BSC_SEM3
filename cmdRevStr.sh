#Reversing a string

s="$1"

l=${#s}
i=0
ans=""

while [ $i -lt $l ]
do
	ans="${s:$i:1}$ans"
	i=$(( $i + 1 ))
done

echo "The Reverse of $s is $ans"
