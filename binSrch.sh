echo -n "Enter n: "
read n

i=0
echo "Enter the elements in ascending order"

while [ $i -lt $n ]
do
    read a[$i]
    i=`expr $i + 1`
done

echo -n "Enter no. to search - "
read x

l=0
h=`expr $n - 1`
f=1

while [ $l -le $h ]
do
    mid=$(( $l + ($h - $l) / 2  ))
    if [ ${a[$mid]} -eq $x ]
    then
        echo "$x found at position `expr $mid + 1`"
        f=0
        break
    elif [ ${a[$mid]} -lt $x ]
    then
        l=$(( $mid + 1 ))
    else
        h=$(( $mid - 1 ))
    fi
done

if [ $f -eq 1 ]
then
    echo "$x not found"
fi
