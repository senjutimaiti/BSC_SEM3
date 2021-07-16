#To count the frequency of each word

echo -n "Enter a word: "
read s
#s="$1"

j=0
l=${#s}
a=0
e=0
i=0
o=0
u=0

while [ $j -lt $l ]
do
	c=${s:$j:1}
	if [ "$c" = "a" ]
	then
		a=$(( $a + 1 ))
	elif [ "$c" = "e" ]
	then
		e=$(( $e + 1 ))
	elif [ "$c" = "i" ]
	then
		i=$(( $i + 1 ))
	elif [ "$c" = "o" ]
	then
		o=$(( $o + 1 ))
	elif [ "$c" = "u" ]
	then
		u=$(( $u + 1 ))
	fi
	j=$(( $j + 1))
done

echo "a=$a"
echo "e=$e"
echo "i=$i"
echo "o=$o"
echo "u=$u"
