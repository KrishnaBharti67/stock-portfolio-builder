# 📊 Stock Portfolio Builder

This Python script fetches real-time stock data from **Yahoo Finance**, 
calculates the optimal number of shares to buy for each company based on 
your total portfolio size, and exports the data to a nicely formatted Excel spreadsheet.

---

## 🧠 How It Works
1. Reads a list of stock tickers from `sp_500_stocks.csv`.
2. Pulls current stock prices and market capitalization using `yfinance`.
3. Asks you to input your total portfolio size.
4. Calculates the number of shares to buy for each stock.
5. Saves everything to a formatted Excel file called `trades.xlsx`.

---

## ⚙️ Requirements

Install dependencies using pip:

```bash
pip install -r requirements.txt

▶️ Usage

Run the program in your terminal:

python portfolio_builder.py


Then enter your portfolio size (e.g., 100000).

📁 Output

An Excel file named trades.xlsx will be created, containing:

Symbol	Stock Price	Market Cap	Number of Shares to Buy
🧱 Project Structure
stock-portfolio-builder/
├── portfolio_builder.py
├── sp_500_stocks.csv
├── requirements.txt
├── README.md
└── .gitignore

🏷️ License

This project is open-source under the MIT License.


---

## 🪜 STEP 6 — Initialize Git

Open **VS Code** (or Command Prompt) inside your project folder.  
Then run:

```bash
git init
git add .
git commit -m "Initial commit: stock portfolio builder"