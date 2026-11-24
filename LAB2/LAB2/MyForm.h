#pragma once

namespace LAB2
{
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Globalization;
    using namespace System::Windows::Forms::DataVisualization::Charting;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::ComponentModel::Container^ components;

        TextBox^ textBox1;
        TextBox^ textBox2;
        TextBox^ textBox3;

        Label^ label1;
        Label^ label2;
        Label^ label3;

        Button^ button1;

        DataGridView^ dataGridView1;
        DataGridViewTextBoxColumn^ Column1;
        DataGridViewTextBoxColumn^ Column2;

        Chart^ chart1;
        PictureBox^ pictureBox1;

        MenuStrip^ menuStrip1;

        ToolStripMenuItem^ calculationToolStripMenuItem;
        ToolStripMenuItem^ clearToolStripMenuItem;
        ToolStripMenuItem^ calculateToolStripMenuItem;
        ToolStripSeparator^ menuSeparator1;
        ToolStripMenuItem^ exitToolStripMenuItem;

        System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
        ToolStripMenuItem^ contextCalculateToolStripMenuItem;
        ToolStripMenuItem^ contextClearToolStripMenuItem;    


    // Исправлено: явно указано пространство имён для ContextMenuStrip, чтобы избежать конфликта с одноимённым свойством Control
    // (эта строка добавлена минимально и безопасно).    

        ToolStripSeparator^ contextSeparator1;
        ToolStripMenuItem^ contextExitToolStripMenuItem;

        ToolStrip^ toolStrip1;
        ToolStripButton^ toolStripCalculateButton;
        ToolStripButton^ toolStripClearButton;
        ToolStripSeparator^ toolStripSeparator1;
        ToolStripButton^ toolStripExitButton;

#pragma region Windows Form Designer generated code

