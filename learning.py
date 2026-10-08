import sys;
import math

def lengthOfString(str):
    cnt = 0
    for elemrnt in str:
        cnt = cnt + 1
    return cnt

name = "striver"
print(lengthOfString(name))
print(len(name))

arr = [1, 5, 6, 7, 4]

print(sorted(arr))
print(sorted(arr, reverse=True))
print(arr)
arr.sort()
print(arr)
arr.sort(reverse=True)
print(arr)

arr = [-1, 5, -6, 7, 4]
arr.sort(key = lambda x: abs(x))
print(arr)

fruits_list = ["apple", "pineapple", "kiwi"]
print(sorted(fruits_list, key = len))
print(sorted(fruits_list, reverse=True, key = len))

arr = [-15,6,8,7]
print(min(arr))
print(max(arr))
print(max(arr, key = lambda x: abs(x)))

arr = [15,6,8,7]
print(sum(arr))
print(sum(arr, start = 10))

arr = [1,2,4]
print(math.prod(arr))

arr = [True, False, True]
print(any(arr))
print(all(arr))

def count_element_in_list(arr,  number):
    cnt = 0
    for el in arr:
        if el == number:
            cnt = cnt + 1
    return cnt

arr = [1,6,1,7]
print(arr.count(1))
print(count_element_in_list(arr, 1))

arr = [5,6,1,3] # (index, value)
print(list(enumerate(arr)))

for i , val in list(enumerate(arr)):
    print(i , val)

#for i in range(0, 5):
#    val = arr[i]

arr = list(range(2, 15, 3))
print(arr)

from collections import deque

dq = deque([2, 3, 1])

dq.append(5)
print(dq)

dq.appendleft(7)
print(dq)

print(dq.pop())
print(dq)

print(dq.popleft())
print(dq)

dq.extend([10, 19, "raj"])
print(dq)

dq.extendleft([89, "striver"])
print(dq)

dq.rotate(2)
print(dq)

from collections import Counter

arr = Counter([1, 2, 2, 3, 2, 3, 3, 4 ]) # 1->1, 2->3, 3->3, 4->1
print(arr[2])
print(arr[10])

# insertion order , the one which was inserted first will be returned
print(arr.most_common(1))
print(arr.most_common(3))
print(arr.most_common(10))

# insertion order , the one which was inserted first will be returned
print(list(arr.elements()))

arr.update([7, 3])
print(list(arr.elements()))

arr.subtract([3, 3, 10])
print(list(arr.elements()))

c1 = Counter([1, 3, 2, 2, 2, 3, 3, 4])
c2 = Counter([3, 3, 1, 4, 5])
c3 = c1 - c2
c4 = c2 - c1
print(list(c3.elements()))
print(list(c4.elements()))

# insertion order of base one
c5 = c1 + c2
c6 = c2 + c1
print(list(c5.elements()))
print(list(c6.elements()))

# commanality is taken
c7 = c2 & c1
print(list(c7.elements()))

# insertion order of base is taken and it will takes the one which maximum appears
c8 = c2 | c1
print(list(c8.elements()))

# (key , value)

from collections import defaultdict

dd = defaultdict(int)
dd[1] = "Raj"
dd["striver"] = "raj"
dd["u"] = 99
dd["list"] = [1, 2, 4]
print(dd["list"])

print(dd["xyz"])

dd1 = defaultdict(int)

dd1["raj"] = [7, 8, 9]
dd1["raj"].append(10)
print(dd1["raj"])


from collections import OrderedDict

od = OrderedDict([(1, "Raj"), (3, "striver"), (2, "tuf"), (7, "msd")])
print(od)
print(od[1])
# print(od[10]) key error because it doesn't have default value

if 10 in od:
    print(od[10])
else:
    print("not in dictionary")

od[10] = "messi"
print(od)

od.move_to_end(7)
print(od)

od.move_to_end(10, last=False)
print(od)

print(od.popitem())
print(od)

print(od.pop(10))
print(od)

if 15 in od:
    od.pop(15)
else:
    print("not in dictionary so can't pop")

# are immutable & maintain an order
val1 = (1, 4, 5)
val2 = (4, 1, 5)
val3 = (3, (6, 7, 9))
a, (b, c, d) = val3
print(val1[0])
print(val1 == val2)
print(val3[1][2])
d = 10
print(a, b, c, d)

