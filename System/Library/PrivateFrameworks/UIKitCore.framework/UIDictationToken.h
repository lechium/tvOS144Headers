/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface UIDictationToken : NSObject <NSSecureCoding> {

	BOOL _removeSpaceBefore;
	BOOL _removeSpaceAfter;
	NSString* _text;

}

@property (nonatomic,copy) NSString * text;                        //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) BOOL removeSpaceBefore;               //@synthesize removeSpaceBefore=_removeSpaceBefore - In the implementation block
@property (nonatomic,readonly) BOOL removeSpaceAfter;              //@synthesize removeSpaceAfter=_removeSpaceAfter - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)removeSpaceAfter;
-(BOOL)removeSpaceBefore;
-(void)setRemoveSpaceBefore:(BOOL)arg1 ;
-(id)_descriptionExtra;
-(id)initWithText:(id)arg1 removeSpaceBefore:(BOOL)arg2 removeSpaceAfter:(BOOL)arg3 ;
@end

