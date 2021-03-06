/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKPeerPaymentPreferencesRestriction : NSObject <NSSecureCoding, NSCopying> {

	NSString* _altDSID;
	unsigned long long _restrictionType;

}

@property (nonatomic,copy) NSString * altDSID;                                //@synthesize altDSID=_altDSID - In the implementation block
@property (assign,nonatomic) unsigned long long restrictionType;              //@synthesize restrictionType=_restrictionType - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(unsigned long long)restrictionType;
-(void)setRestrictionType:(unsigned long long)arg1 ;
-(BOOL)isEqualToPreferencesRestriction:(id)arg1 ;
@end

