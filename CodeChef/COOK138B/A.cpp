// C
int removeDups(vector<int>& vect)
{
    long long int prod = vect[0];
    int res_ind = 1;
    for (int i = 1; i < vect.size(); i++) {
        if (prod % vect[i] != 0) {
            vect[res_ind++] = vect[i];
            prod *= vect[i];
        }
    }
    vect.erase(vect.begin() + res_ind, vect.end());
}
