/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AddressBookLegacy/AddressBookLegacy-Structs.h>
#import <AddressBookLegacy/ABPredicate.h>

@class NSString;

@interface ABPhonePredicate : ABPredicate {

	NSString* _homeCountryCode;
	NSString* _phoneNumber;
	NSString* _country;

}

@property (nonatomic,copy) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * country;                  //@synthesize country=_country - In the implementation block
-(void)dealloc;
-(BOOL)isValid;
-(id)predicateFormat;
-(NSString *)phoneNumber;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)country;
-(void)setCountry:(NSString *)arg1 ;
-(id)homeCountryCode;
-(id)queryWhereStringForPredicateIdentifier:(int)arg1 ;
-(void)ab_bindWhereClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(id)queryJoinsInCompound:(BOOL)arg1 predicateIdentifier:(int)arg2 ;
-(BOOL)hasCallback;
-(void)evaluateCallbackWithSqliteContext:(sqlite3_contextRef)arg1 predicateContext:(id)arg2 values:(sqlite3_value*)arg3 count:(int)arg4 ;
@end

