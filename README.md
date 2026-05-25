# 🕹️ Libft Unit Tester

<img src="https://img.shields.io/badge/School-42-black?style=for-the-badge" alt="42 School">
<img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge" alt="Language C">
<img src="https://img.shields.io/badge/Platform-Unix%20%2F%20macOS-lightgrey?style=for-the-badge" alt="Platform Unix macOS">

---

## 📝 DESCRIPTION

An automated, fast, and portable testing environment specifically designed to stress-test and validate the functions of the **Libft** project from 42 School. 

This tester features incremental compilation (it only recompiles what you modify), a classic clear `[OK]` / `[KO]` visual layout, and a surgical filtering system to run tests function by function.

---

## 🛠️ INSTALLATION & STRUCTURE

For the tester to work natively without configuring absolute paths, the folder structure in your workspace must be as follows:

<pre>
📁 your_workspace/
├── 📁 libft/          # Contains your Libft source files and Makefile
└── 📁 tests_libft/    # Contains this tester (main.c, Makefile, run_tests.sh, src/...)
</pre>

### Cloning the Tester

Enter the root of your `libft` project and clone the tester, ensuring the folder sits at the same level as your source files:

```bash
git clone <YOUR_REPOSITORY_URL> tests_libft
cd tests_libft