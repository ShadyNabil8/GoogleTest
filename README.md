# Google Test
1. Install gtest lib
```
sudo apt-get install libgtest-dev
```
2.  Install gmock lib
```
sudo apt-get install libgmock-dev
```
3. I searched about somethings but I cannot remember, but got to this path and you can find (I hope) ```libgmock.a  libgmock_main.a  libgtest.a  libgtest_main.a```
```
/usr/src/googletest/googlemock/lib
```
4. I you found them then, copy them to this path ```/usr/lib/gcc/x86_64-linux-gnu/11```. I assume that I am at the directory of the 4 files. the mean to copy the lib files to the path of the compiler lib files.
```
cp libg* /usr/lib/gcc/x86_64-linux-gnu/11
```
5. Go to ```/usr/src/googletest/googlemock/include``` and run this. This mean to copy the header files to the path of the compiler headers.
```
sudo cp -r gmock/ /usr/lib/gcc/x86_64-linux-gnu/11/include
```
6. Go to ```/usr/src/googletest/googletest/include``` and run this. This mean to copy the header files to the path of the compiler headers.
```
sudo cp -r gtest/ /usr/lib/gcc/x86_64-linux-gnu/11/include
```















