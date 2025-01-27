template <typename T>
void insertionSort(T d[],int N){
    for(int i = 0;i < N -1;i++){
        cout << "Pass " << i+1 << ":";
        for(int j = i + 1;j > 0;j--){
            if(d[j] > d[j - 1]){
                T tmp = d[j];
                d[j] = d[j - 1];
                d[j - 1] = tmp;
            }
        }
        for(int k = 0;k < N;k++){
            cout << d[k] << " ";
        }
        cout << "\n";
    }
}