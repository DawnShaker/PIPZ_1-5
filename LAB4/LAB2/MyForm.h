/*#pragma once

#using <System.dll>
#using <System.Drawing.dll>
#using <System.Windows.Forms.dll>

namespace LAB6A
{
    using namespace System;
    using namespace System::Drawing;
    using namespace System::Globalization;
    using namespace System::IO;
    using namespace System::Windows::Forms;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm()
        {
            InitializeComponent();
        }

    protected:
        ~MyForm()
        {
            if (picture != nullptr && picture->Image != nullptr)
            {
                Image^ image = picture->Image;
                picture->Image = nullptr;
                delete image;
            }
            if (components != nullptr)
                delete components;
        }

    private:
        System::ComponentModel::Container^ components;
    private: System::Windows::Forms::MenuStrip^ menu;
    private: System::Windows::Forms::ToolStripMenuItem^ fileMenu;
    private: System::Windows::Forms::ToolStripMenuItem^ openMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ saveMenuItem;
    private: System::Windows::Forms::ToolStripSeparator^ fileSeparator;
    private: System::Windows::Forms::ToolStripMenuItem^ exitMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ pageMenu;
    private: System::Windows::Forms::ToolStripMenuItem^ arrayMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ matrixMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ imageMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ operations;
    private: System::Windows::Forms::ToolStripMenuItem^ calculateMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ transposeMenuItem;
    private: System::Windows::Forms::ToolStrip^ tools;
    private: System::Windows::Forms::ToolStripButton^ calculateToolButton;
    private: System::Windows::Forms::ToolStripButton^ transposeToolButton;
    private: System::Windows::Forms::ToolStripSeparator^ toolSeparator;
    private: System::Windows::Forms::ToolStripButton^ openToolButton;
    private: System::Windows::Forms::ToolStripButton^ saveToolButton;
    private: System::Windows::Forms::TabControl^ tabs;
    private: System::Windows::Forms::TabPage^ tabArray;
    private: System::Windows::Forms::TabPage^ tabMatrix;
    private: System::Windows::Forms::TabPage^ tabImage;
    private: System::Windows::Forms::Label^ arrayTitle;
    private: System::Windows::Forms::Label^ countLabel;
    private: System::Windows::Forms::NumericUpDown^ countInput;
    private: System::Windows::Forms::Button^ createArrayButton;
    private: System::Windows::Forms::Button^ calculateArrayButton;
    private: System::Windows::Forms::DataGridView^ arrayGrid;
    private: System::Windows::Forms::Label^ statusArray;
    private: System::Windows::Forms::Label^ matrixTitle;
    private: System::Windows::Forms::Label^ matrixSizeLabel;
    private: System::Windows::Forms::NumericUpDown^ matrixSize;
    private: System::Windows::Forms::Button^ createMatrixButton;
    private: System::Windows::Forms::Button^ transposeButton;
    private: System::Windows::Forms::Label^ sourceMatrixLabel;
    private: System::Windows::Forms::Label^ transposedMatrixLabel;
    private: System::Windows::Forms::DataGridView^ matrixGrid;
    private: System::Windows::Forms::DataGridView^ transposedGrid;
    private: System::Windows::Forms::Label^ statusMatrix;
    private: System::Windows::Forms::Panel^ imagePanel;
    private: System::Windows::Forms::PictureBox^ picture;
    private: System::Windows::Forms::Panel^ imageButtons;
    private: System::Windows::Forms::Button^ openImageButton;
    private: System::Windows::Forms::Button^ saveImageButton;
    private: System::Windows::Forms::Label^ statusImage;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ chargeColumn;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ forceColumn;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ fieldColumn;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ matrixColumn1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ matrixColumn2;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ matrixColumn3;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ transposedColumn1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ transposedColumn2;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ transposedColumn3;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->menu = (gcnew System::Windows::Forms::MenuStrip());
               this->fileMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->openMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->saveMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->fileSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
               this->exitMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->pageMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->arrayMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->matrixMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->imageMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->operations = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->calculateMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->transposeMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->tools = (gcnew System::Windows::Forms::ToolStrip());
               this->calculateToolButton = (gcnew System::Windows::Forms::ToolStripButton());
               this->transposeToolButton = (gcnew System::Windows::Forms::ToolStripButton());
               this->toolSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
               this->openToolButton = (gcnew System::Windows::Forms::ToolStripButton());
               this->saveToolButton = (gcnew System::Windows::Forms::ToolStripButton());
               this->tabs = (gcnew System::Windows::Forms::TabControl());
               this->tabArray = (gcnew System::Windows::Forms::TabPage());
               this->arrayTitle = (gcnew System::Windows::Forms::Label());
               this->countLabel = (gcnew System::Windows::Forms::Label());
               this->countInput = (gcnew System::Windows::Forms::NumericUpDown());
               this->createArrayButton = (gcnew System::Windows::Forms::Button());
               this->calculateArrayButton = (gcnew System::Windows::Forms::Button());
               this->arrayGrid = (gcnew System::Windows::Forms::DataGridView());
               this->chargeColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
               this->forceColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
               this->fieldColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
               this->statusArray = (gcnew System::Windows::Forms::Label());
               this->tabMatrix = (gcnew System::Windows::Forms::TabPage());
               this->matrixTitle = (gcnew System::Windows::Forms::Label());
               this->matrixSizeLabel = (gcnew System::Windows::Forms::Label());
               this->matrixSize = (gcnew System::Windows::Forms::NumericUpDown());
               this->createMatrixButton = (gcnew System::Windows::Forms::Button());
               this->transposeButton = (gcnew System::Windows::Forms::Button());
               this->sourceMatrixLabel = (gcnew System::Windows::Forms::Label());
               this->transposedMatrixLabel = (gcnew System::Windows::Forms::Label());
               this->matrixGrid = (gcnew System::Windows::Forms::DataGridView());
               this->matrixColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
               this->matrixColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
               this->matrixColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
               this->transposedGrid = (gcnew System::Windows::Forms::DataGridView());
               this->transposedColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
               this->transposedColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
               this->transposedColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
               this->statusMatrix = (gcnew System::Windows::Forms::Label());
               this->tabImage = (gcnew System::Windows::Forms::TabPage());
               this->imagePanel = (gcnew System::Windows::Forms::Panel());
               this->picture = (gcnew System::Windows::Forms::PictureBox());
               this->imageButtons = (gcnew System::Windows::Forms::Panel());
               this->openImageButton = (gcnew System::Windows::Forms::Button());
               this->saveImageButton = (gcnew System::Windows::Forms::Button());
               this->statusImage = (gcnew System::Windows::Forms::Label());
               this->menu->SuspendLayout();
               this->tools->SuspendLayout();
               this->tabs->SuspendLayout();
               this->tabArray->SuspendLayout();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->countInput))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrayGrid))->BeginInit();
               this->tabMatrix->SuspendLayout();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixSize))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixGrid))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->transposedGrid))->BeginInit();
               this->tabImage->SuspendLayout();
               this->imagePanel->SuspendLayout();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture))->BeginInit();
               this->imageButtons->SuspendLayout();
               this->SuspendLayout();
               // 
               // menu
               // 
               this->menu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                   this->fileMenu, this->pageMenu,
                       this->operations
               });
               this->menu->Location = System::Drawing::Point(0, 0);
               this->menu->Name = L"menu";
               this->menu->Size = System::Drawing::Size(950, 24);
               this->menu->TabIndex = 2;
               // 
               // fileMenu
               // 
               this->fileMenu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
                   this->openMenuItem,
                       this->saveMenuItem, this->fileSeparator, this->exitMenuItem
               });
               this->fileMenu->Name = L"fileMenu";
               this->fileMenu->Size = System::Drawing::Size(48, 20);
               this->fileMenu->Text = L"Файл";
               // 
               // openMenuItem
               // 
               this->openMenuItem->Name = L"openMenuItem";
               this->openMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
               this->openMenuItem->Size = System::Drawing::Size(244, 22);
               this->openMenuItem->Text = L"Відкрити зображення";
               this->openMenuItem->Click += gcnew System::EventHandler(this, &MyForm::OpenImage_Click);
               // 
               // saveMenuItem
               // 
               this->saveMenuItem->Name = L"saveMenuItem";
               this->saveMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
               this->saveMenuItem->Size = System::Drawing::Size(244, 22);
               this->saveMenuItem->Text = L"Зберегти зображення";
               this->saveMenuItem->Click += gcnew System::EventHandler(this, &MyForm::SaveImage_Click);
               // 
               // fileSeparator
               // 
               this->fileSeparator->Name = L"fileSeparator";
               this->fileSeparator->Size = System::Drawing::Size(241, 6);
               // 
               // exitMenuItem
               // 
               this->exitMenuItem->Name = L"exitMenuItem";
               this->exitMenuItem->Size = System::Drawing::Size(244, 22);
               this->exitMenuItem->Text = L"Вихід";
               this->exitMenuItem->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
               // 
               // pageMenu
               // 
               this->pageMenu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                   this->arrayMenuItem,
                       this->matrixMenuItem, this->imageMenuItem
               });
               this->pageMenu->Name = L"pageMenu";
               this->pageMenu->Size = System::Drawing::Size(64, 20);
               this->pageMenu->Text = L"Вкладки";
               // 
               // arrayMenuItem
               // 
               this->arrayMenuItem->Name = L"arrayMenuItem";
               this->arrayMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D1));
               this->arrayMenuItem->Size = System::Drawing::Size(242, 22);
               this->arrayMenuItem->Text = L"Одновимірний масив";
               this->arrayMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ShowArray_Click);
               // 
               // matrixMenuItem
               // 
               this->matrixMenuItem->Name = L"matrixMenuItem";
               this->matrixMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D2));
               this->matrixMenuItem->Size = System::Drawing::Size(242, 22);
               this->matrixMenuItem->Text = L"Матриця";
               this->matrixMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ShowMatrix_Click);
               // 
               // imageMenuItem
               // 
               this->imageMenuItem->Name = L"imageMenuItem";
               this->imageMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D3));
               this->imageMenuItem->Size = System::Drawing::Size(242, 22);
               this->imageMenuItem->Text = L"Зображення";
               this->imageMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ShowImage_Click);
               // 
               // operations
               // 
               this->operations->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                   this->calculateMenuItem,
                       this->transposeMenuItem
               });
               this->operations->Name = L"operations";
               this->operations->Size = System::Drawing::Size(88, 20);
               this->operations->Text = L"Обчислення";
               // 
               // calculateMenuItem
               // 
               this->calculateMenuItem->Name = L"calculateMenuItem";
               this->calculateMenuItem->Size = System::Drawing::Size(212, 22);
               this->calculateMenuItem->Text = L"Напруженість поля";
               this->calculateMenuItem->Click += gcnew System::EventHandler(this, &MyForm::CalculateArray_Click);
               // 
               // transposeMenuItem
               // 
               this->transposeMenuItem->Name = L"transposeMenuItem";
               this->transposeMenuItem->Size = System::Drawing::Size(212, 22);
               this->transposeMenuItem->Text = L"Транспонувати матрицю";
               this->transposeMenuItem->Click += gcnew System::EventHandler(this, &MyForm::Transpose_Click);
               // 
               // tools
               // 
               this->tools->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
                   this->calculateToolButton, this->transposeToolButton,
                       this->toolSeparator, this->openToolButton, this->saveToolButton
               });
               this->tools->Location = System::Drawing::Point(0, 24);
               this->tools->Name = L"tools";
               this->tools->Size = System::Drawing::Size(950, 25);
               this->tools->TabIndex = 1;
               // 
               // calculateToolButton
               // 
               this->calculateToolButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
               this->calculateToolButton->Name = L"calculateToolButton";
               this->calculateToolButton->Size = System::Drawing::Size(82, 22);
               this->calculateToolButton->Text = L"Обчислити E";
               this->calculateToolButton->Click += gcnew System::EventHandler(this, &MyForm::CalculateArray_Click);
               // 
               // transposeToolButton
               // 
               this->transposeToolButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
               this->transposeToolButton->Name = L"transposeToolButton";
               this->transposeToolButton->Size = System::Drawing::Size(95, 22);
               this->transposeToolButton->Text = L"Транспонувати";
               this->transposeToolButton->Click += gcnew System::EventHandler(this, &MyForm::Transpose_Click);
               // 
               // toolSeparator
               // 
               this->toolSeparator->Name = L"toolSeparator";
               this->toolSeparator->Size = System::Drawing::Size(6, 25);
               // 
               // openToolButton
               // 
               this->openToolButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
               this->openToolButton->Name = L"openToolButton";
               this->openToolButton->Size = System::Drawing::Size(129, 22);
               this->openToolButton->Text = L"Відкрити зображення";
               this->openToolButton->Click += gcnew System::EventHandler(this, &MyForm::OpenImage_Click);
               // 
               // saveToolButton
               // 
               this->saveToolButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
               this->saveToolButton->Name = L"saveToolButton";
               this->saveToolButton->Size = System::Drawing::Size(131, 22);
               this->saveToolButton->Text = L"Зберегти зображення";
               this->saveToolButton->Click += gcnew System::EventHandler(this, &MyForm::SaveImage_Click);
               // 
               // tabs
               // 
               this->tabs->Controls->Add(this->tabArray);
               this->tabs->Controls->Add(this->tabMatrix);
               this->tabs->Controls->Add(this->tabImage);
               this->tabs->Dock = System::Windows::Forms::DockStyle::Fill;
               this->tabs->Location = System::Drawing::Point(0, 49);
               this->tabs->Name = L"tabs";
               this->tabs->SelectedIndex = 0;
               this->tabs->Size = System::Drawing::Size(950, 611);
               this->tabs->TabIndex = 0;
               // 
               // tabArray
               // 
               this->tabArray->Controls->Add(this->arrayTitle);
               this->tabArray->Controls->Add(this->countLabel);
               this->tabArray->Controls->Add(this->countInput);
               this->tabArray->Controls->Add(this->createArrayButton);
               this->tabArray->Controls->Add(this->calculateArrayButton);
               this->tabArray->Controls->Add(this->arrayGrid);
               this->tabArray->Controls->Add(this->statusArray);
               this->tabArray->Location = System::Drawing::Point(4, 22);
               this->tabArray->Name = L"tabArray";
               this->tabArray->Size = System::Drawing::Size(942, 585);
               this->tabArray->TabIndex = 0;
               this->tabArray->Text = L"Одновимірний масив";
               this->tabArray->UseVisualStyleBackColor = true;
               // 
               // arrayTitle
               // 
               this->arrayTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
               this->arrayTitle->Location = System::Drawing::Point(18, 16);
               this->arrayTitle->Name = L"arrayTitle";
               this->arrayTitle->Size = System::Drawing::Size(470, 24);
               this->arrayTitle->TabIndex = 0;
               this->arrayTitle->Text = L"Завдання 1. Напруженість поля E = F / q";
               // 
               // countLabel
               // 
               this->countLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
               this->countLabel->Location = System::Drawing::Point(18, 56);
               this->countLabel->Name = L"countLabel";
               this->countLabel->Size = System::Drawing::Size(195, 24);
               this->countLabel->TabIndex = 1;
               this->countLabel->Text = L"Кількість вимірювань:";
               // 
               // countInput
               // 
               this->countInput->Location = System::Drawing::Point(231, 56);
               this->countInput->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
               this->countInput->Name = L"countInput";
               this->countInput->Size = System::Drawing::Size(46, 20);
               this->countInput->TabIndex = 2;
               this->countInput->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
               // 
               // createArrayButton
               // 
               this->createArrayButton->Location = System::Drawing::Point(299, 50);
               this->createArrayButton->Name = L"createArrayButton";
               this->createArrayButton->Size = System::Drawing::Size(135, 32);
               this->createArrayButton->TabIndex = 3;
               this->createArrayButton->Text = L"Створити рядки";
               this->createArrayButton->UseVisualStyleBackColor = true;
               this->createArrayButton->Click += gcnew System::EventHandler(this, &MyForm::CreateArray_Click);
               // 
               // calculateArrayButton
               // 
               this->calculateArrayButton->Location = System::Drawing::Point(442, 50);
               this->calculateArrayButton->Name = L"calculateArrayButton";
               this->calculateArrayButton->Size = System::Drawing::Size(135, 32);
               this->calculateArrayButton->TabIndex = 4;
               this->calculateArrayButton->Text = L"Обчислити";
               this->calculateArrayButton->UseVisualStyleBackColor = true;
               this->calculateArrayButton->Click += gcnew System::EventHandler(this, &MyForm::CalculateArray_Click);
               // 
               // arrayGrid
               // 
               this->arrayGrid->AllowUserToAddRows = false;
               this->arrayGrid->AllowUserToDeleteRows = false;
               this->arrayGrid->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                   | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->arrayGrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
               this->arrayGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
                   this->chargeColumn,
                       this->forceColumn, this->fieldColumn
               });
               this->arrayGrid->Location = System::Drawing::Point(18, 105);
               this->arrayGrid->Name = L"arrayGrid";
               this->arrayGrid->RowHeadersVisible = false;
               this->arrayGrid->Size = System::Drawing::Size(700, 419);
               this->arrayGrid->TabIndex = 5;
               // 
               // chargeColumn
               // 
               this->chargeColumn->HeaderText = L"Заряд q (Кл)";
               this->chargeColumn->Name = L"chargeColumn";
               // 
               // forceColumn
               // 
               this->forceColumn->HeaderText = L"Сила F (Н)";
               this->forceColumn->Name = L"forceColumn";
               // 
               // fieldColumn
               // 
               this->fieldColumn->HeaderText = L"E (Н/Кл)";
               this->fieldColumn->Name = L"fieldColumn";
               this->fieldColumn->ReadOnly = true;
               // 
               // statusArray
               // 
               this->statusArray->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
               this->statusArray->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
               this->statusArray->Location = System::Drawing::Point(18, 534);
               this->statusArray->Name = L"statusArray";
               this->statusArray->Size = System::Drawing::Size(700, 24);
               this->statusArray->TabIndex = 6;
               this->statusArray->Text = L"Введіть додатні заряди q (Кл) та сили F (Н).";
               // 
               // tabMatrix
               // 
               this->tabMatrix->Controls->Add(this->matrixTitle);
               this->tabMatrix->Controls->Add(this->matrixSizeLabel);
               this->tabMatrix->Controls->Add(this->matrixSize);
               this->tabMatrix->Controls->Add(this->createMatrixButton);
               this->tabMatrix->Controls->Add(this->transposeButton);
               this->tabMatrix->Controls->Add(this->sourceMatrixLabel);
               this->tabMatrix->Controls->Add(this->transposedMatrixLabel);
               this->tabMatrix->Controls->Add(this->matrixGrid);
               this->tabMatrix->Controls->Add(this->transposedGrid);
               this->tabMatrix->Controls->Add(this->statusMatrix);
               this->tabMatrix->Location = System::Drawing::Point(4, 22);
               this->tabMatrix->Name = L"tabMatrix";
               this->tabMatrix->Size = System::Drawing::Size(942, 585);
               this->tabMatrix->TabIndex = 1;
               this->tabMatrix->Text = L"Матриця";
               this->tabMatrix->UseVisualStyleBackColor = true;
               // 
               // matrixTitle
               // 
               this->matrixTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
               this->matrixTitle->Location = System::Drawing::Point(18, 16);
               this->matrixTitle->Name = L"matrixTitle";
               this->matrixTitle->Size = System::Drawing::Size(510, 24);
               this->matrixTitle->TabIndex = 0;
               this->matrixTitle->Text = L"Завдання 2. Транспонування квадратної матриці";
               // 
               // matrixSizeLabel
               // 
               this->matrixSizeLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
               this->matrixSizeLabel->Location = System::Drawing::Point(18, 56);
               this->matrixSizeLabel->Name = L"matrixSizeLabel";
               this->matrixSizeLabel->Size = System::Drawing::Size(95, 24);
               this->matrixSizeLabel->TabIndex = 1;
               this->matrixSizeLabel->Text = L"Розмір N:";
               // 
               // matrixSize
               // 
               this->matrixSize->Location = System::Drawing::Point(122, 56);
               this->matrixSize->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
               this->matrixSize->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
               this->matrixSize->Name = L"matrixSize";
               this->matrixSize->Size = System::Drawing::Size(70, 20);
               this->matrixSize->TabIndex = 2;
               this->matrixSize->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
               // 
               // createMatrixButton
               // 
               this->createMatrixButton->Location = System::Drawing::Point(205, 50);
               this->createMatrixButton->Name = L"createMatrixButton";
               this->createMatrixButton->Size = System::Drawing::Size(153, 32);
               this->createMatrixButton->TabIndex = 3;
               this->createMatrixButton->Text = L"Створити матрицю";
               this->createMatrixButton->UseVisualStyleBackColor = true;
               this->createMatrixButton->Click += gcnew System::EventHandler(this, &MyForm::CreateMatrix_Click);
               // 
               // transposeButton
               // 
               this->transposeButton->Location = System::Drawing::Point(367, 50);
               this->transposeButton->Name = L"transposeButton";
               this->transposeButton->Size = System::Drawing::Size(150, 32);
               this->transposeButton->TabIndex = 4;
               this->transposeButton->Text = L"Транспонувати";
               this->transposeButton->UseVisualStyleBackColor = true;
               this->transposeButton->Click += gcnew System::EventHandler(this, &MyForm::Transpose_Click);
               // 
               // sourceMatrixLabel
               // 
               this->sourceMatrixLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
               this->sourceMatrixLabel->Location = System::Drawing::Point(18, 106);
               this->sourceMatrixLabel->Name = L"sourceMatrixLabel";
               this->sourceMatrixLabel->Size = System::Drawing::Size(300, 24);
               this->sourceMatrixLabel->TabIndex = 5;
               this->sourceMatrixLabel->Text = L"Початкова матриця";
               // 
               // transposedMatrixLabel
               // 
               this->transposedMatrixLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
               this->transposedMatrixLabel->Location = System::Drawing::Point(475, 106);
               this->transposedMatrixLabel->Name = L"transposedMatrixLabel";
               this->transposedMatrixLabel->Size = System::Drawing::Size(320, 24);
               this->transposedMatrixLabel->TabIndex = 6;
               this->transposedMatrixLabel->Text = L"Транспонована матриця";
               // 
               // matrixGrid
               // 
               this->matrixGrid->AllowUserToAddRows = false;
               this->matrixGrid->AllowUserToDeleteRows = false;
               this->matrixGrid->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                   | System::Windows::Forms::AnchorStyles::Left));
               this->matrixGrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
               this->matrixGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
                   this->matrixColumn1,
                       this->matrixColumn2, this->matrixColumn3
               });
               this->matrixGrid->Location = System::Drawing::Point(18, 136);
               this->matrixGrid->Name = L"matrixGrid";
               this->matrixGrid->RowHeadersVisible = false;
               this->matrixGrid->Size = System::Drawing::Size(420, 389);
               this->matrixGrid->TabIndex = 7;
               // 
               // matrixColumn1
               // 
               this->matrixColumn1->HeaderText = L"1";
               this->matrixColumn1->Name = L"matrixColumn1";
               // 
               // matrixColumn2
               // 
               this->matrixColumn2->HeaderText = L"2";
               this->matrixColumn2->Name = L"matrixColumn2";
               // 
               // matrixColumn3
               // 
               this->matrixColumn3->HeaderText = L"3";
               this->matrixColumn3->Name = L"matrixColumn3";
               // 
               // transposedGrid
               // 
               this->transposedGrid->AllowUserToAddRows = false;
               this->transposedGrid->AllowUserToDeleteRows = false;
               this->transposedGrid->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->transposedGrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
               this->transposedGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
                   this->transposedColumn1,
                       this->transposedColumn2, this->transposedColumn3
               });
               this->transposedGrid->Location = System::Drawing::Point(475, 136);
               this->transposedGrid->Name = L"transposedGrid";
               this->transposedGrid->ReadOnly = true;
               this->transposedGrid->RowHeadersVisible = false;
               this->transposedGrid->Size = System::Drawing::Size(420, 389);
               this->transposedGrid->TabIndex = 8;
               // 
               // transposedColumn1
               // 
               this->transposedColumn1->HeaderText = L"1";
               this->transposedColumn1->Name = L"transposedColumn1";
               this->transposedColumn1->ReadOnly = true;
               // 
               // transposedColumn2
               // 
               this->transposedColumn2->HeaderText = L"2";
               this->transposedColumn2->Name = L"transposedColumn2";
               this->transposedColumn2->ReadOnly = true;
               // 
               // transposedColumn3
               // 
               this->transposedColumn3->HeaderText = L"3";
               this->transposedColumn3->Name = L"transposedColumn3";
               this->transposedColumn3->ReadOnly = true;
               // 
               // statusMatrix
               // 
               this->statusMatrix->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
               this->statusMatrix->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
               this->statusMatrix->Location = System::Drawing::Point(18, 534);
               this->statusMatrix->Name = L"statusMatrix";
               this->statusMatrix->Size = System::Drawing::Size(730, 24);
               this->statusMatrix->TabIndex = 9;
               this->statusMatrix->Text = L"Елементи міняються місцями через змінну temp.";
               // 
               // tabImage
               // 
               this->tabImage->Controls->Add(this->imagePanel);
               this->tabImage->Controls->Add(this->imageButtons);
               this->tabImage->Location = System::Drawing::Point(4, 22);
               this->tabImage->Name = L"tabImage";
               this->tabImage->Size = System::Drawing::Size(942, 585);
               this->tabImage->TabIndex = 2;
               this->tabImage->Text = L"Зображення";
               this->tabImage->UseVisualStyleBackColor = true;
               // 
               // imagePanel
               // 
               this->imagePanel->AutoScroll = true;
               this->imagePanel->BackColor = System::Drawing::Color::Gainsboro;
               this->imagePanel->Controls->Add(this->picture);
               this->imagePanel->Dock = System::Windows::Forms::DockStyle::Fill;
               this->imagePanel->Location = System::Drawing::Point(0, 60);
               this->imagePanel->Name = L"imagePanel";
               this->imagePanel->Size = System::Drawing::Size(942, 525);
               this->imagePanel->TabIndex = 0;
               // 
               // picture
               // 
               this->picture->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
               this->picture->Location = System::Drawing::Point(0, 0);
               this->picture->Name = L"picture";
               this->picture->Size = System::Drawing::Size(300, 200);
               this->picture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
               this->picture->TabIndex = 0;
               this->picture->TabStop = false;
               this->picture->Click += gcnew System::EventHandler(this, &MyForm::picture_Click);
               // 
               // imageButtons
               // 
               this->imageButtons->Controls->Add(this->openImageButton);
               this->imageButtons->Controls->Add(this->saveImageButton);
               this->imageButtons->Controls->Add(this->statusImage);
               this->imageButtons->Dock = System::Windows::Forms::DockStyle::Top;
               this->imageButtons->Location = System::Drawing::Point(0, 0);
               this->imageButtons->Name = L"imageButtons";
               this->imageButtons->Size = System::Drawing::Size(942, 60);
               this->imageButtons->TabIndex = 1;
               // 
               // openImageButton
               // 
               this->openImageButton->Location = System::Drawing::Point(16, 12);
               this->openImageButton->Name = L"openImageButton";
               this->openImageButton->Size = System::Drawing::Size(140, 32);
               this->openImageButton->TabIndex = 0;
               this->openImageButton->Text = L"Відкрити";
               this->openImageButton->UseVisualStyleBackColor = true;
               this->openImageButton->Click += gcnew System::EventHandler(this, &MyForm::OpenImage_Click);
               // 
               // saveImageButton
               // 
               this->saveImageButton->Location = System::Drawing::Point(165, 12);
               this->saveImageButton->Name = L"saveImageButton";
               this->saveImageButton->Size = System::Drawing::Size(140, 32);
               this->saveImageButton->TabIndex = 1;
               this->saveImageButton->Text = L"Зберегти";
               this->saveImageButton->UseVisualStyleBackColor = true;
               this->saveImageButton->Click += gcnew System::EventHandler(this, &MyForm::SaveImage_Click);
               // 
               // statusImage
               // 
               this->statusImage->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
               this->statusImage->Location = System::Drawing::Point(320, 17);
               this->statusImage->Name = L"statusImage";
               this->statusImage->Size = System::Drawing::Size(580, 24);
               this->statusImage->TabIndex = 2;
               this->statusImage->Text = L"Зображення показується у вихідному масштабі.";
               // 
               // MyForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(950, 660);
               this->Controls->Add(this->tabs);
               this->Controls->Add(this->tools);
               this->Controls->Add(this->menu);
               this->MainMenuStrip = this->menu;
               this->MinimumSize = System::Drawing::Size(790, 560);
               this->Name = L"MyForm";
               this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
               this->Text = L"ИПЗ-25 Кукиль Данило ЛАБ6";
               this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
               this->menu->ResumeLayout(false);
               this->menu->PerformLayout();
               this->tools->ResumeLayout(false);
               this->tools->PerformLayout();
               this->tabs->ResumeLayout(false);
               this->tabArray->ResumeLayout(false);
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->countInput))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrayGrid))->EndInit();
               this->tabMatrix->ResumeLayout(false);
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixSize))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixGrid))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->transposedGrid))->EndInit();
               this->tabImage->ResumeLayout(false);
               this->imagePanel->ResumeLayout(false);
               this->imagePanel->PerformLayout();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture))->EndInit();
               this->imageButtons->ResumeLayout(false);
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion

           void MyForm_Load(Object^ sender, EventArgs^ e)
           {
               CreateArrayGrid();
               CreateMatrixGrid();
           }

           bool ReadDouble(Object^ obj, double% value)
           {
               if (obj == nullptr)
                   return false;
               String^ text = obj->ToString()->Trim()->Replace(',', '.');
               if (!Double::TryParse(text, NumberStyles::Float,
                   CultureInfo::InvariantCulture, value))
                   return false;
               return !Double::IsNaN(value) && !Double::IsInfinity(value);
           }

           String^ FormatNumber(double number)
           {
               return String::Format(CultureInfo::InvariantCulture, L"{0:G10}", number);
           }

           void CreateArrayGrid()
           {
               arrayGrid->Columns->Clear();
               arrayGrid->Columns->Add(L"q", L"Заряд q (Кл)");
               arrayGrid->Columns->Add(L"F", L"Сила F (Н)");
               int column = arrayGrid->Columns->Add(L"E", L"E (Н/Кл)");
               arrayGrid->Columns[column]->ReadOnly = true;
               arrayGrid->Rows->Clear();
               int n = Decimal::ToInt32(countInput->Value);
               for (int i = 0; i < n; i++)
               {
                   int index = arrayGrid->Rows->Add();
                   arrayGrid->Rows[index]->Cells[0]->Value = FormatNumber(1.0e-6 * (i + 1));
                   arrayGrid->Rows[index]->Cells[1]->Value = FormatNumber(0.001 * (i + 1));
               }
               statusArray->Text = L"Заповніть значення q та F, потім натисніть 'Обчислити'.";
           }

           void CreateMatrixGrid()
           {
               int n = Decimal::ToInt32(matrixSize->Value);
               matrixGrid->Columns->Clear();
               transposedGrid->Columns->Clear();
               for (int j = 0; j < n; j++)
               {
                   matrixGrid->Columns->Add(String::Format(L"a{0}", j), Convert::ToString(j + 1));
                   transposedGrid->Columns->Add(String::Format(L"b{0}", j), Convert::ToString(j + 1));
               }
               matrixGrid->Rows->Clear();
               transposedGrid->Rows->Clear();
               for (int i = 0; i < n; i++)
               {
                   int row = matrixGrid->Rows->Add();
                   transposedGrid->Rows->Add();
                   for (int j = 0; j < n; j++)
                       matrixGrid->Rows[row]->Cells[j]->Value = Convert::ToString(i * n + j + 1);
               }
               statusMatrix->Text = L"Задайте елементи матриці та натисніть 'Транспонувати'.";
           }

           void CreateArray_Click(Object^ sender, EventArgs^ e) { CreateArrayGrid(); }
           void CreateMatrix_Click(Object^ sender, EventArgs^ e) { CreateMatrixGrid(); }
           void ShowArray_Click(Object^ sender, EventArgs^ e) { tabs->SelectedTab = tabArray; }
           void ShowMatrix_Click(Object^ sender, EventArgs^ e) { tabs->SelectedTab = tabMatrix; }
           void ShowImage_Click(Object^ sender, EventArgs^ e) { tabs->SelectedTab = tabImage; }
           void Exit_Click(Object^ sender, EventArgs^ e) { this->Close(); }

           void CalculateArray_Click(Object^ sender, EventArgs^ e)
           {
               tabs->SelectedTab = tabArray;
               arrayGrid->EndEdit();
               int n = arrayGrid->Rows->Count;
               array<double>^ q = gcnew array<double>(n);
               array<double>^ F = gcnew array<double>(n);
               array<double>^ E = gcnew array<double>(n);
               for (int i = 0; i < n; i++)
               {
                   double charge = 0;
                   double force = 0;
                   if (!ReadDouble(arrayGrid->Rows[i]->Cells[0]->Value, charge) || charge <= 0 ||
                       !ReadDouble(arrayGrid->Rows[i]->Cells[1]->Value, force) || force < 0)
                   {
                       MessageBox::Show(String::Format(L"Рядок {0}: q має бути > 0, F має бути >= 0.", i + 1),
                           L"Помилка введення", MessageBoxButtons::OK, MessageBoxIcon::Error);
                       return;
                   }
                   q[i] = charge;
                   F[i] = force;
                   E[i] = F[i] / q[i];
                   if (Double::IsInfinity(E[i]))
                   {
                       MessageBox::Show(L"Результат виходить за межі допустимих чисел.");
                       return;
                   }
               }
               for (int i = 0; i < n; i++)
                   arrayGrid->Rows[i]->Cells[2]->Value = FormatNumber(E[i]);
               statusArray->Text = String::Format(L"Обчислено напруженість для {0} вимірювань.", n);
           }

           void Transpose_Click(Object^ sender, EventArgs^ e)
           {
               tabs->SelectedTab = tabMatrix;
               matrixGrid->EndEdit();
               int n = matrixGrid->Rows->Count;
               array<double, 2>^ data = gcnew array<double, 2>(n, n);
               for (int i = 0; i < n; i++)
                   for (int j = 0; j < n; j++)
                   {
                       double value = 0;
                       if (!ReadDouble(matrixGrid->Rows[i]->Cells[j]->Value, value))
                       {
                           MessageBox::Show(String::Format(L"Некоректне число у рядку {0}, стовпці {1}.", i + 1, j + 1), L"Помилка введення",
                               MessageBoxButtons::OK, MessageBoxIcon::Error);
                           return;
                       }
                       data[i, j] = value;
                   }
               for (int i = 0; i < n; i++)
                   for (int j = i + 1; j < n; j++)
                   {
                       double temp = data[i, j];
                       data[i, j] = data[j, i];
                       data[j, i] = temp;
                   }
               for (int i = 0; i < n; i++)
                   for (int j = 0; j < n; j++)
                       transposedGrid->Rows[i]->Cells[j]->Value = FormatNumber(data[i, j]);
               statusMatrix->Text = String::Format(L"Матрицю транспоновано (N = {0}).", n);
           }

           void OpenImage_Click(Object^ sender, EventArgs^ e)
           {
               tabs->SelectedTab = tabImage;
               OpenFileDialog^ dialog = gcnew OpenFileDialog();
               dialog->Title = L"Відкрити зображення";
               dialog->Filter = L"Зображення|*.png;*.jpg;*.jpeg;*.bmp;*.gif|Усі файли|*.*";
               if (dialog->ShowDialog() != static_cast<System::Windows::Forms::DialogResult>(1))
                   return;
               try
               {
                   FileStream^ stream = gcnew FileStream(dialog->FileName, FileMode::Open, FileAccess::Read);
                   Image^ temp = nullptr;
                   Bitmap^ image = nullptr;
                   try
                   {
                       temp = Image::FromStream(stream);
                       image = gcnew Bitmap(temp);
                   }
                   finally
                   {
                       if (temp != nullptr) delete temp;
                       delete stream;
                   }
                   Image^ old = picture->Image;
                   picture->Image = image;
                   if (old != nullptr) delete old;
                   statusImage->Text = Path::GetFileName(dialog->FileName) + L" (100%)";
               }
               catch (Exception^ ex)
               {
                   MessageBox::Show(ex->Message, L"Помилка відкриття", MessageBoxButtons::OK, MessageBoxIcon::Error);
               }
           }

           void SaveImage_Click(Object^ sender, EventArgs^ e)
           {
               tabs->SelectedTab = tabImage;
               if (picture->Image == nullptr)
               {
                   MessageBox::Show(L"Спочатку відкрийте зображення.");
                   return;
               }
               SaveFileDialog^ dialog = gcnew SaveFileDialog();
               dialog->Title = L"Зберегти зображення";
               dialog->Filter = L"PNG|*.png|JPEG|*.jpg|Bitmap|*.bmp|GIF|*.gif";
               dialog->DefaultExt = L"png";
               dialog->AddExtension = true;
               dialog->OverwritePrompt = true;
               if (dialog->ShowDialog() != static_cast<System::Windows::Forms::DialogResult>(1))
                   return;
               try
               {
                   System::Drawing::Imaging::ImageFormat^ format = System::Drawing::Imaging::ImageFormat::Png;
                   if (dialog->FilterIndex == 2) format = System::Drawing::Imaging::ImageFormat::Jpeg;
                   else if (dialog->FilterIndex == 3) format = System::Drawing::Imaging::ImageFormat::Bmp;
                   else if (dialog->FilterIndex == 4) format = System::Drawing::Imaging::ImageFormat::Gif;
                   picture->Image->Save(dialog->FileName, format);
                   statusImage->Text = L"Збережено: " + Path::GetFileName(dialog->FileName);
               }
               catch (Exception^ ex)
               {
                   MessageBox::Show(ex->Message, L"Помилка збереження", MessageBoxButtons::OK, MessageBoxIcon::Error);
               }
           }

    private: System::Void picture_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}*/


