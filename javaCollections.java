import java.util.*;

class Data {
    private Integer num;
    private String name;
    private InternalData internalData;

    Data(Integer _num, String _name, Integer _revenue) {
        this.num = _num;
        this.name = _name;
        this.internalData = new InternalData(_revenue);
    };

    public void setNum(Integer _num) {
        this.num = _num;
    };

    public void setName(String _name) {
        this.name = _name;
    };

    public String getName() {
        return name;
    };

    public Integer getNum() {
        return num;
    };

};

class InternalData {
    public Integer revenue;

    InternalData(Integer _revenue) {
        this.revenue = _revenue;
    }
}

public class javaCollections {

    public static void explainArrayList() {
        // List
        ArrayList<Integer> alist = new ArrayList<>();
        alist.add(10);
        alist.add(16);
        alist.add(20);
        alist.add(12);
        System.out.println(alist);
        System.out.println(alist.size());
        System.out.println(alist.get(3));
        System.out.println(alist.remove(2));

        alist.add(1, 17);
        System.out.println(alist);

        System.out.println(alist.contains(170));
    };

    public static void explainLinkedList() {
        LinkedList<Integer> ll = new LinkedList<>();

        ll.add(1);
        ll.add(2);
        ll.addFirst(31);
        ll.addLast(56);
        System.out.println(ll);

        System.out.println(ll.removeLast());
        System.out.println(ll.removeFirst());

        System.out.println(ll);
        System.out.println(ll.getFirst());
        System.out.println(ll.getLast());
    };

    public static void explainstack() {
        // LIFO Last In First Out

        Stack<Integer> st = new Stack<>();
        st.push(2);
        st.push(4);
        st.push(6);
        System.out.println(st);
        System.out.println(st.peek());
        st.pop();
        System.out.println(st.peek());
        st.isEmpty();
        System.out.println(st);
    };

    public static void explainVector() {
        // Vector Thread safe

        Vector<Integer> vec = new Vector<>();

    };

    public static void explainHashSet() {
        // DS that stores unique elements in random order
        HashSet<Integer> hs = new HashSet<>();
        hs.add(1);
        hs.add(2);
        hs.add(1);
        hs.add(0);
        System.out.println(hs.size());
        System.out.println(hs.isEmpty());
        System.out.println(hs);

        for (Integer num : hs) {
            System.out.println(num);
        }
    };

    public static void explainTreeSet() {
        // DS that stores unique elements in sorted order
        TreeSet<Integer> ts = new TreeSet<>();
        ts.add(12);
        ts.add(9);
        ts.add(1);
        ts.add(4);
        System.out.println(ts);
        System.out.println(ts.floor(8)); // printsb first value that's <= than 8
        System.out.println(ts.ceiling(8)); // printsb first value that's >= than 8
        System.out.println(ts.size());
        for (Integer num : ts) {
            System.out.println(num);
        }
    };

    public static void explainQueue() {
        // FIFO First In First Out
        ArrayDeque<Integer> ad = new ArrayDeque<>();
        ad.offer(2);
        ad.offer(6);
        ad.offer(9);
        ad.offer(10);
        System.out.println(ad);
        ad.poll();
        System.out.println(ad.peek());
        System.out.println(ad.size());
        ad.offerFirst(2);
        ad.offerLast(7);
        System.out.println(ad);
        System.out.println(ad.peekFirst());
        System.out.println(ad.peekLast());
    };

    public static void explainPriorityQueue() {
        // Mun heap DS
        // stores elements
        // and whenever you ask for peek , it gives you the smallest element
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        pq.offer(1);
        pq.offer(0);
        pq.offer(5);
        pq.offer(4);
        System.out.println(pq);
        System.out.println(pq.peek());
        pq.poll();
        System.out.println(pq.peek());
        pq.poll();
        System.out.println(pq.peek());
        System.out.println(pq.size());

        while (!pq.isEmpty()) {
            System.out.println(pq.peek());
            pq.poll();
        }
    };

    public static void explainHashMap() {
        // key, value
        // roll number is the key
        // name is the value
        // does not store keys in sorted order
        HashMap<Integer, String> mp = new HashMap<>();
        mp.put(1, "Raj");
        mp.put(2, "Vikram");
        mp.put(3, "Rima");
        System.out.println(mp);
        System.out.println(mp.size());

        System.out.println(mp.get(2));
        System.out.println(mp.remove(2));
        System.out.println(mp.size());
        System.out.println(mp);
    };

    public static void explainTreeMap() {
        // key, value
        // roll number is the key
        // name is the value
        // always store keys in sorted order
        // doesn't store duplicate
        TreeMap<Integer, String> mp = new TreeMap<>();
        mp.put(12, "Vikram");
        mp.put(1, "Raj");
        mp.put(8, "Rima");
        mp.put(8, "Raju");
        System.out.println(mp);
        System.out.println(mp.size());
        System.out.println(mp.ceilingKey(2));
        System.out.println(mp.floorKey(2));
        Set<Integer> st = mp.keySet();
        System.out.println(st);

        System.out.println(mp.get(2));
        System.out.println(mp.remove(2));
        System.out.println(mp.size());
        System.out.println(mp);
    };

    public static void explainIterator() {
        List<Integer> al = new ArrayList<>();
        al.add(1);
        al.add(5);
        al.add(4);

        Iterator<Integer> iterator = al.iterator();
        while (iterator.hasNext()) {
            Integer num = iterator.next();
            System.out.println(num);
        }
    };

    public static void explaimCommonAlgo() {
        List<Integer> al = new ArrayList<>();
        al.add(1);
        al.add(1);
        al.add(5);
        al.add(4);
        al.add(1);

        Collections.sort(al);
        System.out.println(al);
        System.out.println(Collections.min(al));
        System.out.println(Collections.max(al));
        System.out.println(Collections.frequency(al, 1));
        Collections.reverse(al);
        System.out.println(al);

        int ans = 1;
        int num = (int) Math.pow(2, 5);

        for (int i = 1; i <= 5; i++) {
            ans = ans * 2;
        }
        ;

        System.out.println(ans);
        System.out.println(num);
    };

    public static void explainCustomComparator() {
        ArrayList<Integer> al = new ArrayList<>();
        al.add(1);
        al.add(5);
        al.add(4);
        Collections.sort(al, new Comparator<Integer>() {
            @Override 
            public int compare(Integer num1 , Integer num2) {
                // num1 < num2
                // order is wrong
                if (num1 < num2) {
                    return 1;
                } else if (num1 > num2) {
                    return -1;
                }
                return 0;
            }
        });
        // Lambda function
        // [num1 , num2]
        // num1 < num2 -> wrong order , swap means return positive
        // num1 < num2 -> correct order
        Collections.sort(al, (num1 , num2) -> num2 - num1);
        System.out.println(al);
    }

    public static void main(String[] args) {
        // Data objData1 = new Data(7, "Striver", 56);
        // Data objData2 = new Data(9, "TUF", 21);

        // explainArrayList();
        // explainLinkedList();
        // explainstack();
        // explainVector();
        // explainHashSet();
        // explainTreeSet();
        // explainQueue();
        // explainPriorityQueue();
        // explainHashMap();
        // explainTreeMap();
        // explainIterator();
        // explaimCommonAlgo();
        explainCustomComparator();
    }
}
