DATA=../data/input
echo "======================run debug=============================="
cd Debug
optirun ./WordCount $DATA
cd ..

echo "======================run release============================"

cd Release
optirun ./WordCount $DATA
cd ..

