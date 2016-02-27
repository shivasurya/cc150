import java.util.Random;

class insertionSort{
	int[] data;
	public insertionSort(){
		data = generateRandom();
		sort();
		print();
	}
	public void sort(){
		for(int i=1;i<100000;i++){
			int value = data[i];
			int hole = i;
			while(hole>0 && value < data[hole-1]){
				data[hole] = data[hole-1];
				hole = hole - 1;
			}
			data[hole] = value;
		}
	}
	public void print(){
		for(int i=0;i<100000;i++)
			System.out.print(data[i]+" ");
	}
	public int[] generateRandom(){
		int i=0;
		data = new int[100000];
		Random number = new Random();
		for(i=0;i<100000;i++)
			data[i] = number.nextInt(100000);
		return data;
	}
	public static void main(String[] args) {
		
		insertionSort obj = new insertionSort();
		
	}
}