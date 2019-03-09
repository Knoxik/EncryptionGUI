#include "EncryptionGUI.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	EncryptionGUI::EncryptionGUI EncryptionGUI;
	Application::Run(%EncryptionGUI);
}


// Функция шифрования
void Encrypt(System::String^ &word, System::String^ &buffer, System::String^ &charPass, System::Int16 &loopPass) {

	System::Char ch;

	for (int i = 0; i < loopPass; ++i) {
		for (int j = 0; j < buffer->Length; ++j) {
			ch = buffer[j];
			ch = ch + charPass[0];
			word += ch;
		}

		buffer = word;
		word = nullptr;
	}

	word = buffer;
}

// Функция дешифрования
void Decipher(System::String^ &word, System::String^ &buffer, System::String^ &charPass, System::Int16 &loopPass) {

	System::Char ch;

	buffer = buffer->Replace("\n", "");

	for (int i = 0; i < loopPass; ++i) {
		for (int j = 0; j < buffer->Length; ++j) {
			ch = buffer[j];
			ch = ch - charPass[0];
			word += ch;
		}

		buffer = word;
		word = nullptr;
	}

	word = buffer;
}