#pragma once

#using <System.dll>
#using <System.Drawing.dll>
#using <System.Windows.Forms.dll>

namespace LAB6B
{
    using namespace System;
    using namespace System::Drawing;
    using namespace System::Globalization;
    using namespace System::IO;
    using namespace System::Text;
    using namespace System::Text::RegularExpressions;
    using namespace System::Windows::Forms;

    public ref class MyForm : public Form
    {
    private:
        MenuStrip^ menu;
        ToolStrip^ tools;
        RichTextBox^ inputText;
        RichTextBox^ outputText;
        Label^ fileLabel;
        Label^ countLabel;
        String^ inputPath;

        ToolStripMenuItem^ MakeMenuItem(String^ caption, Keys shortcut, EventHandler^ action)
        {
            ToolStripMenuItem^ item = gcnew ToolStripMenuItem(caption);
            if (shortcut != Keys::None)
                item->ShortcutKeys = shortcut;
            item->Click += action;
            return item;
        }

        ToolStripButton^ MakeToolButton(String^ caption, EventHandler^ action)
        {
            ToolStripButton^ item = gcnew ToolStripButton(caption);
            item->DisplayStyle = ToolStripItemDisplayStyle::Text;
            item->Click += action;
            return item;
        }

        void InitializeComponent()
        {
            this->Text = L"ИПЗ-25 Кукиль Данило ЛАБ6_2";
            this->ClientSize = System::Drawing::Size(940, 600);
            this->MinimumSize = System::Drawing::Size(760, 480);
            this->StartPosition = FormStartPosition::CenterScreen;
            inputPath = L"";

            menu = gcnew MenuStrip();
            ToolStripMenuItem^ fileMenu = gcnew ToolStripMenuItem(L"Файл");
            fileMenu->DropDownItems->Add(MakeMenuItem(L"Створити файл даних", Keys::Control | Keys::N,
                gcnew EventHandler(this, &MyForm::CreateFile_Click)));
            fileMenu->DropDownItems->Add(MakeMenuItem(L"Відкрити файл", Keys::Control | Keys::O,
                gcnew EventHandler(this, &MyForm::OpenFile_Click)));
            fileMenu->DropDownItems->Add(MakeMenuItem(L"Зберегти вхідні дані", Keys::Control | Keys::S,
                gcnew EventHandler(this, &MyForm::SaveInput_Click)));
            fileMenu->DropDownItems->Add(MakeMenuItem(L"Зберегти результат", Keys::Control | Keys::Shift | Keys::S,
                gcnew EventHandler(this, &MyForm::SaveOutput_Click)));
            fileMenu->DropDownItems->Add(gcnew ToolStripSeparator());
            fileMenu->DropDownItems->Add(MakeMenuItem(L"Вихід", Keys::None,
                gcnew EventHandler(this, &MyForm::Exit_Click)));
            ToolStripMenuItem^ processMenu = gcnew ToolStripMenuItem(L"Обробка");
            processMenu->DropDownItems->Add(MakeMenuItem(L"Порахувати парні числа", Keys::Control | Keys::R,
                gcnew EventHandler(this, &MyForm::Calculate_Click)));
            menu->Items->Add(fileMenu);
            menu->Items->Add(processMenu);
            this->MainMenuStrip = menu;
            menu->Dock = DockStyle::Top;

            tools = gcnew ToolStrip();
            tools->Dock = DockStyle::Top;
            tools->Items->Add(MakeToolButton(L"Створити", gcnew EventHandler(this, &MyForm::CreateFile_Click)));
            tools->Items->Add(MakeToolButton(L"Відкрити", gcnew EventHandler(this, &MyForm::OpenFile_Click)));
            tools->Items->Add(MakeToolButton(L"Зберегти дані", gcnew EventHandler(this, &MyForm::SaveInput_Click)));
            tools->Items->Add(gcnew ToolStripSeparator());
            tools->Items->Add(MakeToolButton(L"Обчислити", gcnew EventHandler(this, &MyForm::Calculate_Click)));
            tools->Items->Add(MakeToolButton(L"Зберегти результат", gcnew EventHandler(this, &MyForm::SaveOutput_Click)));

            TableLayoutPanel^ layout = gcnew TableLayoutPanel();
            layout->Dock = DockStyle::Fill;
            layout->Padding = System::Windows::Forms::Padding(14);
            layout->ColumnCount = 2;
            layout->RowCount = 3;
            layout->ColumnStyles->Add(gcnew ColumnStyle(SizeType::Percent, 50));
            layout->ColumnStyles->Add(gcnew ColumnStyle(SizeType::Percent, 50));
            layout->RowStyles->Add(gcnew RowStyle(SizeType::Absolute, 36));
            layout->RowStyles->Add(gcnew RowStyle(SizeType::Percent, 100));
            layout->RowStyles->Add(gcnew RowStyle(SizeType::Absolute, 45));

            Label^ inputLabel = gcnew Label();
            inputLabel->Text = L"Вхідний файл (цілі числа через пробіл або з нового рядка)";
            inputLabel->Dock = DockStyle::Fill;
            inputLabel->Font = gcnew System::Drawing::Font(L"Segoe UI", 10, FontStyle::Bold);
            Label^ outputLabel = gcnew Label();
            outputLabel->Text = L"Вихідний файл (результат обробки)";
            outputLabel->Dock = DockStyle::Fill;
            outputLabel->Font = gcnew System::Drawing::Font(L"Segoe UI", 10, FontStyle::Bold);
            layout->Controls->Add(inputLabel, 0, 0);
            layout->Controls->Add(outputLabel, 1, 0);

            inputText = gcnew RichTextBox();
            inputText->Dock = DockStyle::Fill;
            inputText->Font = gcnew System::Drawing::Font(L"Consolas", 11);
            inputText->WordWrap = true;
            inputText->Text = L"12 7 0 -4 15 18 23 31 42 9";
            layout->Controls->Add(inputText, 0, 1);
            outputText = gcnew RichTextBox();
            outputText->Dock = DockStyle::Fill;
            outputText->Font = gcnew System::Drawing::Font(L"Consolas", 11);
            outputText->ReadOnly = true;
            outputText->BackColor = Color::WhiteSmoke;
            layout->Controls->Add(outputText, 1, 1);

            fileLabel = gcnew Label();
            fileLabel->Dock = DockStyle::Fill;
            fileLabel->Text = L"Вхідні дані можна редагувати.";
            layout->Controls->Add(fileLabel, 0, 2);
            countLabel = gcnew Label();
            countLabel->Dock = DockStyle::Fill;
            countLabel->Text = L"Натисніть 'Обчислити'.";
            layout->Controls->Add(countLabel, 1, 2);

            this->Controls->Add(layout);
            this->Controls->Add(tools);
            this->Controls->Add(menu);
        }

        String^ AskSavePath(String^ title, String^ currentName)
        {
            SaveFileDialog^ dialog = gcnew SaveFileDialog();
            dialog->Title = title;
            dialog->Filter = L"Текстові файли|*.txt|Усі файли|*.*";
            dialog->DefaultExt = L"txt";
            dialog->AddExtension = true;
            dialog->OverwritePrompt = true;
            dialog->FileName = currentName;
            if (dialog->ShowDialog() != System::Windows::Forms::DialogResult::OK)
                return nullptr;
            return dialog->FileName;
        }

        bool SaveText(String^ path, String^ content)
        {
            try
            {
                File::WriteAllText(path, content, gcnew UTF8Encoding(true));
                return true;
            }
            catch (Exception^ ex)
            {
                MessageBox::Show(ex->Message, L"Помилка збереження", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return false;
            }
        }

        void CreateFile_Click(Object^ sender, EventArgs^ e)
        {
            if (String::IsNullOrWhiteSpace(inputText->Text))
                inputText->Text = L"12 7 0 -4 15 18 23 31 42 9";
            String^ path = AskSavePath(L"Створити файл даних", L"numbers.txt");
            if (path != nullptr && SaveText(path, inputText->Text))
            {
                inputPath = path;
                fileLabel->Text = L"Створено: " + Path::GetFileName(path);
                outputText->Clear();
                countLabel->Text = L"Файл створено. Можна виконати обробку.";
            }
        }

        void OpenFile_Click(Object^ sender, EventArgs^ e)
        {
            OpenFileDialog^ dialog = gcnew OpenFileDialog();
            dialog->Title = L"Відкрити файл з цілими числами";
            dialog->Filter = L"Текстові файли|*.txt|Усі файли|*.*";
            dialog->CheckFileExists = true;
            if (dialog->ShowDialog() != System::Windows::Forms::DialogResult::OK)
                return;
            try
            {
                inputText->Text = File::ReadAllText(dialog->FileName, Encoding::UTF8);
                inputPath = dialog->FileName;
                outputText->Clear();
                fileLabel->Text = L"Відкрито: " + Path::GetFileName(inputPath);
                countLabel->Text = L"Виконайте обчислення.";
            }
            catch (Exception^ ex)
            {
                MessageBox::Show(ex->Message, L"Помилка відкриття", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

        void SaveInput_Click(Object^ sender, EventArgs^ e)
        {
            String^ name = String::IsNullOrEmpty(inputPath) ? L"numbers.txt" : Path::GetFileName(inputPath);
            String^ path = AskSavePath(L"Зберегти вхідні дані", name);
            if (path != nullptr && SaveText(path, inputText->Text))
            {
                inputPath = path;
                fileLabel->Text = L"Збережено: " + Path::GetFileName(path);
            }
        }

        void SaveOutput_Click(Object^ sender, EventArgs^ e)
        {
            if (String::IsNullOrWhiteSpace(outputText->Text))
            {
                MessageBox::Show(L"Спочатку виконайте обробку даних.");
                return;
            }
            String^ path = AskSavePath(L"Зберегти результат", L"result.txt");
            if (path != nullptr && SaveText(path, outputText->Text))
                countLabel->Text = L"Збережено: " + Path::GetFileName(path);
        }

        void Calculate_Click(Object^ sender, EventArgs^ e)
        {
            String^ text = inputText->Text->Trim();
            if (String::IsNullOrWhiteSpace(text))
            {
                MessageBox::Show(L"Вхідний файл порожній.");
                return;
            }
            array<String^>^ tokens = Regex::Split(text, L"[\\s,;]+");
            array<int>^ data = gcnew array<int>(tokens->Length);
            for (int i = 0; i < tokens->Length; i++)
            {
                int value = 0;
                if (!Int32::TryParse(tokens[i], NumberStyles::Integer,
                    CultureInfo::InvariantCulture, value))
                {
                    MessageBox::Show(String::Format(L"Некоректне ціле число №{0}: {1}", i + 1, tokens[i]),
                        L"Помилка введення", MessageBoxButtons::OK, MessageBoxIcon::Error);
                    return;
                }
                data[i] = value;
            }
            int evenCount = 0;
            StringBuilder^ evenNumbers = gcnew StringBuilder();
            for each (int value in data)
                if (value % 2 == 0)
                {
                    evenCount++;
                    if (evenNumbers->Length > 0) evenNumbers->Append(L" ");
                    evenNumbers->Append(value);
                }
            outputText->Text = String::Format(L"Кількість компонентів: {0}\r\nКількість парних чисел: {1}\r\nПарні числа: {2}",
                data->Length, evenCount, evenCount == 0 ? L"відсутні" : evenNumbers->ToString());
            countLabel->Text = String::Format(L"Парних чисел: {0}", evenCount);
        }

        void Exit_Click(Object^ sender, EventArgs^ e) { this->Close(); }

    public:
        MyForm() { InitializeComponent(); }
    };
}
