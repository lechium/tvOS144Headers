/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CUINamedRenditionInfo : NSObject <NSCopying> {

	void* _bitmap;
	const renditionkeyfmt* _keyFormat;

}
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(void)dealloc;
-(BOOL)isEqualToNamedRenditionInfo:(id)arg1 ;
-(BOOL)contentPresentForAttribute:(int)arg1 ;
-(BOOL)diverseContentPresentForAttribute:(int)arg1 ;
-(id)initWithData:(id)arg1 andKeyFormat:(const renditionkeyfmt*)arg2 ;
-(id)initWithKeyFormat:(const renditionkeyfmt*)arg1 ;
-(id)archivedData;
-(id)bitwiseAndWith:(id)arg1 ;
-(int)attributePresent:(int)arg1 withValue:(unsigned short)arg2 ;
-(unsigned short)getValueOfAttribute:(int)arg1 ;
-(unsigned short)getClosestValueOfAttribute:(int)arg1 withValue:(unsigned short)arg2 ;
-(BOOL)contentEqualForAttribute:(int)arg1 withRenditionInfo:(id)arg2 ;
-(void)setAttributePresent:(int)arg1 withValue:(unsigned short)arg2 ;
-(void)clearAttributePresent:(int)arg1 withValue:(unsigned short)arg2 ;
-(unsigned long long)numberOfBitsSet;
-(void)decrementValue:(long long*)arg1 forAttribute:(int)arg2 ;
-(void)incrementIndex:(unsigned long long*)arg1 inValues:(id)arg2 forAttribute:(int)arg3 ;
@end

