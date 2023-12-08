void checkout() {
    system("CLS");
    header();
    gotoxy(40, 8);
    cout << "---------- CHECKOUT ----------";

    ifstream inFile("tamu123.txt");
    ifstream kamarfile("kamar.txt");
    ofstream kamaroutfile("temp1.txt");
    ofstream outFile("temp.txt");

    if (!inFile.is_open() || !outFile.is_open() || !kamarfile.is_open() || !kamaroutfile.is_open() ) {
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

    while (getline(inFile, line)) {
        size_t pos = line.find("No. Kamar");
        if (pos != string::npos) {
            size_t roomPos = line.find(roomNumber);
            if (roomPos != string::npos) {
                found1 = true;
                gotoxy(43, row);
                cout << "------- KAMAR " << roomNumber << " ------- " << endl;
                gotoxy(40, ++row);
                cout << line << endl;
                for (int i = 0; i < 4; ++i) {
                    getline(inFile, line);
                    gotoxy(40, ++row);
                    cout << line << endl;
                }
                gotoxy(30, ++row);
                cout << setfill('=') << setw(50) << "" << endl;

                char confirmation;
                gotoxy(36, ++row);
                cout << "Apakah Anda yakin ingin checkout (Y/T)? ";
                cin >> confirmation;
                confirmation = toupper (confirmation);

                if (confirmation == 'Y') {
                    for (int i = 0; i < 4; ++i) {
                        getline(inFile, line);
			outFile << line << endl;
                    }
                     while (getline(kamarfile, line2)) {
			if (line2.find(roomNumber) == 0) {
				found2 = true;
				continue;
				}
			kamaroutfile << line2 << endl;
			}
			kamarfile.close();
			kamaroutfile.close();
			remove("kamar.txt");
			rename("temp1.txt", "kamar.txt");
			gotoxy(50, ++row);
			cout << "Checkout Berhasil" << endl;
                } else {
			kamarfile.close();
			kamaroutfile.close();
                	inFile.close();
                	outFile.close();
                    	return;
                }
            }
        }
    }
	
    if (!found1 || !found2) {
        gotoxy(50, ++row);
        cout << "Ruangan Kosong" << endl;
    }

    inFile.close();
    outFile.close();

    remove("tamu123.txt");
    rename("temp.txt", "tamu123.txt");
}
