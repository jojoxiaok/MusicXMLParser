// MusicXML Class Library
// Copyright (c) by Matthew James Briggs
// Distributed under the MIT License

#pragma once

#include "../../core/ForwardDeclare.h"
#include "../../core/AttributesInterface.h"
#include "../../core/Decimals.h"
#include "../../core/Enums.h"
#include "../../core/Strings.h"
#include "../../core/FontSize.h"

#include <iosfwd>
#include <memory>
#include <vector>

namespace mx
{
    namespace core
    {

        MX_FORWARD_DECLARE_ATTRIBUTES( PrincipalVoiceAttributes )

        struct PrincipalVoiceAttributes : public AttributesInterface
        {
        public:
            PrincipalVoiceAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            StartStop type;
            PrincipalVoiceSymbol symbol;
            TenthsValue defaultX;
            TenthsValue defaultY;
            TenthsValue relativeX;
            TenthsValue relativeY;
            CommaSeparatedText fontFamily;
            FontStyle fontStyle;
            FontSize fontSize;
            FontWeight fontWeight;
            LeftCenterRight halign;
            const bool hasType;
            const bool hasSymbol;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasHalign;

            bool fromXElement( std::ostream& message, xml::XElement& xelement );
        };
    }
}
