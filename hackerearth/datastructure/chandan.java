import java.util.*;
class chandan{
	public static void main(String[] args) {
		ArrayList obj = new ArrayList();
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int sum = 0;
		for(int i=0;i<n;i++){
			int temp = in.nextInt();
			obj.add(temp);
		}
		while(obj.contains(0)){
			int temp = (int)obj.indexOf(0);
			if(temp != 0 && temp !=-1){
				obj.remove(temp);
				obj.remove(temp-1);
			}
		}
		for(int i=0;i<obj.size();i++)
			sum = sum+(int)obj.get(i);
			
		System.out.println(sum);
	}
}