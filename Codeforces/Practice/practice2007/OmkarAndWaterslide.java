import java.util.*;
import java.io.*;

public class OmkarAndWaterslide {
    public static void main(String[] args) throws IOException{
        BufferedReader f = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(new OutputStreamWriter(System.out));
        int t = Integer.parseInt(f.readLine());
        while(t-->0){
            int n = Integer.parseInt(f.readLine());
            long[] arr = new long[n];
            StringTokenizer st = new StringTokenizer(f.readLine());
            for(int i = 0; i < n; i++){
                arr[i] = Integer.parseInt(st.nextToken());
            }
            long ans = 0;
            for(int i = 0; i < n-1; i++){
                ans+=Math.max(0, arr[i]-arr[i+1]);
            }
            out.println(ans);
        }
        out.close();
    }
}