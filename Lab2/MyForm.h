#pragma once

namespace Lab2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  showImage;
	protected:









	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  LEFT;
	private: System::Windows::Forms::Button^  RIGHT;
	private: System::Windows::Forms::Button^  UP;
	private: System::Windows::Forms::Button^  DOWN;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->showImage = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->LEFT = (gcnew System::Windows::Forms::Button());
			this->RIGHT = (gcnew System::Windows::Forms::Button());
			this->UP = (gcnew System::Windows::Forms::Button());
			this->DOWN = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// showImage
			// 
			this->showImage->Location = System::Drawing::Point(782, 73);
			this->showImage->Name = L"showImage";
			this->showImage->Size = System::Drawing::Size(75, 23);
			this->showImage->TabIndex = 0;
			this->showImage->Text = L"Show Image";
			this->showImage->UseVisualStyleBackColor = true;
			this->showImage->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(196, 166);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(300, 180);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// LEFT
			// 
			this->LEFT->Location = System::Drawing::Point(746, 224);
			this->LEFT->Name = L"LEFT";
			this->LEFT->Size = System::Drawing::Size(75, 23);
			this->LEFT->TabIndex = 6;
			this->LEFT->Text = L"Left";
			this->LEFT->UseVisualStyleBackColor = true;
			this->LEFT->Click += gcnew System::EventHandler(this, &MyForm::LEFT_Click);
			// 
			// RIGHT
			// 
			this->RIGHT->Location = System::Drawing::Point(827, 224);
			this->RIGHT->Name = L"RIGHT";
			this->RIGHT->Size = System::Drawing::Size(75, 23);
			this->RIGHT->TabIndex = 7;
			this->RIGHT->Text = L"Right";
			this->RIGHT->UseVisualStyleBackColor = true;
			this->RIGHT->Click += gcnew System::EventHandler(this, &MyForm::RIGHT_Click);
			// 
			// UP
			// 
			this->UP->Location = System::Drawing::Point(782, 195);
			this->UP->Name = L"UP";
			this->UP->Size = System::Drawing::Size(75, 23);
			this->UP->TabIndex = 8;
			this->UP->Text = L"Up";
			this->UP->UseVisualStyleBackColor = true;
			this->UP->Click += gcnew System::EventHandler(this, &MyForm::UP_Click);
			// 
			// DOWN
			// 
			this->DOWN->Location = System::Drawing::Point(782, 253);
			this->DOWN->Name = L"DOWN";
			this->DOWN->Size = System::Drawing::Size(75, 23);
			this->DOWN->TabIndex = 9;
			this->DOWN->Text = L"Down";
			this->DOWN->UseVisualStyleBackColor = true;
			this->DOWN->Click += gcnew System::EventHandler(this, &MyForm::DOWN_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(914, 639);
			this->Controls->Add(this->DOWN);
			this->Controls->Add(this->UP);
			this->Controls->Add(this->RIGHT);
			this->Controls->Add(this->LEFT);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->showImage);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		Graphics^ g;
		Bitmap^ bmp = gcnew Bitmap(L"helpme.bmp");

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		g = pictureBox1->CreateGraphics();
	}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	g->DrawImage(bmp, 0, 0);
}
private: System::Void UP_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox1->Location = Point(172, 17);
}
private: System::Void RIGHT_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox1->Location = Point(418, 168);
}
private: System::Void DOWN_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox1->Location = Point(158, 329);
}
private: System::Void LEFT_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox1->Location = Point(12,158);
}
};
}
