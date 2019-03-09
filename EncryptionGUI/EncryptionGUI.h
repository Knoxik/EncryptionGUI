#pragma once

// Прототипы функций
void Encrypt(System::String^ &word, System::String^ &buffer, System::String^ &charPass, System::Int16 &loopPass);
void Decipher(System::String^ &word, System::String^ &buffer, System::String^ &charPass, System::Int16 &loopPass);

namespace EncryptionGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EncryptionGUI
	/// </summary>
	public ref class EncryptionGUI : public System::Windows::Forms::Form {

	public:
		EncryptionGUI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			// Приветственное сообщение
			MessageBox::Show("Программа для шифрования и дешифрования текста основанная на шифре Цезаря.\nВыполнил студент группы ППИ 211\nМельников А.А.");

			// Присваиваю значение для работы Входа и Выхода
			input->Text = "Message...";
			CharPass->Text = "Set Encryption Key";
			LoopPass->Text = "Set the loop";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EncryptionGUI()
		{
			if (components)
			{
				delete components;
			}
		}

		// Здесь линкуются все мои элементы в код
	private: System::Windows::Forms::RichTextBox^  input;
	private: System::Windows::Forms::Button^  encryption;
	private: System::Windows::Forms::RichTextBox^  output;
	private: System::Windows::Forms::Button^  refresh;
	private: System::Windows::Forms::CheckBox^  status;
	private: System::Windows::Forms::TextBox^  CharPass;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  stStatus1;
	private: System::Windows::Forms::Label^  stStatus;
	private: System::Windows::Forms::Label^  stMessage1;
	private: System::Windows::Forms::Label^  stMessage;
	private: System::Windows::Forms::Label^  stCharPass1;
	private: System::Windows::Forms::Label^  stCharPass;
	private: System::Windows::Forms::TextBox^  LoopPass;
	private: System::Windows::Forms::Label^  stLoop1;
	private: System::Windows::Forms::Label^  stLoop;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->input = (gcnew System::Windows::Forms::RichTextBox());
			this->encryption = (gcnew System::Windows::Forms::Button());
			this->output = (gcnew System::Windows::Forms::RichTextBox());
			this->refresh = (gcnew System::Windows::Forms::Button());
			this->status = (gcnew System::Windows::Forms::CheckBox());
			this->CharPass = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->stStatus1 = (gcnew System::Windows::Forms::Label());
			this->stStatus = (gcnew System::Windows::Forms::Label());
			this->stMessage1 = (gcnew System::Windows::Forms::Label());
			this->stMessage = (gcnew System::Windows::Forms::Label());
			this->stCharPass1 = (gcnew System::Windows::Forms::Label());
			this->stCharPass = (gcnew System::Windows::Forms::Label());
			this->LoopPass = (gcnew System::Windows::Forms::TextBox());
			this->stLoop = (gcnew System::Windows::Forms::Label());
			this->stLoop1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// input
			// 
			this->input->Location = System::Drawing::Point(12, 90);
			this->input->Name = L"input";
			this->input->Size = System::Drawing::Size(326, 96);
			this->input->TabIndex = 1;
			this->input->Text = L"";
			this->input->Enter += gcnew System::EventHandler(this, &EncryptionGUI::input_Enter);
			this->input->Leave += gcnew System::EventHandler(this, &EncryptionGUI::input_Leave);
			// 
			// encryption
			// 
			this->encryption->Location = System::Drawing::Point(135, 192);
			this->encryption->Name = L"encryption";
			this->encryption->Size = System::Drawing::Size(75, 23);
			this->encryption->TabIndex = 0;
			this->encryption->Text = L"Encryption";
			this->encryption->UseVisualStyleBackColor = true;
			this->encryption->Click += gcnew System::EventHandler(this, &EncryptionGUI::encryption_Click);
			// 
			// output
			// 
			this->output->Location = System::Drawing::Point(12, 221);
			this->output->Name = L"output";
			this->output->ReadOnly = true;
			this->output->Size = System::Drawing::Size(326, 96);
			this->output->TabIndex = 2;
			this->output->Text = L"";
			// 
			// refresh
			// 
			this->refresh->Location = System::Drawing::Point(263, 192);
			this->refresh->Name = L"refresh";
			this->refresh->Size = System::Drawing::Size(75, 23);
			this->refresh->TabIndex = 1;
			this->refresh->Text = L"Refresh";
			this->refresh->UseVisualStyleBackColor = true;
			this->refresh->Click += gcnew System::EventHandler(this, &EncryptionGUI::refresh_Click);
			// 
			// status
			// 
			this->status->AutoSize = true;
			this->status->Location = System::Drawing::Point(12, 196);
			this->status->Name = L"status";
			this->status->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->status->Size = System::Drawing::Size(69, 17);
			this->status->TabIndex = 3;
			this->status->Text = L"Decipher";
			this->status->UseVisualStyleBackColor = true;
			this->status->CheckedChanged += gcnew System::EventHandler(this, &EncryptionGUI::status_CheckedChanged);
			// 
			// CharPass
			// 
			this->CharPass->Location = System::Drawing::Point(13, 64);
			this->CharPass->Name = L"CharPass";
			this->CharPass->Size = System::Drawing::Size(100, 20);
			this->CharPass->TabIndex = 4;
			this->CharPass->Enter += gcnew System::EventHandler(this, &EncryptionGUI::CharPass_Enter);
			this->CharPass->Leave += gcnew System::EventHandler(this, &EncryptionGUI::CharPass_Leave);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel1->Controls->Add(this->stLoop1);
			this->panel1->Controls->Add(this->stStatus1);
			this->panel1->Controls->Add(this->stLoop);
			this->panel1->Controls->Add(this->stStatus);
			this->panel1->Controls->Add(this->stMessage1);
			this->panel1->Controls->Add(this->stMessage);
			this->panel1->Controls->Add(this->stCharPass1);
			this->panel1->Controls->Add(this->stCharPass);
			this->panel1->Location = System::Drawing::Point(246, 30);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(92, 54);
			this->panel1->TabIndex = 6;
			// 
			// stStatus1
			// 
			this->stStatus1->AutoSize = true;
			this->stStatus1->ForeColor = System::Drawing::Color::DarkRed;
			this->stStatus1->Location = System::Drawing::Point(63, 39);
			this->stStatus1->Name = L"stStatus1";
			this->stStatus1->Size = System::Drawing::Size(26, 13);
			this->stStatus1->TabIndex = 5;
			this->stStatus1->Text = L"Bad";
			// 
			// stStatus
			// 
			this->stStatus->AutoSize = true;
			this->stStatus->Location = System::Drawing::Point(3, 39);
			this->stStatus->Name = L"stStatus";
			this->stStatus->Size = System::Drawing::Size(40, 13);
			this->stStatus->TabIndex = 4;
			this->stStatus->Text = L"Status:";
			// 
			// stMessage1
			// 
			this->stMessage1->AutoSize = true;
			this->stMessage1->ForeColor = System::Drawing::Color::DarkRed;
			this->stMessage1->Location = System::Drawing::Point(63, 13);
			this->stMessage1->Name = L"stMessage1";
			this->stMessage1->Size = System::Drawing::Size(25, 13);
			this->stMessage1->TabIndex = 3;
			this->stMessage1->Text = L"Null";
			// 
			// stMessage
			// 
			this->stMessage->AutoSize = true;
			this->stMessage->Location = System::Drawing::Point(3, 13);
			this->stMessage->Name = L"stMessage";
			this->stMessage->Size = System::Drawing::Size(56, 13);
			this->stMessage->TabIndex = 2;
			this->stMessage->Text = L"Message: ";
			// 
			// stCharPass1
			// 
			this->stCharPass1->AutoSize = true;
			this->stCharPass1->ForeColor = System::Drawing::Color::DarkRed;
			this->stCharPass1->Location = System::Drawing::Point(63, 0);
			this->stCharPass1->Name = L"stCharPass1";
			this->stCharPass1->Size = System::Drawing::Size(25, 13);
			this->stCharPass1->TabIndex = 1;
			this->stCharPass1->Text = L"Null";
			// 
			// stCharPass
			// 
			this->stCharPass->AutoSize = true;
			this->stCharPass->Location = System::Drawing::Point(3, 0);
			this->stCharPass->Name = L"stCharPass";
			this->stCharPass->Size = System::Drawing::Size(58, 13);
			this->stCharPass->TabIndex = 0;
			this->stCharPass->Text = L"CharPass: ";
			// 
			// LoopPass
			// 
			this->LoopPass->Location = System::Drawing::Point(135, 64);
			this->LoopPass->Name = L"LoopPass";
			this->LoopPass->Size = System::Drawing::Size(75, 20);
			this->LoopPass->TabIndex = 7;
			this->LoopPass->Enter += gcnew System::EventHandler(this, &EncryptionGUI::LoopPass_Enter);
			this->LoopPass->Leave += gcnew System::EventHandler(this, &EncryptionGUI::LoopPass_Leave);
			// 
			// stLoop
			// 
			this->stLoop->AutoSize = true;
			this->stLoop->Location = System::Drawing::Point(3, 26);
			this->stLoop->Name = L"stLoop";
			this->stLoop->Size = System::Drawing::Size(34, 13);
			this->stLoop->TabIndex = 4;
			this->stLoop->Text = L"Loop:";
			// 
			// stLoop1
			// 
			this->stLoop1->AutoSize = true;
			this->stLoop1->ForeColor = System::Drawing::Color::DarkRed;
			this->stLoop1->Location = System::Drawing::Point(63, 26);
			this->stLoop1->Name = L"stLoop1";
			this->stLoop1->Size = System::Drawing::Size(25, 13);
			this->stLoop1->TabIndex = 5;
			this->stLoop1->Text = L"Null";
			// 
			// EncryptionGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(350, 330);
			this->Controls->Add(this->LoopPass);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->CharPass);
			this->Controls->Add(this->status);
			this->Controls->Add(this->output);
			this->Controls->Add(this->refresh);
			this->Controls->Add(this->encryption);
			this->Controls->Add(this->input);
			this->Name = L"EncryptionGUI";
			this->Text = L"Encryption";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	// Вызывается при нажатии на кнопку "Encrypt" / "Decipher"
	private: System::Void encryption_Click(System::Object^  sender, System::EventArgs^  e) {

		// Для хранения исходного текста
		System::String^ buffer;

		// Для хранения зашифрованного текста
		System::String^ word;

		// Для хранения символа шифрования
		System::String^ charPass;

		// Для хранения количества циклов шифрования
		System::Int16 loopPass;

		// Проверка на пустое поле и правильность данных
		if (input->Text == "Message...") { return; }
		if (CharPass->Text == "Set Encryption Key") { return; }
		try {

			int x;
			if ((LoopPass->Text != "Set the loop") && (x = Int16::Parse(LoopPass->Text)) < 0) {
				LoopPass->Text = System::Convert::ToString(1);
				stLoop1->ForeColor = System::Drawing::Color::Green;
				stLoop1->Text = LoopPass->Text;
			}
		}
		catch (FormatException^) {

			stStatus1->ForeColor = System::Drawing::Color::DarkRed;
			stStatus1->Text = "Bad";

			return;
		}

		// Проверка на выбор алгоритма (зашифровать или дешифровать)
		if (status->Checked == false)
			Encrypt(word, buffer = input->Text, charPass = CharPass->Text, loopPass = Int16::Parse(LoopPass->Text));
		else
			Decipher(word, buffer = input->Text, charPass = CharPass->Text, loopPass = Int16::Parse(LoopPass->Text));

		// Вывод сообщения "Good" после выполнения шифрования / дешифрования
		stStatus1->ForeColor = System::Drawing::Color::Green;
		stStatus1->Text = "Good";

		// Вывод результата
		output->Text = word;
	}

	// Вызывается при нажатии на кнопку "Refresh"
	private: System::Void refresh_Click(System::Object^  sender, System::EventArgs^  e) {

		// Обнуление переменных
		output->Text = nullptr;
		input->Text = nullptr;
		CharPass->Text = nullptr;
		status->Checked = false;

		input->Text = "Message...";
		CharPass->Text = "Set Encryption Key";
		LoopPass->Text = "Set the loop";

		stCharPass1->ForeColor = System::Drawing::Color::DarkRed;
		stCharPass1->Text = "Null";

		stMessage1->ForeColor = System::Drawing::Color::DarkRed;
		stMessage1->Text = "Null";

		stStatus1->ForeColor = System::Drawing::Color::DarkRed;
		stStatus1->Text = "Bad";

		stStatus1->ForeColor = System::Drawing::Color::DarkRed;
		stStatus1->Text = "Bad";

		stLoop1->ForeColor = System::Drawing::Color::DarkRed;
		stLoop1->Text = "Null";
	}

	// Checkbox
	private: System::Void status_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

		// Меняет текст в зависимости от выбранного режима (checkbox)
		if (status->Checked == true)
			encryption->Text = "Decipher";
		else
			encryption->Text = "Encryption";
	}

	// Следующие функции служат для динамического текста "Вход" и "Выход"
	private: System::Void input_Enter(System::Object^  sender, System::EventArgs^  e) {

		if (input->Text == "Message...")
			input->Text = "";
	}

	private: System::Void input_Leave(System::Object^  sender, System::EventArgs^  e) {

		if (input->Text == "") {
			input->Text = "Message...";

			stMessage1->ForeColor = System::Drawing::Color::DarkRed;
			stMessage1->Text = "Null";

			stStatus1->ForeColor = System::Drawing::Color::DarkRed;
			stStatus1->Text = "Bad";
		}

		else {
			stMessage1->ForeColor = System::Drawing::Color::Green;
			stMessage1->Text = "Ok";
		}
	}

	private: System::Void CharPass_Enter(System::Object^  sender, System::EventArgs^  e) {

		if (CharPass->Text == "Set Encryption Key")
			CharPass->Text = "";
	}

	private: System::Void CharPass_Leave(System::Object^  sender, System::EventArgs^  e) {

		if (CharPass->Text == "") {
			CharPass->Text = "Set Encryption Key";

			stCharPass1->ForeColor = System::Drawing::Color::DarkRed;
			stCharPass1->Text = "Null";

			stStatus1->ForeColor = System::Drawing::Color::DarkRed;
			stStatus1->Text = "Bad";
		}

		else {
			stCharPass1->ForeColor = System::Drawing::Color::Green;
			stCharPass1->Text = "Ok";
		}
	}

	private: System::Void LoopPass_Enter(System::Object^  sender, System::EventArgs^  e) {

		if (LoopPass->Text == "Set the loop")
			LoopPass->Text = "";
	}

	private: System::Void LoopPass_Leave(System::Object^  sender, System::EventArgs^  e) {

		if (LoopPass->Text == "") {
			LoopPass->Text = "Set the loop";

			stLoop1->ForeColor = System::Drawing::Color::DarkRed;
			stLoop1->Text = "Null";

			stStatus1->ForeColor = System::Drawing::Color::DarkRed;
			stStatus1->Text = "Bad";
		}

		else {
			stLoop1->ForeColor = System::Drawing::Color::Green;
			stLoop1->Text = LoopPass->Text;
		}
	}
	};
}