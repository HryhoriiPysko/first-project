#pragma once

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

private:
  Ui::MainWindow *ui;

  double firstNumbers;
  double secondNumbers;
  QString new_label;
  bool buttonPlus;
private slots:
  void digits_numbers();
  void on_pushButton_dot_clicked();
  void onPushButtonPlusClicked();
  void on_pushButton_AC_clicked();
  void makeNegOrPosNubmer();
  void onPushButtonInterestClicked();
  void onPushButtonMinusClicked();
  void onPushButtonEqualClicked();
};
