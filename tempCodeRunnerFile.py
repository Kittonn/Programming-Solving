count = {}
count1 ={}
b_1000 = 0;b_500=0;b_100=0;b_50=0;b_20=0;c_10=0;c_5=0;c_1=0
n = int(input())
if n >= 1000:
    count['1000'] = n // 1000
    #count.append(n // 1000)
if n % 1000 >= 500:
    count['500'] = (n%1000) // 500
    #count.append((n%1000) // 500)
if (n % 1000) %500 >= 100:
    count['100'] = ((n % 1000) %500) // 100
    #count.append(((n % 1000) %500) // 100)
if ((n % 1000) %500) % 100 >= 50:
    count['50'] = (((n % 1000) %500)) % 100 // 50
    #count.append((((n % 1000) %500)) % 100 // 50)
if (((n % 1000) %500) % 100) % 50 >= 20:
    count['20'] = ((((n % 1000) %500)) % 100) %50 // 20
    #count.append(((((n % 1000) %500)) % 100) %50 // 20)
if ((((n % 1000) %500) % 100) % 50) %20 >= 10:
    count1['10'] = (((((n % 1000) %500)) % 100) %50)%20 // 10
    #count.append((((((n % 1000) %500)) % 100) %50)%20 // 10)
if (((((n % 1000) %500) % 100) % 50) %20)%10 >= 5:
    count1['5'] = ((((((n % 1000) %500)) % 100) %50)%20)%10 // 5
    #count.append(((((((n % 1000) %500)) % 100) %50)%20)%10 // 5)
if ((((((n % 1000) %500) % 100) % 50) %20)%10)%5 >= 1:
    count1['1'] = (((((((n % 1000) %500)) % 100) %50)%20)%10)%5
    #count.append((((((((n % 1000) %500)) % 100) %50)%20)%10)%5)
for i in count:
    print('ธนบัตร {}฿ : {} ฉบับ'.format(i,count[i]))
for i in count1:
    print('เหรียญ {}฿ : {} เหรียญ'.format(i,count1[i]))
print('จำนวนเงินที่แลกทั้งหมด {:,} บาท'.format(n))