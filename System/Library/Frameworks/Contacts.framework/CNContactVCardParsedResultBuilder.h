/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNVCardParsedResultBuilder.h>

@class CNMutableContact, NSString;

@interface CNContactVCardParsedResultBuilder : NSObject <CNVCardParsedResultBuilder> {

	CNMutableContact* _contact;
	BOOL _empty;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contactKeyForVCardKey:(id)arg1 ;
+(/*^block*/id)contactValueTransformForVCardKey:(id)arg1 ;
+(id)labeledValuesWithValues:(id)arg1 transform:(/*^block*/id)arg2 labels:(id)arg3 isPrimaries:(id)arg4 ;
-(id)init;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)build;
-(BOOL)setImageData:(id)arg1 forReference:(id)arg2 clipRects:(id)arg3 ;
-(BOOL)canSetValueForProperty:(id)arg1 ;
-(void)setUnknownProperties:(id)arg1 ;
-(id)validCountryCodes;
-(BOOL)setValues:(id)arg1 labels:(id)arg2 isPrimaries:(id)arg3 forProperty:(id)arg4 ;
-(long long)personFlags;
-(BOOL)setPersonFlags:(long long)arg1 ;
-(long long)contactTypeFromPersonFlags:(long long)arg1 ;
-(long long)personFlagsByAddingContactType:(long long)arg1 toFlags:(long long)arg2 ;
@end