from collections import namedtuple

Point = namedtuple("Point", ["first", "second"])
NestedPoint = namedtuple("NestedPoint", ["first", "second"])
val1 = Point(7, 9)
val2 = NestedPoint(2, val1)
# val1.first = 10 # are immutable
print(val1.first)
print(val2.second.second)

import heapq

val = []

heapq.heappush(val, 10)
heapq.heappush(val, 7)
heapq.heappush(val, 9)
heapq.heappush(val, 19)
heapq.heappush(val, 12)
heapq.heappush(val, 1)

print(val)
heapq.heappop(val)
print(val)
# first pop then push
print(heapq.heappushpop(val, 9))
print(val)
# first push then pop
print(heapq.heapreplace(val, 1))
print(val)

print(heapq.nlargest(4, [7,1,5,3,10]))
print(heapq.nsmallest(3, [7,1,5,3,10]))

arr = [7, 8, 2, 1, -16, 6]
heapq.heapify(arr)
print(arr)

arr = [6, 7, 8, 9, 10]
pq = []
for item in arr:
    heapq.heappush(pq, -1 * item)

print(-1 * pq[0])

arr = [5, 1, 6, 1, 7, 10]
print(arr.index(6))

# Linear Search O(N)
def linear_search(arr, val):
    for i in range(0, len(arr)):
        if arr[i] == val:
            return i
    return -1

print(linear_search(arr, 10))

import bisect

# Bineary Search O(logN)
arr = [4, 5, 5, 6, 7, 7, 9, 10, 12, 12, 13]

print(bisect.bisect_left(arr, 11))
print(bisect.bisect_left(arr, 5))
print(bisect.bisect_right(arr, 5))


bisect.insort(arr, 5)

import itertools

arr = [1, 5, 6, 7]
# not considering itself
print(list(itertools.combinations(arr, 2)))
print(list(itertools.combinations(arr, 3)))
# considering itself repeating
print(list(itertools.combinations_with_replacement(arr, 2)))
# this includes the opposites ones as well but not itself
print(list(itertools.permutations(arr, 2)))
arr1 = [1, 2]
arr2 = [3, 4]
arr3 = [5, 6]
print(list(itertools.product(arr1, arr2)))
print(list(itertools.product(arr1, arr2, arr3)))

arr = list(itertools.repeat(5,6))
print(arr)

print(list(itertools.chain([1, 2], [5, 6], [3, 4])))

arr = [1,3,6,10]

print(list(itertools.accumulate(arr)))

print(list(itertools.accumulate(arr, lambda x, y: x * y)))

import math

print(math.pi)
print(math.e)
print(math.pow(2, -3))
print(math.sqrt(16))
print(math.sqrt(17))
print(math.factorial(5))
print(math.gcd(10, 15))
print(math.lcm(10, 15))
print(math.lcm(10, 15))
print(math.ceil(10.1))
print(math.floor(10.1))
print(math.isfinite(10))
print(math.isfinite(float('inf')))
print(math.isinf(float('inf')))

import random

print(random.random())
print(random.randint(1, 10))
print(random.randrange(0, 100, 10))
print(random.choice([1, 6, 7]))
print(random.sample([1, 6, 7, 8], 2))
arr = [1, 6, 7, 8]
random.shuffle(arr)
print(arr)
print(random.uniform(1.0, 10.0))

dd = {1: "raj", 2: "striver",3: "tuf"}
dd[100] = "century"
dd.update({10: "messi"})
print(dd.get(109, 'not found'))
print(dd.get(100))

# to pop a specific item
dd.pop(1)

# to pop last item
dd.popitem()

print(dd)

print(list(dd.items()))
print(list(dd.keys()))
print(list(dd.values()))

for item in dd.items():
    print(item[0], item[1])

st = {1, 2, 6, 4, 1}
print(st)

name = "    striver world    "

print(name.upper())
print(name.lower())
print(name.capitalize())
print(name.title())
print(name.strip())
print(name.split())
print(name.split('r'))

arr = ["raj", "striver"]
print("-".join(arr))
print(name.find("r"))
print(name.rfind("r"))
print(name.index("s"))
print(name.strip().startswith("s"))
print(name.count('r'))
print(name.isalpha()) # if it doesn't have any spaces then it's alpha