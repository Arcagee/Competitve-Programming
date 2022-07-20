
// aabbbccccaaaaaa
int ans = 1, cnt = 1;
for(int i = 1; i < str.size(); i++) {
    if(str[i] == str[i - 1]) {
        cnt++;
    } else {
        ans = max(ans, cnt);
        cnt = 1;
    } 
}

ans = max(ans, cnt);

cout << ans << endl;