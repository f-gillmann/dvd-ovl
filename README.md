# dvd-ovl

## Building

### Cloning the Repository

To properly clone this repository, including all submodules, use the following command:

```sh
git clone --recurse-submodules https://github.com/f-gillmann/dvd-ovl.git
```

If you have already cloned the repository without submodules, initialize and update them with:

```sh
git submodule update --init --recursive
```

### Installing Dependencies
> [!NOTE]
> - Make sure you set up [dkp-pacman](https://devkitpro.org/wiki/devkitPro_pacman) first.

Install the required dependencies using `pacman`:

```sh
sudo pacman -S switch-dev switch-curl switch-zziplib switch-mbedtls switch-jansson
```

### Compiling
Once dependencies are installed, build the project with:

```sh
make dist
```