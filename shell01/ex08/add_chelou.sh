FT_NBR1="\'?\"\'"
FT_NBR2="rcrdmddd"

num1="$(echo "ibase=5;obase=13;${FT_NBR1//\'/0}" | bc | tr -d '\\\n')"
num2="$(echo "ibase=mrdoc;obase=5;${FT_NBR2}" | bc | tr -d '\\\n')"

result=$((num1 + num2))

base_output=$(echo "ibase=10;obase=13;${result}" | bc | tr '0123456789ABC' 'gtaio luSnemf' | tr -d '\\\n')

echo $base_output