        void InitializeComponent(void)
        {
            this->components = (gcnew System::ComponentModel::Container());

            ChartArea^ chartArea1 =
                (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());

            Series^ series1 =
                (gcnew System::Windows::Forms::DataVisualization::Charting::Series());

            System::ComponentModel::ComponentResourceManager^ resources =
                (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));

            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());

            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());

            this->button1 = (gcnew System::Windows::Forms::Button());

            this->dataGridView1 =
                (gcnew System::Windows::Forms::DataGridView());

            this->Column1 =
                (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());

            this->Column2 =
                (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());

            this->chart1 =
                (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());

            this->pictureBox1 =
                (gcnew System::Windows::Forms::PictureBox());

            this->menuStrip1 =
                (gcnew System::Windows::Forms::MenuStrip());

            this->calculationToolStripMenuItem =
                (gcnew System::Windows::Forms::ToolStripMenuItem());

            this->clearToolStripMenuItem =
                (gcnew System::Windows::Forms::ToolStripMenuItem());

            this->calculateToolStripMenuItem =
                (gcnew System::Windows::Forms::ToolStripMenuItem());

            this->menuSeparator1 =
                (gcnew System::Windows::Forms::ToolStripSeparator());

            this->exitToolStripMenuItem =
                (gcnew System::Windows::Forms::ToolStripMenuItem());

            this->contextMenuStrip1 =
                (gcnew System::Windows::Forms::ContextMenuStrip(this->components));

            this->contextCalculateToolStripMenuItem =
                (gcnew System::Windows::Forms::ToolStripMenuItem());

            this->contextClearToolStripMenuItem =
                (gcnew System::Windows::Forms::ToolStripMenuItem());

            this->contextSeparator1 =
                (gcnew System::Windows::Forms::ToolStripSeparator());

            this->contextExitToolStripMenuItem =
                (gcnew System::Windows::Forms::ToolStripMenuItem());

            this->toolStrip1 =
                (gcnew System::Windows::Forms::ToolStrip());

            this->toolStripCalculateButton =
                (gcnew System::Windows::Forms::ToolStripButton());

            this->toolStripClearButton =
                (gcnew System::Windows::Forms::ToolStripButton());

            this->toolStripSeparator1 =
                (gcnew System::Windows::Forms::ToolStripSeparator());

            this->toolStripExitButton =
                (gcnew System::Windows::Forms::ToolStripButton());

            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>
                (this->dataGridView1))->BeginInit();

            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>
                (this->chart1))->BeginInit();

            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>
                (this->pictureBox1))->BeginInit();

            this->menuStrip1->SuspendLayout();
            this->contextMenuStrip1->SuspendLayout();
            this->toolStrip1->SuspendLayout();
            this->SuspendLayout();

            //
            // menuStrip1
            //
            this->menuStrip1->Items->AddRange(
                gcnew cli::array<ToolStripItem^>(1)
            {
                this->calculationToolStripMenuItem
            }
            );

            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(681, 24);
            this->menuStrip1->TabIndex = 0;
            this->menuStrip1->Text = L"menuStrip1";

            //
            // calculationToolStripMenuItem
            //
            this->calculationToolStripMenuItem->Name =
                L"calculationToolStripMenuItem";

            this->calculationToolStripMenuItem->Size =
                System::Drawing::Size(83, 20);

            this->calculationToolStripMenuItem->Text =
                L"Розрахунок";

            this->calculationToolStripMenuItem->DropDownItems->AddRange(
                gcnew cli::array<ToolStripItem^>(4)
            {
                this->clearToolStripMenuItem,
                    this->calculateToolStripMenuItem,
                    this->menuSeparator1,
                    this->exitToolStripMenuItem
            }
            );

            //
            // clearToolStripMenuItem
            //
            this->clearToolStripMenuItem->Name =
                L"clearToolStripMenuItem";

            this->clearToolStripMenuItem->Size =
                System::Drawing::Size(220, 22);

            this->clearToolStripMenuItem->Text =
                L"Очистити";

            this->clearToolStripMenuItem->ShortcutKeys =
                System::Windows::Forms::Keys::Alt |
                System::Windows::Forms::Keys::O;

            this->clearToolStripMenuItem->ShowShortcutKeys = true;

            this->clearToolStripMenuItem->Image =
                System::Drawing::SystemIcons::Information->ToBitmap();

            this->clearToolStripMenuItem->Click +=
                gcnew System::EventHandler(
                    this,
                    &MyForm::clearToolStripMenuItem_Click
                );

            //
            // calculateToolStripMenuItem
            //
            this->calculateToolStripMenuItem->Name =
                L"calculateToolStripMenuItem";

            this->calculateToolStripMenuItem->Size =
                System::Drawing::Size(220, 22);

            this->calculateToolStripMenuItem->Text =
                L"Розрахувати";

            this->calculateToolStripMenuItem->ShortcutKeys =
                System::Windows::Forms::Keys::Control |
                System::Windows::Forms::Keys::Alt |
                System::Windows::Forms::Keys::C;

            this->calculateToolStripMenuItem->ShowShortcutKeys = true;

            this->calculateToolStripMenuItem->Image =
                System::Drawing::SystemIcons::Application->ToBitmap();

            this->calculateToolStripMenuItem->Click +=
                gcnew System::EventHandler(
                    this,
                    &MyForm::calculateToolStripMenuItem_Click
                );

            //
            // menuSeparator1
            //
            this->menuSeparator1->Name = L"menuSeparator1";
            this->menuSeparator1->Size =
                System::Drawing::Size(217, 6);

            //
            // exitToolStripMenuItem
            //
            this->exitToolStripMenuItem->Name =
                L"exitToolStripMenuItem";

            this->exitToolStripMenuItem->Size =
                System::Drawing::Size(220, 22);

            this->exitToolStripMenuItem->Text =
                L"Вихід";

            this->exitToolStripMenuItem->ShortcutKeys =
                System::Windows::Forms::Keys::Alt |
                System::Windows::Forms::Keys::F4;

            this->exitToolStripMenuItem->ShowShortcutKeys = true;

            this->exitToolStripMenuItem->Image =
                System::Drawing::SystemIcons::Error->ToBitmap();

            this->exitToolStripMenuItem->Click +=
                gcnew System::EventHandler(
                    this,
                    &MyForm::exitToolStripMenuItem_Click
                );

            //
            // toolStrip1
            //
            this->toolStrip1->Items->AddRange(
                gcnew cli::array<ToolStripItem^>(4)
            {
                this->toolStripCalculateButton,
                    this->toolStripClearButton,
                    this->toolStripSeparator1,
                    this->toolStripExitButton
            }
            );

            this->toolStrip1->Location =
                System::Drawing::Point(0, 24);

            this->toolStrip1->Name = L"toolStrip1";

            this->toolStrip1->Size =
                System::Drawing::Size(681, 25);

            this->toolStrip1->TabIndex = 1;

            //
            // toolStripCalculateButton
            //
            this->toolStripCalculateButton->DisplayStyle =
                System::Windows::Forms::ToolStripItemDisplayStyle::ImageAndText;

            this->toolStripCalculateButton->Image =
                System::Drawing::SystemIcons::Application->ToBitmap();

            this->toolStripCalculateButton->Name =
                L"toolStripCalculateButton";

            this->toolStripCalculateButton->Size =
                System::Drawing::Size(100, 22);

            this->toolStripCalculateButton->Text =
                L"Розрахувати";

            this->toolStripCalculateButton->ToolTipText =
                L"Виконати розрахунок";

            this->toolStripCalculateButton->Click +=
                gcnew System::EventHandler(
                    this,
                    &MyForm::toolStripCalculateButton_Click
                );

            //
            // toolStripClearButton
            //
            this->toolStripClearButton->DisplayStyle =
                System::Windows::Forms::ToolStripItemDisplayStyle::ImageAndText;

            this->toolStripClearButton->Image =
                System::Drawing::SystemIcons::Information->ToBitmap();

            this->toolStripClearButton->Name =
                L"toolStripClearButton";

            this->toolStripClearButton->Size =
                System::Drawing::Size(82, 22);

            this->toolStripClearButton->Text =
                L"Очистити";

            this->toolStripClearButton->ToolTipText =
                L"Очистити поля, таблицю та графік";

            this->toolStripClearButton->Click +=
                gcnew System::EventHandler(
                    this,
                    &MyForm::toolStripClearButton_Click
                );

            //
            // toolStripSeparator1
            //
            this->toolStripSeparator1->Name =
                L"toolStripSeparator1";

            this->toolStripSeparator1->Size =
                System::Drawing::Size(6, 25);

            //
            // toolStripExitButton
            //
            this->toolStripExitButton->DisplayStyle =
                System::Windows::Forms::ToolStripItemDisplayStyle::ImageAndText;

            this->toolStripExitButton->Image =
                System::Drawing::SystemIcons::Error->ToBitmap();

            this->toolStripExitButton->Name =
                L"toolStripExitButton";

            this->toolStripExitButton->Size =
                System::Drawing::Size(63, 22);

            this->toolStripExitButton->Text =
                L"Вихід";

            this->toolStripExitButton->ToolTipText =
                L"Закрити програму";

            this->toolStripExitButton->Click +=
                gcnew System::EventHandler(
                    this,
                    &MyForm::toolStripExitButton_Click
                );

            //
            // contextMenuStrip1
            //
            this->contextMenuStrip1->Items->AddRange(
                gcnew cli::array<ToolStripItem^>(4)
            {
                this->contextCalculateToolStripMenuItem,
                    this->contextClearToolStripMenuItem,
                    this->contextSeparator1,
                    this->contextExitToolStripMenuItem
            }
            );

            this->contextMenuStrip1->Name =
                L"contextMenuStrip1";

            this->contextMenuStrip1->Size =
                System::Drawing::Size(151, 76);

            //
            // contextCalculateToolStripMenuItem
            //
            this->contextCalculateToolStripMenuItem->Name =
                L"contextCalculateToolStripMenuItem";

            this->contextCalculateToolStripMenuItem->Size =
                System::Drawing::Size(150, 22);

            this->contextCalculateToolStripMenuItem->Text =
                L"Розрахувати";

            this->contextCalculateToolStripMenuItem->Image =
                System::Drawing::SystemIcons::Application->ToBitmap();

            this->contextCalculateToolStripMenuItem->Click +=
                gcnew System::EventHandler(
                    this,
                    &MyForm::contextCalculateToolStripMenuItem_Click
                );

            //
            // contextClearToolStripMenuItem
            //
            this->contextClearToolStripMenuItem->Name =
                L"contextClearToolStripMenuItem";

            this->contextClearToolStripMenuItem->Size =
                System::Drawing::Size(150, 22);

            this->contextClearToolStripMenuItem->Text =
                L"Очистити";

            this->contextClearToolStripMenuItem->Image =
                System::Drawing::SystemIcons::Information->ToBitmap();

            this->contextClearToolStripMenuItem->Click +=
                gcnew System::EventHandler(
                    this,
                    &MyForm::contextClearToolStripMenuItem_Click
                );

            //
            // contextSeparator1
            //
            this->contextSeparator1->Name =
                L"contextSeparator1";

            this->contextSeparator1->Size =
                System::Drawing::Size(147, 6);

            //
            // contextExitToolStripMenuItem
            //
            this->contextExitToolStripMenuItem->Name =
                L"contextExitToolStripMenuItem";

            this->contextExitToolStripMenuItem->Size =
                System::Drawing::Size(150, 22);

            this->contextExitToolStripMenuItem->Text =
                L"Вихід";

            this->contextExitToolStripMenuItem->Image =
                System::Drawing::SystemIcons::Error->ToBitmap();

            this->contextExitToolStripMenuItem->Click +=
                gcnew System::EventHandler(
                    this,
                    &MyForm::contextExitToolStripMenuItem_Click
                );

            //
            // textBox1
            //
            this->textBox1->Location =
                System::Drawing::Point(38, 64);

            this->textBox1->Name = L"textBox1";

            this->textBox1->Size =
                System::Drawing::Size(100, 20);

            this->textBox1->TabIndex = 2;

            this->textBox1->KeyPress +=
                gcnew System::Windows::Forms::KeyPressEventHandler(
                    this,
                    &MyForm::textBox_KeyPress
                );

            //
            // textBox2
            //
            this->textBox2->Location =
                System::Drawing::Point(38, 86);

            this->textBox2->Name = L"textBox2";

            this->textBox2->Size =
                System::Drawing::Size(100, 20);

            this->textBox2->TabIndex = 3;

            this->textBox2->KeyPress +=
                gcnew System::Windows::Forms::KeyPressEventHandler(
                    this,
                    &MyForm::textBox_KeyPress
                );

            //
            // textBox3
            //
            this->textBox3->Location =
                System::Drawing::Point(38, 108);

            this->textBox3->Name = L"textBox3";

            this->textBox3->Size =
                System::Drawing::Size(100, 20);

            this->textBox3->TabIndex = 4;

            this->textBox3->KeyPress +=
                gcnew System::Windows::Forms::KeyPressEventHandler(
                    this,
                    &MyForm::textBox_KeyPress
                );

            //
            // label1
            //
            this->label1->AutoSize = true;

            this->label1->Location =
                System::Drawing::Point(12, 67);

            this->label1->Name = L"label1";

            this->label1->Size =
                System::Drawing::Size(20, 13);

            this->label1->TabIndex = 5;
            this->label1->Text = L"Xn";

            //
            // label2
            //
            this->label2->AutoSize = true;

            this->label2->Location =
                System::Drawing::Point(12, 89);

            this->label2->Name = L"label2";

            this->label2->Size =
                System::Drawing::Size(20, 13);

            this->label2->TabIndex = 6;
            this->label2->Text = L"Xk";

            //
            // label3
            //
            this->label3->AutoSize = true;

            this->label3->Location =
                System::Drawing::Point(12, 111);

            this->label3->Name = L"label3";

            this->label3->Size =
                System::Drawing::Size(20, 13);

            this->label3->TabIndex = 7;
            this->label3->Text = L"Dx";

            //
            // button1
            //
            this->button1->Location =
                System::Drawing::Point(38, 143);

            this->button1->Name = L"button1";

            this->button1->Size =
                System::Drawing::Size(100, 23);

            this->button1->TabIndex = 8;

            this->button1->Text = L"Розрахувати";

            this->button1->UseVisualStyleBackColor = true;

            this->button1->Click +=
                gcnew System::EventHandler(
                    this,
                    &MyForm::button1_Click
                );

            //
            // dataGridView1
            //
            this->dataGridView1->AllowUserToAddRows = false;
            this->dataGridView1->AllowUserToDeleteRows = false;

            this->dataGridView1->ColumnHeadersHeightSizeMode =
                System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;

            this->dataGridView1->Columns->AddRange(
                gcnew cli::array<DataGridViewColumn^>(2)
            {
                this->Column1,
                    this->Column2
            }
            );

            this->dataGridView1->ContextMenuStrip =
                this->contextMenuStrip1;

            this->dataGridView1->Location =
                System::Drawing::Point(15, 190);

            this->dataGridView1->Name =
                L"dataGridView1";

            this->dataGridView1->ReadOnly = true;

            this->dataGridView1->RowHeadersVisible = false;

            this->dataGridView1->Size =
                System::Drawing::Size(300, 300);

            this->dataGridView1->TabIndex = 9;

            //
            // Column1
            //
            this->Column1->HeaderText = L"X";
            this->Column1->Name = L"Column1";
            this->Column1->ReadOnly = true;
            this->Column1->Width = 125;

            //
            // Column2
            //
            this->Column2->HeaderText = L"Y";
            this->Column2->Name = L"Column2";
            this->Column2->ReadOnly = true;
            this->Column2->Width = 125;

            //
            // chart1
            //
            chartArea1->Name = L"ChartArea1";

            chartArea1->AxisX->Title = L"X";
            chartArea1->AxisY->Title = L"Y";

            this->chart1->ChartAreas->Add(chartArea1);

            this->chart1->ContextMenuStrip =
                this->contextMenuStrip1;

            this->chart1->Location =
                System::Drawing::Point(321, 190);

            this->chart1->Name = L"chart1";

            series1->ChartArea = L"ChartArea1";
            series1->ChartType =
                System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;

            series1->BorderWidth = 2;
            series1->Name = L"y = x^2";

            this->chart1->Series->Add(series1);

            this->chart1->Size =
                System::Drawing::Size(340, 300);

            this->chart1->TabIndex = 10;

            this->chart1->Text = L"chart1";

            //
            // pictureBox1
            //
            this->pictureBox1->Image =
                (cli::safe_cast<System::Drawing::Image^>(
                    resources->GetObject(L"pictureBox1.Image")
                ));

            this->pictureBox1->Location =
                System::Drawing::Point(232, 64);

            this->pictureBox1->Name =
                L"pictureBox1";

            this->pictureBox1->Size =
                System::Drawing::Size(399, 96);

            this->pictureBox1->SizeMode =
                System::Windows::Forms::PictureBoxSizeMode::AutoSize;

            this->pictureBox1->TabIndex = 11;
            this->pictureBox1->TabStop = false;

            //
            // MyForm
            //
            this->AutoScaleDimensions =
                System::Drawing::SizeF(6, 13);

            this->AutoScaleMode =
                System::Windows::Forms::AutoScaleMode::Font;

            this->ClientSize =
                System::Drawing::Size(681, 520);

            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->chart1);
            this->Controls->Add(this->dataGridView1);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->toolStrip1);
            this->Controls->Add(this->menuStrip1);

            this->MainMenuStrip = this->menuStrip1;

            this->Name = L"MyForm";
            this->StartPosition =
                System::Windows::Forms::FormStartPosition::CenterScreen;

            this->Text = L"Кукиль Данило ипз-25";

            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>
                (this->dataGridView1))->EndInit();

            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>
                (this->chart1))->EndInit();

            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>
                (this->pictureBox1))->EndInit();

            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();

            this->contextMenuStrip1->ResumeLayout(false);

            this->toolStrip1->ResumeLayout(false);
            this->toolStrip1->PerformLayout();

            this->ResumeLayout(false);
            this->PerformLayout();
        }

