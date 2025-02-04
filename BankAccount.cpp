/**
 * @file BankAccount.cpp
 * @brief Implementation of the BankAccount class.
 *
 * This file contains the method definitions for the BankAccount class
 * declared in BankAccount.h.
 */

#include "BankAccount.h"
#include <iostream>

/**
 * @brief Constructor to initialize a BankAccount object.
 * @param name The name of the account holder.
 * @param number The account number.
 * @param initialBalance The initial deposit (default is 0).
 */
BankAccount::BankAccount(const std::string &name, int number, double initialBalance)
    : accountHolder(name), accountNumber(number), balance(initialBalance) {}

/**
 * @brief Deposits money into the account.
 * @param amount The amount to deposit (must be positive).
 */
void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        std::cout << "Deposited $" << amount << " successfully.\n";
    } else {
        std::cout << "Invalid deposit amount!\n";
    }
}

/**
 * @brief Withdraws money from the account.
 * @param amount The amount to withdraw (must not exceed balance).
 * @return True if withdrawal is successful, false otherwise.
 */
bool BankAccount::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        std::cout << "Withdrew $" << amount << " successfully.\n";
        return true;
    } else {
        std::cout << "Invalid withdrawal amount or insufficient balance!\n";
        return false;
    }
}

/**
 * @brief Displays the account details.
 */
void BankAccount::displayDetails() const {
    std::cout << "Account Holder: " << accountHolder << "\n";
    std::cout << "Account Number: " << accountNumber << "\n";
    std::cout << "Balance: $" << balance << "\n";
}

