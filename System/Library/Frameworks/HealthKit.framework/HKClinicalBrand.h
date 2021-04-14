/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface HKClinicalBrand : NSObject <NSCopying, NSSecureCoding> {

	NSString* _externalID;
	NSString* _batchID;

}

@property (nonatomic,copy,readonly) NSString * externalID;                                                   //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,copy,readonly) NSString * batchID;                                                      //@synthesize batchID=_batchID - In the implementation block
@property (getter=isFakeBrandForTestAccounts,nonatomic,readonly) BOOL fakeBrandForTestAccounts; 
+(BOOL)supportsSecureCoding;
+(id)createFakeBrandForTestAccounts;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)externalID;
-(NSString *)batchID;
-(id)initWithExternalID:(id)arg1 batchID:(id)arg2 ;
-(BOOL)isFakeBrandForTestAccounts;
@end

