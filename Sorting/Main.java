class Main {

    static void swapping(int data[], int a, int b) {
        int t = data[a];
        data[a] = data[b];
        data[b] = t;
    }

        void bubbleSort(int data[]) {
            int size = data.length;
            boolean swap = true;
            for (int pass = 0;swap&& pass < size - 1; pass++) {
                swap =false ;
                for (int i = 0;i < size - pass - 1; i++) {
                    if (data[i] > data[i + 1]) {

                        swapping(data, i, i + 1);
                        swap = true;
                    }
                }
            }

        }

    public static void main(String[] args) {
        int arr[] = { 5, 7, 2, 6, 1 };

        Main obj = new Main();
        obj.bubbleSort(arr);
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }

}