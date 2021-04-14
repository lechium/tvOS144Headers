/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/TVLRootElement.h>

@class NSString;

@interface TVLDialogElement : TVLRootElement {

	NSString* _title;
	NSString* _dialogDescription;

}

@property (nonatomic,copy) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * dialogDescription;              //@synthesize dialogDescription=_dialogDescription - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2 ;
-(void)setDialogDescription:(NSString *)arg1 ;
-(NSString *)dialogDescription;
@end

