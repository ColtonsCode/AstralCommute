/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2022 Bruno Van de Velde (vdv_b@tgui.eu)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef TGUI_EDIT_BOX_RENDERER_HPP
#define TGUI_EDIT_BOX_RENDERER_HPP


#include <TGUI/Renderers/WidgetRenderer.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace tgui
{
    class TGUI_API EditBoxRenderer : public WidgetRenderer
    {
    public:

        using WidgetRenderer::WidgetRenderer;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the text style
        ///
        /// @param style  New text style
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setTextStyle(TextStyles style);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns text style
        ///
        /// @return Style of the text
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        TextStyles getTextStyle() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the text style of the default text (the text drawn when the edit box is empty)
        ///
        /// @param style  The new default text style
        ///
        /// @code
        /// editBox->getSharedRenderer()->setDefaultTextStyle(tgui::TextStyle::Italic | tgui::TextStyle::Bold);
        /// @endcode
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setDefaultTextStyle(TextStyles style);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the text style of the default text (the text drawn when the edit box is empty)
        ///
        /// @return Style of the default text
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        TextStyles getDefaultTextStyle() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the size of the borders
        ///
        /// @param borders  Size of the borders
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setBorders(const Borders& borders);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the size of the borders
        ///
        /// @return border size
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Borders getBorders() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the padding of the edit box
        ///
        /// When the text is auto-scaled then it will be drawn within the area defined by the size minus the border and padding.
        /// The padding is also used to define the clipping area for when the text it too long.
        ///
        /// @param padding  The padding width and height
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setPadding(const Padding& padding);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the size of the padding
        ///
        /// @return padding size
        ///
        /// @see setPadding
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Padding getPadding() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the width of the caret
        ///
        /// @param width  New width of the caret
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setCaretWidth(float width);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the caret width
        ///
        /// @return Width of the caret
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        float getCaretWidth() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Sets the text color that will be used inside the edit box
        ///
        /// @param textColor  The new text color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setTextColor(Color textColor);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the text color that will be used inside the edit box
        ///
        /// @return Text color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getTextColor() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Sets the text color that will be used inside the edit box when the edit box is disabled
        ///
        /// @param textColor  The new text color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setTextColorDisabled(Color textColor);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the text color that will be used inside the edit box when the edit box is disabled
        ///
        /// @return Text color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getTextColorDisabled() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Sets the text color that will be used inside the edit box when the edit box is focused
        /// @param textColor  The new text color
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setTextColorFocused(Color textColor);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the text color that will be used inside the edit box when the edit box is focused
        /// @return Text color
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getTextColorFocused() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Sets the text color of the selected text that will be used inside the edit box
        ///
        /// @param selectedTextColor  The new selected text color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setSelectedTextColor(Color selectedTextColor);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the text color of the selected text that will be used inside the edit box
        ///
        /// @return Text color of selected text
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getSelectedTextColor() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Sets the background color of the selected text that will be used inside the edit box
        ///
        /// @param selectedTextBackgroundColor  The new background color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setSelectedTextBackgroundColor(Color selectedTextBackgroundColor);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the background color of the selected text that will be used inside the edit box
        ///
        /// @return Background color of selected text
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getSelectedTextBackgroundColor() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Sets the color of the default text that can optionally be displayed when the edit box is empty
        ///
        /// @param defaultTextColor  The new default text color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setDefaultTextColor(Color defaultTextColor);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the color of the default text that can optionally be displayed when the edit box is empty
        ///
        /// @return Default text color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getDefaultTextColor() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the color of the background
        ///
        /// @param color  New background color
        ///
        /// Note that this color is ignored when you set an image as background.
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setBackgroundColor(Color color);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the color of the background
        ///
        /// @return Background color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getBackgroundColor() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the color of the background in the hover state (mouse on edit box, but not pressed)
        ///
        /// @param color  New background color
        ///
        /// Note that this color is ignored when you set an image as background.
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setBackgroundColorHover(Color color);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the color of the background in the hover state (mouse on edit box)
        ///
        /// @return Background color in hover state
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getBackgroundColorHover() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the color of the background when the edit box is disabled
        ///
        /// @param color  New background color
        ///
        /// Note that this color is ignored when you set an image as background.
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setBackgroundColorDisabled(Color color);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the color of the background when the edit box is disabled
        ///
        /// @return Background color in disabled state
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getBackgroundColorDisabled() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the color of the background when the edit box is focused
        /// @param color  New background color
        ///
        /// Note that this color is ignored when you set an image as background.
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setBackgroundColorFocused(Color color);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the color of the background when the edit box is focused
        /// @return Background color in focused state
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getBackgroundColorFocused() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Sets the color that will be used inside the edit box for the blinking caret
        ///
        /// @param caretColor  The color of the blinking caret
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setCaretColor(Color caretColor);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the color that will be used inside the edit box for the blinking caret
        ///
        /// @return The color of the blinking caret
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getCaretColor() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Sets the color that will be used for the blinking caret when the mouse is on top of the edit box
        ///
        /// @param caretColor  The color of the blinking caret
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setCaretColorHover(Color caretColor);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the color that will be used for the blinking caret when the mouse is on top of the edit box
        ///
        /// @return The color of the blinking caret
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getCaretColorHover() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Sets the color that will be used for the blinking caret when the edit box is focused
        /// @param caretColor  The color of the blinking caret
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setCaretColorFocused(Color caretColor);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the color that will be used for the blinking caret when the edit box is focused
        /// @return The color of the blinking caret
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getCaretColorFocused() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the color of the borders
        ///
        /// @param color  New border color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setBorderColor(Color color);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the color of the borders
        ///
        /// @return border color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getBorderColor() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the color of the borders used when the mouse is on top of the edit box
        ///
        /// @param color  New border color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setBorderColorHover(Color color);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the color of the borders used when the mouse is on top of the edit box
        ///
        /// @return border color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getBorderColorHover() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the color of the borders used when the edit box is disabled
        ///
        /// @param color  New border color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setBorderColorDisabled(Color color);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the color of the borders used when the edit box is disabled
        ///
        /// @return border color
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getBorderColorDisabled() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the color of the borders used when the edit box is focused
        /// @param color  New border color
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setBorderColorFocused(Color color);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the color of the borders used when the edit box is focused
        /// @return border color
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        Color getBorderColorFocused() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the image that is displayed
        ///
        /// @param texture  The new edit box texture
        ///
        /// When this image is set, the background color property will be ignored.
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setTexture(const Texture& texture);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the image that is displayed
        ///
        /// @return edit box texture
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        const Texture& getTexture() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the image that is displayed when the mouse is located on top of the edit box
        ///
        /// @param texture  The new hover texture
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setTextureHover(const Texture& texture);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the image that is displayed when the mouse is located on top of the edit box
        ///
        /// @return hover texture
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        const Texture& getTextureHover() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the image that is displayed when the edit box is disabled
        ///
        /// @param texture  The new disabled texture
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setTextureDisabled(const Texture& texture);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the image that is displayed when the edit box is disabled
        ///
        /// @return disabled texture
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        const Texture& getTextureDisabled() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the image that is drawn on top of the edit box image when the edit box is focused
        ///
        /// @param texture  The new focus texture
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setTextureFocused(const Texture& texture);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Returns the image that is drawn on top of the edit box image when the edit box is focused
        ///
        /// @return focused texture
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        const Texture& getTextureFocused() const;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    };

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // TGUI_EDIT_BOX_RENDERER_HPP
