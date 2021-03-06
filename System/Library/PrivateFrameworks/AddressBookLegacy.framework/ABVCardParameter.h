/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableArray;

@interface ABVCardParameter : NSObject {

	NSString* _name;
	NSString* _grouping;
	id _value;
	NSMutableArray* _types;
	BOOL _primary;

}
-(id)name;
-(id)description;
-(void)dealloc;
-(id)initWithName:(id)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(BOOL)isPrimary;
-(void)setIsPrimary:(BOOL)arg1 ;
-(id)types;
-(void)addType:(id)arg1 ;
-(id)grouping;
-(void)setGrouping:(id)arg1 ;
-(void)addTypes:(id)arg1 ;
@end

