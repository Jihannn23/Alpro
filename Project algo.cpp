void checkout() {
    system("CLS");
    header();
    gotoxy(40, 8);
    cout << "---------- CHECKOUT ----------";

    ifstream inFile("tamu123.txt");
    ifstream kamarfile("kamar.txt");
    ofstream kamaroutfile("temp1.txt");
    ofstream outFile("temp.txt");

    if (!inFile.is_open() || !outFile.is_open() 
        || !kamarfile.is_open() || !kamaroutfile.is_open() ) {
        cout << "Error opening files." << endl;
        return;
    }

    string roomNumber;
    gotoxy(40, 9);
    cout << "Masukkan No. Kamar  :";
    cin >> roomNumber;

    string line;
    string line2;
    bool found1 = false;
    bool found2 = false;
    int row = 11;
