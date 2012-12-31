using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Shapes;

namespace FEditor.widgets
{
    /// <summary>
    /// Interaction logic for AssetCompressor.xaml
    /// </summary>
    public partial class AssetCompressor : Window
    {
        public AssetCompressor()
        {
            InitializeComponent();
        }

        private void onBrowseButtonClick(object sender, RoutedEventArgs e)
        {
            Microsoft.Win32.OpenFileDialog dialog = new Microsoft.Win32.OpenFileDialog();
            dialog.DefaultExt = ".sln";
            dialog.Filter = "Solution file (.sln)|*.sln";

            Nullable<bool> result = dialog.ShowDialog();

            if (result == true)
            {
                string filename = dialog.FileName;
                FileNameTextBox.Text = filename;
            }
        }

        private void onInputButtonClick(object sender, RoutedEventArgs e)
        {
            Microsoft.Win32.OpenFileDialog dialog = new Microsoft.Win32.OpenFileDialog();
            dialog.DefaultExt = ".png";
            dialog.Filter = "PNG Image (.png)|*.png";

            Nullable<bool> result = dialog.ShowDialog();

            if (result == true)
            {
                string filename = dialog.FileName;
                InputFolderName.Text = filename;
            }
        }

        private void onExportFolderClick(object sender, RoutedEventArgs e)
        {
            Microsoft.Win32.OpenFileDialog dialog = new Microsoft.Win32.OpenFileDialog();
            dialog.Filter = "All files (*.*)|*.*";
            Nullable<bool> result = dialog.ShowDialog();

            if (result == true)
            {
                string filename = dialog.FileName;
                ExportFolderName.Text = filename;
            }
        }

        private void onExportButtonClick(object sender, RoutedEventArgs e)
        {

        }
    }
}
