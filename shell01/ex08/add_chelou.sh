#!/bin/bash

FT_NBR1="'\"?!"
FT_NBR2="mrdoc"

# FT_NBR1をgtaio luSnemfベースの数値に変換
num1=$(echo "ibase=???;obase=13;${FT_NBR1//\'/0}" | bc | tr -d '\\\n')

# FT_NBR2をgtaio luSnemfベースの数値に変換
num2=$(echo "ibase=mrdoc;obase=13;${FT_NBR2}" | bc | tr -d '\\\n')

# 合計を計算
result=$((num1 + num2))

# 合計を10進数からgtaio luSnemfベースに変換
base_output=$(echo "ibase=10;obase=13;${result}" | bc | tr '0123456789ABC' 'gtaio\ luSnemf' | tr -d '\\\n')

echo $base_output
