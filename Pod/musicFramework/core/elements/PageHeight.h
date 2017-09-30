// MusicXML Class Library
// Copyright (c) by Matthew James Briggs
// Distributed under the MIT License

#pragma once

#include "../../core/ForwardDeclare.h"
#include "../../core/ElementInterface.h"
#include "../../core/Decimals.h"

#include <iosfwd>
#include <memory>
#include <vector>

namespace mx
{
    namespace core
    {

        MX_FORWARD_DECLARE_ELEMENT( PageHeight )

        inline PageHeightPtr makePageHeight() { return std::make_shared<PageHeight>(); }
		inline PageHeightPtr makePageHeight( const TenthsValue& value ) { return std::make_shared<PageHeight>( value ); }
		inline PageHeightPtr makePageHeight( TenthsValue&& value ) { return std::make_shared<PageHeight>( std::move( value ) ); }

        class PageHeight : public ElementInterface
        {
        public:
            PageHeight();
            PageHeight( const TenthsValue& value );

            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            TenthsValue getValue() const;
            void setValue( const TenthsValue& value );

            bool fromXElement( std::ostream& message, xml::XElement& xelement );

        private:
            TenthsValue myValue;
        };
    }
}
