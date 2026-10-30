#include "mainwindow.h"

#include <QApplication>   // Main Application. This is where the `QApplication` class and its `::exec()` method comes from, both essential.
#include <QLabel>         // A Label. Used to display texts (sometimes images aswell)
#include <QPushButton>    // Button
#include <QCheckBox>      // Checkbox
#include <QComboBox>      // Dropdown
#include <QLineEdit>      // Single-line input
#include <QTextEdit>      // Multi-line input
#include <QListWidget>    // List
#include <QProgressBar>   // Progress Indicator
#include <QVBoxLayout>    // QVBoxLayout is a box-like layout that arranges widgets inside of it vertically.
// Q - Qt.
// V - Vertical.
// Box - Box-like arrangement
// Layout - layout

int main(int argc, char *argv[])
{
    /*
    MainWindow w;
    QLabel label("random label widget");
    QPushButton button("random button widget");
    QCheckBox checkbox("Check this box pls");
    QLineEdit line_edit("say something, but only one line");
    QTextEdit text_edit("Say something, can now be multiple line");
    QProgressBar progress_bar;

    w.show();
    label.show();
    button.show();
    checkbox.show();
    line_edit.show();
    text_edit.show();
    progress_bar.show();
    */

    QApplication app(argc, argv);

    QWidget central;
    QVBoxLayout layout(&central);
    MainWindow w;
    layout.setAlignment(Qt::AlignTop);

    // create basic widgets;
    QLineEdit input;
    QLabel label("Placeholder");

    QString user_input = input.text(); // getter


    layout.addWidget(&input);
    layout.addWidget(&label);

    label.setText(user_input); // .setText() - setter


    w.setCentralWidget(&central);
    w.show();

    return app.exec();
}
