#To check if a number is a palindrome number or not

echo -n "Enter a number "
read n
sum=0
num=$n

while [ $n -gt 0 ]
do
	rem=`expr $n % 10`
	sum=`expr $sum \* 10`
	sum=`expr $sum + $rem`
	n=`expr $n / 10`
done

if [ $sum -eq $num ]
then
	echo "$num is a palindrome number"
else
	echo "$num is not a palindrome number"
fi
