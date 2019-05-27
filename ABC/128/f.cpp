
int main() {

    pair<pair<string, int>, int> p;
    // vector< pair <pair <string, int>, int> > p;

    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        string in;
        int t;
        cin >> in >> t;
        p.push_back(make_pair(make_pair(in, -t), i));
    }

    sort(p.begin(), p.end());
    for (int i = 0; i < N; i++) {
        cout << p[i].second + 1 << endl;
    }
}