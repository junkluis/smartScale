/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#include <stdarg.h>
#include <touchgfx/Texts.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <touchgfx/TypedText.hpp>
#include <texts/TypedTextDatabase.hpp>
#include <touchgfx/lcd/LCD.hpp>
#include <touchgfx/TextProvider.hpp>

touchgfx::Font::StringWidthFunctionPointer touchgfx::Font::getStringWidthFunction = &touchgfx::Font::getStringWidthLTR;
touchgfx::LCD::DrawStringFunctionPointer touchgfx::LCD::drawStringFunction = &touchgfx::LCD::drawStringLTR;
touchgfx::TextProvider::UnicodeConverterInitFunctionPointer touchgfx::TextProvider::unicodeConverterInitFunction = static_cast<touchgfx::TextProvider::UnicodeConverterInitFunctionPointer>(0);
touchgfx::TextProvider::UnicodeConverterFunctionPointer touchgfx::TextProvider::unicodeConverterFunction = static_cast<touchgfx::TextProvider::UnicodeConverterFunctionPointer>(0);

//Default typed text database
extern const touchgfx::TypedText::TypedTextData* const typedTextDatabaseArray[];

TEXT_LOCATION_FLASH_PRAGMA
KEEP extern const touchgfx::Unicode::UnicodeChar texts_all_languages[] TEXT_LOCATION_FLASH_ATTRIBUTE =
{
    0x41, 0x64, 0x6d, 0x69, 0x6e, 0x69, 0x73, 0x74, 0x72, 0x61, 0x64, 0x6f, 0x72, 0x20, 0x64, 0x65, 0x20, 0x6c, 0x6f, 0x73, 0x20, 0x70, 0x65, 0x72, 0x66, 0x69, 0x6c, 0x65, 0x73, 0xa, 0x50, 0x6f, 0x72, 0x20, 0x70, 0x72, 0x6f, 0x64, 0x75, 0x63, 0x74, 0x6f, 0x73, 0x20, 0x72, 0x65, 0x67, 0x69, 0x73, 0x74, 0x72, 0x61, 0x64, 0x6f, 0x73, 0x0, // @0 "Administrador de los perfiles?Por productos registrados"
    0x53, 0x65, 0x6c, 0x65, 0x63, 0x63, 0x69, 0x6f, 0x6e, 0x65, 0xa, 0x65, 0x6c, 0x20, 0x70, 0x65, 0x72, 0x66, 0x69, 0x6c, 0xa, 0x64, 0x65, 0x6c, 0x20, 0x70, 0x72, 0x6f, 0x64, 0x75, 0x63, 0x74, 0x6f, 0x0, // @56 "Seleccione?el perfil?del producto"
    0x53, 0x65, 0x20, 0x65, 0x6e, 0x76, 0x69, 0x6f, 0x20, 0x65, 0x6c, 0xa, 0x72, 0x65, 0x67, 0x69, 0x73, 0x74, 0x72, 0x6f, 0x20, 0x63, 0x6f, 0x6e, 0x20, 0xe9, 0x78, 0x69, 0x74, 0x6f, 0x0, // @90 "Se envio el?registro con ?xito"
    0x45, 0x6c, 0x20, 0x50, 0x65, 0x72, 0x66, 0x69, 0x6c, 0x20, 0x65, 0x73, 0x74, 0x61, 0x20, 0xa, 0x69, 0x6e, 0x63, 0x6f, 0x6d, 0x70, 0x6c, 0x65, 0x74, 0x6f, 0x0, // @121 "El Perfil esta ?incompleto"
    0x44, 0x69, 0x66, 0x65, 0x72, 0x65, 0x6e, 0x63, 0x69, 0x61, 0xa, 0x50, 0x65, 0x72, 0x6d, 0x69, 0x74, 0x69, 0x64, 0x61, 0x0, // @148 "Diferencia?Permitida"
    0x42, 0x61, 0x6c, 0x61, 0x6e, 0x7a, 0x61, 0xa, 0x49, 0x6e, 0x74, 0x65, 0x6c, 0x69, 0x67, 0x65, 0x6e, 0x74, 0x65, 0x0, // @169 "Balanza?Inteligente"
    0x42, 0x61, 0x6c, 0x61, 0x6e, 0x7a, 0x61, 0x20, 0x49, 0x6e, 0x74, 0x65, 0x6c, 0x69, 0x67, 0x65, 0x6e, 0x74, 0x65, 0x0, // @189 "Balanza Inteligente"
    0x76, 0x6f, 0x6c, 0x76, 0x65, 0x72, 0x20, 0x61, 0x20, 0x70, 0x65, 0x73, 0x61, 0x72, 0x3f, 0x0, // @209 "volver a pesar?"
    0x4d, 0x65, 0x6e, 0x75, 0x20, 0x50, 0x72, 0x69, 0x6e, 0x63, 0x69, 0x70, 0x61, 0x6c, 0x0, // @225 "Menu Principal"
    0x2, 0x0, // @240 "<>"
    0x50, 0x65, 0x73, 0x6f, 0xa, 0x45, 0x73, 0x70, 0x65, 0x72, 0x61, 0x64, 0x6f, 0x0, // @242 "Peso?Esperado"
    0x50, 0x65, 0x72, 0x66, 0x69, 0x6c, 0x20, 0x76, 0x61, 0x63, 0x69, 0x6f, 0x0, // @256 "Perfil vacio"
    0x50, 0x65, 0x72, 0x66, 0x69, 0x6c, 0x20, 0x56, 0x61, 0x63, 0x69, 0x6f, 0x0, // @269 "Perfil Vacio"
    0x52, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x61, 0x64, 0x6f, 0x0, // @282 "Resultado"
    0x2, 0x20, 0x5b, 0x4b, 0x67, 0x5d, 0x0, // @292 "<> [Kg]"
    0x50, 0x65, 0x72, 0x66, 0x69, 0x6c, 0x65, 0x73, 0x0, // @299 "Perfiles"
    0x50, 0x72, 0x6f, 0x6d, 0x65, 0x64, 0x69, 0x6f, 0x0, // @308 "Promedio"
    0x45, 0x6d, 0x70, 0x65, 0x7a, 0x61, 0x72, 0x0, // @317 "Empezar"
    0x41, 0x4c, 0x45, 0x52, 0x54, 0x41, 0x0, // @325 "ALERTA"
    0x45, 0x6e, 0x76, 0x69, 0x61, 0x72, 0x0, // @332 "Enviar"
    0x50, 0x65, 0x72, 0x66, 0x69, 0x6c, 0x0, // @339 "Perfil"
    0x61, 0x63, 0x63, 0x69, 0x6f, 0x6e, 0x0, // @346 "accion"
    0x30, 0x30, 0x2e, 0x30, 0x30, 0x0, // @353 "00.00"
    0x53, 0x61, 0x6c, 0x69, 0x72, 0x0, // @359 "Salir"
    0x50, 0x65, 0x73, 0x61, 0x72, 0x0, // @365 "Pesar"
    0x31, 0x32, 0x33, 0x0, // @371 "123"
    0x4b, 0x67, 0x2e, 0x0, // @375 "Kg."
    0x41, 0x42, 0x43, 0x0, // @379 "ABC"
    0x4e, 0x41, 0x0, // @383 "NA"
    0x4f, 0x4b, 0x0, // @386 "OK"
    0x2c, 0x0 // @389 ","
};
extern uint32_t const indicesGb[];

