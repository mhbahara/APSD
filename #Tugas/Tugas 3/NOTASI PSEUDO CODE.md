# NOTASI ALGORITMA PSEUDO CODE

## CASE 1
**MEMULAI PROGRAM**

**_DEKLARASI_**
```
STRING : Nama 
INTEGER : NilaiI, NilaiII, NilaiIII
FLOAT : NilaiRata_rata
```

**_INPUT_**
```
Nama
NilaiI
NilaiII
NilaiIII
```

**_PROSES_**
```
NilaiRata_rata : NilaiI + NilaiII + NilaiIII / 3
```

**_IF_**
```
Jika nilai rata-rata > 80, maka menjadi Juara I.
Jika nilai rata-rata > 75, maka menjadi Juara II.
Jika nilai rata-rata > 65, maka menjadi Juara III.
```

**_ELSE_**
```
Selain itu tidak juara.
```

**_OUTPUT_**
```
Nama
Nilai_Rata-rata
Juara
```

**_PROSES SELESAI._**


## CASE 2
**MEMULAI PROGRAM**

**_DEKLARASI_**
```
STRING : Nama, Grade
INTEGER : NilaiKeaktifan, NilaiTugas, NilaiUjian
FLOAT : NilaiAkhir;

```

**_INPUT_**
```
Nama
NilaiKeaktifan
NilaiTugas
NilaiUjian
```

**_PROSES_**
```
NilaiKeaktifan = Nilai Keaktifaan * 0.2
NilaiTugas = Nilai Tugas * 0.3
NilaiUjian = Nilai Ujian * 0.5
NilaiAkhir = NilaiKeaktifan + NilaiTugas + NilaiUjian
```

**_IF_**
```
Jika nilai Akhir > 80, maka mendapat grade “A”
Jika nilai Akhir > 70, maka mendapat grade “B”
Jika nilai Akhir > 56, maka mendapat grade “C”
Jika nilai Akhir > 46, maka mendapat grade “D”
```

**_ELSE_**
```
Selain itu mendapat grade “E”
```

**_OUTPUT_**
```
Nama
NilaiAkhir
Grade
```

**_PROSES SELESAI._**

## CASE 3 
**MEMULAI PROGRAM**

**_DEKLARASI_**
```
STRING : Nama, Pendidikan
INTEGER : JumlahJam, Gaji = 300000, Honor
FLOAT : TunjanganGolongan, TunjanganPendidikan

```

**_INPUT_**
```
Nama
Pendidikan
JumlahJam
Gaji
Honor
TunjanganGolongan
TunjanganPendidikan
```

**_PROSES_**

**_IF(TunjanganGolongan)_**
```
Jika TunjanganGolongan = 1 maka TunjanganGolongan = Gaji * 0.05
jika TunjanganGolongan = 2 maka TunjanganGolongan = Gaji * 0.1
Jika TunjanganGolongan = 3 maka TunjanganGolongan = Gaji * 0.15
```
**_ELSE_**
```
Selain itu TunjanganGolongan = 0
```

**_IF(TunjanganPendidikan)_**
```
Jika Pendidikan = SMA maka TunjanganPendidikan = Gaji * 0.025
```
  **_ELSE'IF_**
```
Jika Pendidikan = D1 maka TunjanganPendidikan = Gaji * 0.05
Jika Pendidikan = D3 maka TunjanganPendidikan = Gaji * 0.2
Jika Pendidikan = S1 maka TunjanganPendidikan = Gaji * 0.3
```
**_ELSE_**
```
Selain itu TunjanganPendidikan = 0
```

**_IF(JumlahJam)_**
```
Jika JumlahJam > 8 maka JumlahJam = (JumlahJam - 8) * 3500
```
**_ELSE_**
```
Selain itu JumlahJam = 0
```
**_PERHITUNGAN_**
```
Honor = (Gaji + TunjanganGolongan + TunjanganPendidikan + JumlahJam)
```

**_OUTPUT_**
```
Nama
TunjanganGolongan
TunjanganPendidikan
JumlahJam
Honor
```

**_PROSES SELESAI._**
