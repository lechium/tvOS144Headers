/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, WFColor;

@interface WFWorkflowIcon : NSObject <NSCopying, NSSecureCoding> {

	unsigned short _glyphCharacter;
	long long _backgroundColorValue;
	NSData* _customImageData;

}

@property (nonatomic,readonly) long long backgroundColorValue;              //@synthesize backgroundColorValue=_backgroundColorValue - In the implementation block
@property (nonatomic,readonly) unsigned short glyphCharacter;               //@synthesize glyphCharacter=_glyphCharacter - In the implementation block
@property (nonatomic,copy,readonly) NSData * customImageData;               //@synthesize customImageData=_customImageData - In the implementation block
@property (nonatomic,readonly) WFColor * backgroundColor; 
+(BOOL)supportsSecureCoding;
+(long long)randomBackgroundColor;
+(unsigned short)defaultGlyphCharacter;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(WFColor *)backgroundColor;
-(long long)backgroundColorValue;
-(unsigned short)glyphCharacter;
-(id)initWithBackgroundColorValue:(long long)arg1 glyphCharacter:(unsigned short)arg2 customImageData:(id)arg3 ;
-(NSData *)customImageData;
-(id)initWithPaletteColor:(unsigned long long)arg1 glyphCharacter:(unsigned short)arg2 customImageData:(id)arg3 ;
@end