#pragma endregion

    private:

        String^ NormalizeNumber(String^ value)
        {
            String^ separator =
                CultureInfo::CurrentCulture->NumberFormat->NumberDecimalSeparator;

            if (separator == L",")
            {
                value = value->Replace(L".", L",");
            }
            else
            {
                value = value->Replace(L",", L".");
            }

            return value;
        }

        bool ReadValues(double% x_s, double% x_e, double% dx)
        {
            String^ value1 = NormalizeNumber(textBox1->Text->Trim());
            String^ value2 = NormalizeNumber(textBox2->Text->Trim());
            String^ value3 = NormalizeNumber(textBox3->Text->Trim());

            if (value1 == L"" || value2 == L"" || value3 == L"")
            {
                MessageBox::Show(
                    L"Заповніть усі поля Xn, Xk та Dx.",
                    L"Помилка введення",
                    MessageBoxButtons::OK,
                    MessageBoxIcon::Warning
                );

                return false;
            }

            if (!Double::TryParse(value1, x_s))
            {
                MessageBox::Show(
                    L"Некоректне значення Xn.",
                    L"Помилка введення",
                    MessageBoxButtons::OK,
                    MessageBoxIcon::Error
                );

                textBox1->Focus();
                return false;
            }

            if (!Double::TryParse(value2, x_e))
            {
                MessageBox::Show(
                    L"Некоректне значення Xk.",
                    L"Помилка введення",
                    MessageBoxButtons::OK,
                    MessageBoxIcon::Error
                );

                textBox2->Focus();
                return false;
            }

            if (!Double::TryParse(value3, dx))
            {
                MessageBox::Show(
                    L"Некоректне значення Dx.",
                    L"Помилка введення",
                    MessageBoxButtons::OK,
                    MessageBoxIcon::Error
                );

                textBox3->Focus();
                return false;
            }

            if (dx == 0)
            {
                MessageBox::Show(
                    L"Крок Dx не може дорівнювати нулю.",
                    L"Помилка",
                    MessageBoxButtons::OK,
                    MessageBoxIcon::Error
                );

                textBox3->Focus();
                return false;
            }

            if (x_s < x_e && dx < 0)
            {
                MessageBox::Show(
                    L"Для Xn < Xk значення Dx повинно бути додатним.",
                    L"Помилка",
                    MessageBoxButtons::OK,
                    MessageBoxIcon::Error
                );

                textBox3->Focus();
                return false;
            }

            if (x_s > x_e && dx > 0)
            {
                MessageBox::Show(
                    L"Для Xn > Xk значення Dx повинно бути від'ємним.",
                    L"Помилка",
                    MessageBoxButtons::OK,
                    MessageBoxIcon::Error
                );

                textBox3->Focus();
                return false;
            }

            double count =
                Math::Abs((x_e - x_s) / dx) + 1.0;

            if (count > 100000)
            {
                MessageBox::Show(
                    L"Задано занадто велику кількість точок. "
                    L"Збільшіть крок Dx.",
                    L"Помилка",
                    MessageBoxButtons::OK,
                    MessageBoxIcon::Warning
                );

                return false;
            }

            return true;
        }

        void Calculate()
        {
            double x_s;
            double x_e;
            double dx;

            if (!ReadValues(x_s, x_e, dx))
            {
                return;
            }

            dataGridView1->Rows->Clear();
            chart1->Series[0]->Points->Clear();

            try
            {
                if (dx > 0)
                {
                    for (double x = x_s; x <= x_e + 1e-12; x += dx)
                    {
                        double y = x * x;

                        dataGridView1->Rows->Add(
                            Math::Round(x, 6),
                            Math::Round(y, 6)
                        );

                        chart1->Series[0]->Points->AddXY(x, y);
                    }
                }
                else
                {
                    for (double x = x_s; x >= x_e - 1e-12; x += dx)
                    {
                        double y = x * x;

                        dataGridView1->Rows->Add(
                            Math::Round(x, 6),
                            Math::Round(y, 6)
                        );

                        chart1->Series[0]->Points->AddXY(x, y);
                    }
                }
            }
            catch (Exception^ ex)
            {
                MessageBox::Show(
                    L"Помилка під час обробки даних:\n" + ex->Message,
                    L"Помилка",
                    MessageBoxButtons::OK,
                    MessageBoxIcon::Error
                );
            }
        }

        void ClearAll()
        {
            textBox1->Clear();
            textBox2->Clear();
            textBox3->Clear();

            dataGridView1->Rows->Clear();
            chart1->Series[0]->Points->Clear();

            textBox1->Focus();
        }

        void ExitProgram()
        {
            System::Windows::Forms::DialogResult result;

            result = MessageBox::Show(
                L"Ви дійсно бажаєте вийти з програми?",
                L"Вихід",
                MessageBoxButtons::YesNo,
                MessageBoxIcon::Question
            );

            if (result == System::Windows::Forms::DialogResult::Yes)
            {
                Application::Exit();
            }
        }

        System::Void button1_Click(
            System::Object^ sender,
            System::EventArgs^ e)
        {
            Calculate();
        }

        System::Void calculateToolStripMenuItem_Click(
            System::Object^ sender,
            System::EventArgs^ e)
        {
            Calculate();
        }

        System::Void clearToolStripMenuItem_Click(
            System::Object^ sender,
            System::EventArgs^ e)
        {
            ClearAll();
        }

        System::Void exitToolStripMenuItem_Click(
            System::Object^ sender,
            System::EventArgs^ e)
        {
            ExitProgram();
        }

        System::Void toolStripCalculateButton_Click(
            System::Object^ sender,
            System::EventArgs^ e)
        {
            Calculate();
        }

        System::Void toolStripClearButton_Click(
            System::Object^ sender,
            System::EventArgs^ e)
        {
            ClearAll();
        }

        System::Void toolStripExitButton_Click(
            System::Object^ sender,
            System::EventArgs^ e)
        {
            ExitProgram();
        }

        System::Void contextCalculateToolStripMenuItem_Click(
            System::Object^ sender,
            System::EventArgs^ e)
        {
            Calculate();
        }

        System::Void contextClearToolStripMenuItem_Click(
            System::Object^ sender,
            System::EventArgs^ e)
        {
            ClearAll();
        }

        System::Void contextExitToolStripMenuItem_Click(
            System::Object^ sender,
            System::EventArgs^ e)
        {
            ExitProgram();
        }

        System::Void textBox_KeyPress(
            System::Object^ sender,
            System::Windows::Forms::KeyPressEventArgs^ e)
        {
            TextBox^ textBox =
                safe_cast<TextBox^>(sender);

            if (Char::IsControl(e->KeyChar))
            {
                return;
            }

            if (Char::IsDigit(e->KeyChar))
            {
                return;
            }

            if ((e->KeyChar == ',' || e->KeyChar == '.') &&
                !textBox->Text->Contains(L",") &&
                !textBox->Text->Contains(L"."))
            {
                return;
            }

            if (e->KeyChar == '-' &&
                textBox->SelectionStart == 0 &&
                !textBox->Text->Contains(L"-"))
            {
                return;
            }

            e->Handled = true;
        }
    };
}