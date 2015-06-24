Just type `make` to build.

A normal run looks like this:

```
$ ./test
Hi, I'm 28585
Hi, I'm 28602
Hi, I'm 28597
Hi, I'm 28604
Hi, I'm 28603
Hi, I'm 28592
Hi, I'm 28589
Hi, I'm 28588
Child 28597 has exited
Child 28603 has exited
Child 28604 has exited
Hi, I'm 28587
Child 28592 has exited
Hi, I'm 28586
Child 28585 has exited
Child 28602 has exited
Child 28589 has exited
Child 28588 has exited
Child 28587 has exited
Child 28586 has exited
Test ended successfully
$

```

In gdb, (version 7.9.50.20150603-cvs here):

```
$ gdb -q ./test -ex "set target-async on" -ex "set non-stop on" -ex "set detach-on-fork off"
Reading symbols from ./test...done.
(gdb) r &
Starting program: /tmp/test-fork-threads/test 
(gdb) [Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/x86_64-linux-gnu/libthread_db.so.1".
[New process 28964]
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/x86_64-linux-gnu/libthread_db.so.1".
Hi, I'm 28964
[New process 28965]
[New Thread 0x7ffff77f6700 (LWP 28966)]
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/x86_64-linux-gnu/libthread_db.so.1".
Hi, I'm 28965
[New process 28967]
[New Thread 0x7ffff77f6700 (LWP 28968)]
[New Thread 0x7ffff6ff5700 (LWP 28969)]
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/x86_64-linux-gnu/libthread_db.so.1".
Hi, I'm 28967
[New Thread 0x7ffff77f6700 (LWP 28971)]
[New process 28970]
[Thread 0x7ffff77f6700 (LWP 28971) exited]
[New Thread 0x7ffff6ff5700 (LWP 28974)]
[New Thread 0x7ffff6ff5700 (LWP 28972)]
[New Thread 0x7ffff67f4700 (LWP 28973)]
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/x86_64-linux-gnu/libthread_db.so.1".
Hi, I'm 28970
[New Thread 0x7ffff77f6700 (LWP 28976)]
[New Thread 0x7ffff67f4700 (LWP 28977)]
[New Thread 0x7ffff67f4700 (LWP 28978)]
[New Thread 0x7ffff5ff3700 (LWP 28979)]
[New process 28975]
[Thread 0x7ffff5ff3700 (LWP 28979) exited]
[Thread 0x7ffff67f4700 (LWP 28978) exited]
[Thread 0x7ffff67f4700 (LWP 28977) exited]
[Thread 0x7ffff77f6700 (LWP 28976) exited]
[New Thread 0x7ffff6ff5700 (LWP 28980)]
[New Thread 0x7ffff5ff3700 (LWP 28981)]
[New Thread 0x7ffff5ff3700 (LWP 28982)]
[New Thread 0x7ffff57f2700 (LWP 28983)]
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/x86_64-linux-gnu/libthread_db.so.1".
Hi, I'm 28975
[New Thread 0x7ffff67f4700 (LWP 28984)]
[New Thread 0x7ffff77f6700 (LWP 28986)]
[New process 28985]
[Thread 0x7ffff77f6700 (LWP 28986) exited]
[Thread 0x7ffff67f4700 (LWP 28984) exited]
[New Thread 0x7ffff6ff5700 (LWP 28991)]
[New Thread 0x7ffff5ff3700 (LWP 28990)]
[New Thread 0x7ffff57f2700 (LWP 28987)]
[New Thread 0x7ffff57f2700 (LWP 28988)]
[New Thread 0x7ffff4ff1700 (LWP 28989)]
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/x86_64-linux-gnu/libthread_db.so.1".
Hi, I'm 28985
[New Thread 0x7ffff67f4700 (LWP 28994)]
[New Thread 0x7ffff77f6700 (LWP 28995)]
[New Thread 0x7ffff57f2700 (LWP 28992)]
[New process 28993]
[Thread 0x7ffff57f2700 (LWP 28992) exited]
[Thread 0x7ffff77f6700 (LWP 28995) exited]
[Thread 0x7ffff67f4700 (LWP 28994) exited]
[New Thread 0x7ffff6ff5700 (LWP 28999)]
[New Thread 0x7ffff5ff3700 (LWP 29000)]
[New Thread 0x7ffff4ff1700 (LWP 29001)]
[New Thread 0x7ffff4ff1700 (LWP 28996)]
[New Thread 0x7ffff4ff1700 (LWP 28997)]
[New Thread 0x7ffff47f0700 (LWP 28998)]
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/x86_64-linux-gnu/libthread_db.so.1".
Hi, I'm 28993
[New Thread 0x7ffff67f4700 (LWP 29002)]
[New Thread 0x7ffff77f6700 (LWP 29008)]
[New Thread 0x7ffff57f2700 (LWP 29007)]
[New Thread 0x7ffff47f0700 (LWP 29003)]
[New Thread 0x7ffff47f0700 (LWP 29006)]
[New Thread 0x7ffff47f0700 (LWP 29005)]
[New process 29004]
[Thread 0x7ffff47f0700 (LWP 29005) exited]
[Thread 0x7ffff47f0700 (LWP 29006) exited]
[Thread 0x7ffff47f0700 (LWP 29003) exited]
[Thread 0x7ffff57f2700 (LWP 29007) exited]
[Thread 0x7ffff77f6700 (LWP 29008) exited]
[Thread 0x7ffff67f4700 (LWP 29002) exited]
[New Thread 0x7ffff6ff5700 (LWP 29010)]
[New Thread 0x7ffff5ff3700 (LWP 29011)]
[New Thread 0x7ffff4ff1700 (LWP 29012)]
[New Thread 0x7ffff3fef700 (LWP 29013)]
[New Thread 0x7ffff3fef700 (LWP 29015)]
[New Thread 0x7ffff3fef700 (LWP 29014)]
[New Thread 0x7ffff3fef700 (LWP 29009)]
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/x86_64-linux-gnu/libthread_db.so.1".
Hi, I'm 29004
[New Thread 0x7ffff77f6700 (LWP 29018)]
[New Thread 0x7ffff67f4700 (LWP 29017)]
[New Thread 0x7ffff57f2700 (LWP 29019)]
[New Thread 0x7ffff47f0700 (LWP 29020)]
[New Thread 0x7ffff37ee700 (LWP 29022)]
[New Thread 0x7ffff37ee700 (LWP 29021)]
[New process 29016]
[Thread 0x7ffff37ee700 (LWP 29021) exited]
[Thread 0x7ffff37ee700 (LWP 29022) exited]
[Thread 0x7ffff47f0700 (LWP 29020) exited]
[Thread 0x7ffff57f2700 (LWP 29019) exited]
[Thread 0x7ffff67f4700 (LWP 29017) exited]
[Thread 0x7ffff77f6700 (LWP 29018) exited]
[New Thread 0x7ffff6ff5700 (LWP 29025)]
[New Thread 0x7ffff5ff3700 (LWP 29026)]
[New Thread 0x7ffff4ff1700 (LWP 29028)]
[New Thread 0x7ffff3fef700 (LWP 29027)]
[New Thread 0x7ffff2fed700 (LWP 29029)]
[New Thread 0x7ffff2fed700 (LWP 29030)]
[New Thread 0x7ffff37ee700 (LWP 29023)]
[New Thread 0x7ffff37ee700 (LWP 29024)]
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/x86_64-linux-gnu/libthread_db.so.1".
Hi, I'm 29016
[New Thread 0x7ffff57f2700 (LWP 29031)]
[New Thread 0x7ffff77f6700 (LWP 29035)]
[New Thread 0x7ffff67f4700 (LWP 29036)]
[New Thread 0x7ffff47f0700 (LWP 29033)]
[New Thread 0x7ffff37ee700 (LWP 29034)]
[New process 29032]
[Thread 0x7ffff37ee700 (LWP 29034) exited]
[Thread 0x7ffff47f0700 (LWP 29033) exited]
[Thread 0x7ffff67f4700 (LWP 29036) exited]
[Thread 0x7ffff77f6700 (LWP 29035) exited]
[Thread 0x7ffff57f2700 (LWP 29031) exited]
[New Thread 0x7ffff6ff5700 (LWP 29039)]
[New Thread 0x7ffff5ff3700 (LWP 29040)]
[New Thread 0x7ffff4ff1700 (LWP 29041)]
[New Thread 0x7ffff3fef700 (LWP 29042)]
[New Thread 0x7ffff2fed700 (LWP 29043)]
[New Thread 0x7ffff2fed700 (LWP 29037)]
[New Thread 0x7ffff2fed700 (LWP 29038)]
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/x86_64-linux-gnu/libthread_db.so.1".
Hi, I'm 29032
[New Thread 0x7ffff77f6700 (LWP 29044)]
[New Thread 0x7ffff67f4700 (LWP 29048)]
[New Thread 0x7ffff57f2700 (LWP 29045)]
[New Thread 0x7ffff47f0700 (LWP 29046)]
[New Thread 0x7ffff37ee700 (LWP 29047)]
[Thread 0x7ffff67f4700 (LWP 29048) exited]
[Thread 0x7ffff37ee700 (LWP 29047) exited]
[Thread 0x7ffff47f0700 (LWP 29046) exited]
[Thread 0x7ffff57f2700 (LWP 29045) exited]
[Thread 0x7ffff77f6700 (LWP 29044) exited]
[New Thread 0x7ffff6ff5700 (LWP 29052)]
[New Thread 0x7ffff5ff3700 (LWP 29049)]
[New Thread 0x7ffff4ff1700 (LWP 29050)]
[New Thread 0x7ffff3fef700 (LWP 29051)]
[New Thread 0x7ffff2fed700 (LWP 29053)]
[Thread 0x7ffff2fed700 (LWP 29053) exited]
[Thread 0x7ffff6ff5700 (LWP 29052) exited]
[Thread 0x7ffff3fef700 (LWP 29051) exited]
[Thread 0x7ffff4ff1700 (LWP 29050) exited]
[Thread 0x7ffff5ff3700 (LWP 29049) exited]
[New Thread 0x7ffff67f4700 (LWP 29054)]
[New Thread 0x7ffff57f2700 (LWP 29055)]
[New Thread 0x7ffff47f0700 (LWP 29056)]
[New Thread 0x7ffff37ee700 (LWP 29057)]
[Thread 0x7ffff37ee700 (LWP 29057) exited]
[Thread 0x7ffff47f0700 (LWP 29056) exited]
[Thread 0x7ffff57f2700 (LWP 29055) exited]
[Thread 0x7ffff67f4700 (LWP 29054) exited]
[New Thread 0x7ffff5ff3700 (LWP 29058)]
[New Thread 0x7ffff4ff1700 (LWP 29059)]
[New Thread 0x7ffff3fef700 (LWP 29060)]
[New Thread 0x7ffff2fed700 (LWP 29061)]
[Thread 0x7ffff2fed700 (LWP 29061) exited]
[Thread 0x7ffff3fef700 (LWP 29060) exited]
[Thread 0x7ffff4ff1700 (LWP 29059) exited]
[Thread 0x7ffff5ff3700 (LWP 29058) exited]
[New Thread 0x7ffff57f2700 (LWP 29062)]
[New Thread 0x7ffff47f0700 (LWP 29063)]
[New Thread 0x7ffff37ee700 (LWP 29064)]
[Thread 0x7ffff37ee700 (LWP 29064) exited]
[Thread 0x7ffff47f0700 (LWP 29063) exited]
[Thread 0x7ffff57f2700 (LWP 29062) exited]
[New Thread 0x7ffff4ff1700 (LWP 29065)]
[New Thread 0x7ffff3fef700 (LWP 29066)]
[New Thread 0x7ffff2fed700 (LWP 29067)]
[Thread 0x7ffff2fed700 (LWP 29067) exited]
[Thread 0x7ffff3fef700 (LWP 29066) exited]
[Thread 0x7ffff4ff1700 (LWP 29065) exited]
[New Thread 0x7ffff47f0700 (LWP 29068)]
[New Thread 0x7ffff37ee700 (LWP 29069)]
[Thread 0x7ffff37ee700 (LWP 29069) exited]
[Thread 0x7ffff47f0700 (LWP 29068) exited]
[New Thread 0x7ffff3fef700 (LWP 29070)]
[New Thread 0x7ffff2fed700 (LWP 29071)]
[Thread 0x7ffff2fed700 (LWP 29071) exited]
[Thread 0x7ffff3fef700 (LWP 29070) exited]
[New Thread 0x7ffff37ee700 (LWP 29072)]
[Thread 0x7ffff37ee700 (LWP 29072) exited]
[New Thread 0x7ffff2fed700 (LWP 29073)]
[Thread 0x7ffff2fed700 (LWP 29073) exited]
[Inferior 11 (process 29032) exited normally]
Child 29032 has exited

(gdb) info threads
  Id   Target Id         Frame 
  81   Thread 0x7ffff2fed700 (LWP 29038) "test" (running)
  80   Thread 0x7ffff2fed700 (LWP 29037) "test" (running)
  79   Thread 0x7ffff2fed700 (LWP 29043) "test" (running)
  78   Thread 0x7ffff3fef700 (LWP 29042) "test" (running)
  77   Thread 0x7ffff4ff1700 (LWP 29041) "test" (running)
  76   Thread 0x7ffff5ff3700 (LWP 29040) "test" (running)
  75   Thread 0x7ffff6ff5700 (LWP 29039) "test" (running)
  68   Thread 0x7ffff37ee700 (LWP 29024) "test" (running)
  67   Thread 0x7ffff37ee700 (LWP 29023) "test" (running)
  66   Thread 0x7ffff2fed700 (LWP 29030) "test" (running)
  65   Thread 0x7ffff2fed700 (LWP 29029) "test" (running)
  64   Thread 0x7ffff3fef700 (LWP 29027) "test" (running)
  63   Thread 0x7ffff4ff1700 (LWP 29028) "test" (running)
  62   Thread 0x7ffff5ff3700 (LWP 29026) "test" (running)
  61   Thread 0x7ffff6ff5700 (LWP 29025) "test" (running)
  60   Thread 0x7ffff7fc5740 (LWP 29016) "test" (running)
  53   Thread 0x7ffff3fef700 (LWP 29009) "test" (running)
  52   Thread 0x7ffff3fef700 (LWP 29014) "test" (running)
  51   Thread 0x7ffff3fef700 (LWP 29015) "test" (running)
  50   Thread 0x7ffff3fef700 (LWP 29013) "test" (running)
  49   Thread 0x7ffff4ff1700 (LWP 29012) "test" (running)
  48   Thread 0x7ffff5ff3700 (LWP 29011) "test" (running)
  47   Thread 0x7ffff6ff5700 (LWP 29010) "test" (running)
  46   Thread 0x7ffff7fc5740 (LWP 29004) "test" (running)
  39   Thread 0x7ffff47f0700 (LWP 28998) "test" (running)
  38   Thread 0x7ffff4ff1700 (LWP 28997) "test" (running)
  37   Thread 0x7ffff4ff1700 (LWP 28996) "test" (running)
  36   Thread 0x7ffff4ff1700 (LWP 29001) "test" (running)
  35   Thread 0x7ffff5ff3700 (LWP 29000) "test" (running)
  34   Thread 0x7ffff6ff5700 (LWP 28999) "test" (running)
  33   Thread 0x7ffff7fc5740 (LWP 28993) "test" (running)
  29   Thread 0x7ffff4ff1700 (LWP 28989) "test" (running)
  28   Thread 0x7ffff57f2700 (LWP 28988) "test" (running)
  27   Thread 0x7ffff57f2700 (LWP 28987) "test" (running)
  26   Thread 0x7ffff5ff3700 (LWP 28990) "test" (running)
  25   Thread 0x7ffff6ff5700 (LWP 28991) "test" (running)
  24   Thread 0x7ffff7fc5740 (LWP 28985) "test" (running)
  21   Thread 0x7ffff57f2700 (LWP 28983) "test" (running)
  20   Thread 0x7ffff5ff3700 (LWP 28982) "test" (running)
  19   Thread 0x7ffff5ff3700 (LWP 28981) "test" (running)
  18   Thread 0x7ffff6ff5700 (LWP 28980) "test" (running)
  17   Thread 0x7ffff7fc5740 (LWP 28975) "test" (running)
  12   Thread 0x7ffff67f4700 (LWP 28973) "test" (running)
  11   Thread 0x7ffff6ff5700 (LWP 28972) "test" (running)
  10   Thread 0x7ffff6ff5700 (LWP 28974) "test" (running)
  9    Thread 0x7ffff7fc5740 (LWP 28970) "test" (running)
  7    Thread 0x7ffff6ff5700 (LWP 28969) "test" (running)
  6    Thread 0x7ffff77f6700 (LWP 28968) "test" (running)
  5    Thread 0x7ffff7fc5740 (LWP 28967) "test" (running)
  4    Thread 0x7ffff77f6700 (LWP 28966) "test" (running)
  3    Thread 0x7ffff7fc5740 (LWP 28965) "test" (running)
  2    Thread 0x7ffff7fc5740 (LWP 28964) "test" (running)
* 1    Thread 0x7ffff7fc5740 (LWP 28960) "test" (running)
(gdb) 
```

We see that the test does not finish, some threads are stuck, stopped by gdb:

```
$ ps -o pgid,pid,state,comm -e -L | grep test
29145 29145 S test
29145 29149 S test
29145 29149 t test
29145 29149 t test
29145 29149 t test
29145 29149 t test
29145 29149 t test
29145 29150 S test
29145 29150 t test
29145 29150 t test
29145 29150 t test
29145 29150 t test
29145 29150 t test
29145 29153 S test
29145 29153 t test
29145 29153 t test
29145 29153 t test
29145 29153 t test
29145 29153 t test
29145 29158 S test
29145 29158 t test
29145 29158 t test
29145 29158 t test
29145 29158 t test
29145 29158 t test
29145 29165 S test
29145 29165 t test
29145 29165 t test
29145 29165 t test
29145 29165 t test
29145 29165 t test
29145 29174 S test
29145 29174 t test
29145 29174 t test
29145 29174 t test
29145 29174 t test
29145 29185 S test
29145 29185 t test
29145 29185 t test
29145 29185 t test
29145 29198 S test
29145 29198 t test
29145 29198 t test
29145 29207 S test
29145 29207 t test

```
