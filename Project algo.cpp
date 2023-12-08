void daftarTamu() {
    system("CLS");
    header();
    int row = 9;

    gotoxy(40, 7);
    cout << "--------- DAFTAR TAMU ---------" << endl << endl;

    ifstream infile("tamu123.txt");

    if (!infile.is_open()) {
        cout << "File not found." << endl;
        return;
    }
    string noKamar;
    while (infile >> noKamar) {
        string line;
        for (int i = 0; i < 5; ++i) {
            getline(infile, line);
            gotoxy(42, row++);
            cout << line << endl;
        }
        gotoxy(30, row++);
        cout << setfill('=') << setw(50) << "" << endl;
    }
    infile.close();
}
