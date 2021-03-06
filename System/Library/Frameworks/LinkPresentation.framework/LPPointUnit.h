/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/LPCSSText.h>
#import <libobjc.A.dylib/LPHTMLAttributeText.h>

@interface LPPointUnit : NSObject <LPCSSText, LPHTMLAttributeText> {

	double _value;

}

@property (nonatomic,readonly) double value;              //@synthesize value=_value - In the implementation block
+(id)zero;
-(double)value;
-(id)initWithValue:(double)arg1 ;
-(id)_lp_CSSText;
-(id)_lp_HTMLAttributeText;
@end