//array holding dynamically installed languages
struct TranslationHeader
{
    uint32_t offset_to_texts;
    uint32_t offset_to_indices;
    uint32_t offset_to_typedtext;
};
static const TranslationHeader* languagesArray[1] = { 0 };

//Compiled and linked in languages
static const uint32_t* const staticLanguageIndices[] =
{
    indicesGb
};

touchgfx::LanguageId touchgfx::Texts::currentLanguage = static_cast<touchgfx::LanguageId>(0);
static const touchgfx::Unicode::UnicodeChar* currentLanguagePtr = 0;
static const uint32_t* currentLanguageIndices = 0;

void touchgfx::Texts::setLanguage(touchgfx::LanguageId id)
{
    const touchgfx::TypedText::TypedTextData* currentLanguageTypedText = 0;
    if (id < 1)
    {
        if (languagesArray[id] != 0)
        {
            //dynamic translation is added
            const TranslationHeader* translation = languagesArray[id];
            currentLanguagePtr = (const touchgfx::Unicode::UnicodeChar*)(((const uint8_t*)translation) + translation->offset_to_texts);
            currentLanguageIndices = (const uint32_t*)(((const uint8_t*)translation) + translation->offset_to_indices);
            currentLanguageTypedText = (const touchgfx::TypedText::TypedTextData*)(((const uint8_t*)translation) + translation->offset_to_typedtext);
        }
        else
        {
            //compiled and linked in languages
            currentLanguagePtr = texts_all_languages;
            currentLanguageIndices = staticLanguageIndices[id];
            currentLanguageTypedText = typedTextDatabaseArray[id];
        }
    }

    if (currentLanguageTypedText)
    {
        currentLanguage = id;
        touchgfx::TypedText::registerTypedTextDatabase(currentLanguageTypedText,
                                                       TypedTextDatabase::getFonts(), TypedTextDatabase::getInstanceSize());
    }
}

void touchgfx::Texts::setTranslation(touchgfx::LanguageId id, const void* translation)
{
    languagesArray[id] = (const TranslationHeader*)translation;
}

const touchgfx::Unicode::UnicodeChar* touchgfx::Texts::getText(TypedTextId id) const
{
    return &currentLanguagePtr[currentLanguageIndices[id]];
}

