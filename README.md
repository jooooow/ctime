# ctime
get current local time

# installation
```
git clone --recursive https://github.com/jooooow/ctime.git
cd ctime
mkdir build
cd build
make ..
sudo make install
```

# usage
```
$ ctime   
2023-04-15 23:21:57.250693 JST (Saturday)
```

# issue
cmake error:could not find curl (missing: curl_library curl_include_dir)
```
sudo apt-get install curl
sudo apt-get install libssl-dev libcurl4-openssl-dev
```
