DATA=../data/input_1
#echo "======================run debug=============================="
#cd Debug
#optirun ./WordCount $DATA
#cd ..

echo "======================run release============================"

cd Release
optirun ./WordCount $DATA
cd ..

