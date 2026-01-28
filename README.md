# vbcc-bin
### Ready‑to‑use VBCC toolchain for Amiga development

**vbcc-bin** is my personnal ready‑to‑use toolchain for compiling Amiga software with **VBCC on
Windows**.

This repository is a fork of
[vscode-amiga-assembly-binaries](https://github.com/prb28/vscode-amiga-assembly-binaries) by [Paul
Raingeard](https://github.com/prb28). The purpose of this fork is to maintain a versioned history of
the toolchain I personally use.

---

## ⚙️ Requirements

- Microsoft Windows 10 or later

---

## 📦 Installation

### Cloning the repository
- Open a shell

- `mkdir vbcc`

- Clone the binaries in the bin dir, if you only want the Windows tools (142.24 MiB):

  ```
  git clone --single-branch --branch Bruno_toolchain  https://github.com/bruno-frederic/vbcc-bin.git  vbcc\bin
  ```

- If you want to retrieve all branches (258.42 MiB) from Paul Raingeard, including tools for macOS,
  Linux, etc.:

  ```
  git clone --branch Bruno_toolchain  https://github.com/bruno-frederic/vbcc-bin.git  vbcc\bin
  ```

---

## 🚀 Usage

Open a PowerShell window to set the PATH and environment variables, making sure to adjust the root
path to the directory where vbcc is installed:

```
$env:VBCC='D:\CodeAmiga\vbcc\bin'
$env:PATH="$env:PATH;$env:VBCC"
```

---

## 🙏 Credits

- **Amiga Assembly for VS Code** by [Paul Raingeard](https://github.com/prb28)
- **VBCC, VLink and VAsm** by [Dr. Volker Barthelmann](http://www.compilers.de/)
  and [Frank Wille](http://sun.hasenbraten.de/~frank/) : http://sun.hasenbraten.de/vbcc/
- **fd2pragma** by Dirk Stoecker and [Frank Wille](http://sun.hasenbraten.de/~frank/)
- **exe2adf** by Bonefish : http://www.exe2adf.com
---

## ⚖️ License

Licensing depends on the individual components included (VBCC, third‑party tools).
Refer to their respective licenses.
