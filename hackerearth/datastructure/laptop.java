import java.io.*;
import java.util.Map.Entry;
import java.util.*;
class laptop
{
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int num = Integer.parseInt(br.readLine());
		int temp = num;
		Map<String, Integer> map = new TreeMap<String, Integer>();
		while(temp-- > 0)
		{
			String name = br.readLine();
			if(!map.containsKey(name))
				map.put(name,0);
			else
				map.put(name,map.get(name)+1);
		}
		int max=0;
		for(Map.Entry<String,Integer> entry : map.entrySet()) {
  			if(entry.getValue() > max)
			{
				max = entry.getValue();
			}
		}	 
		for(Map.Entry<String,Integer> entry : map.entrySet()) {
  			if(entry.getValue() == max)
			{
				System.out.println(entry.getKey());
				break;
			}
		}
	}
}