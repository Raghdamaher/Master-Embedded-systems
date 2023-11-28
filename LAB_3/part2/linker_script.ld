MEMORY
{
    flash(RX) : ORIGIN = 0x08000000, LENGTH = 128K
    sram(RWX) : ORIGIN = 0x20000000, LENGTH = 20K
}

SECTIONS
{
    _E_TEXT = ORIGIN(flash) + LENGTH(flash);
    _S_DATA = _E_TEXT;
    _E_DATA = ORIGIN(flash) + LENGTH(flash);
    _S_BSS = ORIGIN(sram) + LENGTH(sram);
    _E_BSS = ORIGIN(sram) + LENGTH(sram);

    .text : {
        *(.vectors*)
        *(.text*)
        *(.rodata)
    } > flash

    .data : {
        _S_DATA = .;
        *(.data)
        _E_DATA = .;
        . = ALIGN(4);
    } > flash

    .bss : {
        _S_BSS = .;
        *(.bss*)
        _E_BSS = .;
    } > sram
}