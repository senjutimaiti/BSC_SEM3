#Basic floating point arithmetic operations

echo -n "Enter a="
read a
echo -n "Enter b="
read b

add()
{
	sum=`echo "$1 + $2" | bc`
	echo $sum
}
subt()
{
	sub=`echo "$1 - $2" | bc`
	echo $sub
}
mult()
{
	mul=`echo "scale=5; $1 * $2" | bc`
	echo $mul
}
divi()
{
	div=`echo "scale=5; $1 / $2" | bc`
	echo $div
}
modu()
{
	mod=`echo "$1 % $2" | bc -l`
	echo $mod
}

echo "Enter your choice:"
echo "1. Add"
echo "2. Sub"
echo "3. Multi"
echo "4. Div"
echo "5. Mod"
read c

case $c in
	1)echo "Sum = $(add $a $b)";;
	2)echo "Difference = $(subt $a $b)";;
	3)echo "Multi = $(mult $a $b)";;
	4)echo "Div = $(divi $a $b)";;
	5)echo "Mod = $(modu $a $b)";;
	*)echo "Wrong input";;
esac
