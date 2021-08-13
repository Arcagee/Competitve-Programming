 cnt++;
                    l++;
                    r--;
                    continue;
                } break;
            }
            ans = max(ans, cnt);
        }


        for(int i = 0, j = n - 1; i < j; j--) {
            int l = i, r = j, cnt = 1;
            res = a[l] + a[r];
            l++;
            r--;
            while(l < r) {
                sum = a[l] + a[r];
                if(sum == res) {
                    cnt++;
                    l++;
                    r--;
                    continue;
                } break;
            }

            ans1 = max(ans1, cnt);
        }


        op max(ans, ans1) << endl;