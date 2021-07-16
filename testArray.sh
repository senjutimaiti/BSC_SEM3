#test array

arr=(14768 2456 3 4 5 6)
echo ${arr[@]}
echo ${arr[*]}
echo ${arr[@]:0}
echo ${arr[*]:0}
echo ${arr[0]}
echo ${arr}
echo ${arr[3]}
echo ${arr[1]}
echo ${arr[@]:2}
echo ${arr[0]:1}
echo ${arr[@]:2:3}
echo ${arr[@]:1:4}
echo ${arr[@]:2}
echo ${arr[0]:1:3}
echo ${arr[1]:1:2}

echo ${#arr}
echo ${#arr[0]}
echo ${#arr[1]}
echo ${#arr[@]}
echo ${#arr[*]}
