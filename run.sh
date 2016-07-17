# http://blog.csdn.net/vah101/article/details/24969145

javac Test.java
javah Test
gcc -fPIC -D_REENTRANT -I /usr/lib/jvm/java-1.7.0-openjdk-amd64/include -c jni.c
g++ -shared -Wl,-soname,libjni.so.1 -o libjni.so jni.o
sudo cp libjni.so /usr/lib/
sudo ldconfig
java -cp . Test
# jar -cef Test Test.jar .
# java -jar Test.jar

