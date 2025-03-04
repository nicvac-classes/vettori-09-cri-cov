#include <iostream>
>

using namespace std;



int main() {
    int n;

    cout << "quanti giri sono stati effettuati?" << endl;
    cin >> n;
    double hamilton[n];
    double verstappen[n];
    int i;

    i = 0;
    for (i = 0; i <= n - 1; i++) {
        cout << "quale tempo ha fatto hamilton nel giro " << i + 1 << endl;
        cin >> hamilton[i];
    }
    for (i = 0; i <= n - 1; i++) {
        cout << "tempo di hamilton nel giro " << i + 1 << ": " << hamilton[i] << endl;
    }
    for (i = 0; i <= n - 1; i++) {
        cout << "quale tempo ha fatto verstappen nel giro " << i + 1 << endl;
        cin >> verstappen[i];
    }
    for (i = 0; i <= n - 1; i++) {
        cout << "tempo di verstappen nel giro " << i + 1 << ": " << verstappen[i] << endl;
    }
    double th;

    th = 0;
    for (i = 0; i <= n - 1; i++) {
        th = th + hamilton[i];
    }
    cout << "il tempo totale di hamilton è " << th << endl;
    double tv;

    tv = 0;
    for (i = 0; i <= n - 1; i++) {
        tv = tv + verstappen[i];
    }
    cout << "il tempo totale di verstappen è " << tv << endl;
    if (th > tv) {
        cout << "il vincitore è verstappen" << endl;
    } else {
        if (th == tv) {
            cout << "sono arrivati a parimerito" << endl;
        } else {
            cout << "il vincitore è hamilton" << endl;
        }
    }
    double minh;
    int gh;

    minh = hamilton[0];
    gh = 1;
    for (i = 1; i <= n - 1; i++) {
        if (minh > hamilton[i]) {
            minh = hamilton[i];
            gh = i + 1;
        }
    }
    cout << "il giro più veloce di hamilton è il giro " << gh << " il tempo è " << minh << endl;
    int gv;
    double minv;

    minv = verstappen[0];
    gv = 1;
    for (i = 1; i <= n - 1; i++) {
        if (minv > verstappen[i]) {
            minv = verstappen[i];
            gv = i + 1;
        }
    }
    cout << "il giro più veloce di verstappen è il giro " << gv << " il tempo è " << minv << endl;
    if (minv > minh) {
        cout << "il giro più veloce è di hamilton" << endl;
    } else {
        if (minv == minh) {
            if (gv > gh) {
                cout << "il giro più veloce è di hamilton" << endl;
            } else {
                if (gv == gh) {
                    cout << "entrambi hanno effettuato il giro più veloce" << endl;
                } else {
                    cout << "il giro più veloce è di verstappen" << endl;
                }
            }
        } else {
            cout << "il giro più veloce è di verstappen" << endl;
        }
    }
    return 0;
}

