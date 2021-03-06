/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKPassPersonalization : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _requiredPersonalizationFields;
	NSString* _termsAndConditions;
	NSString* _localizedDescription;

}

@property (nonatomic,readonly) unsigned long long requiredPersonalizationFields;              //@synthesize requiredPersonalizationFields=_requiredPersonalizationFields - In the implementation block
@property (nonatomic,readonly) NSString * termsAndConditions;                                 //@synthesize termsAndConditions=_termsAndConditions - In the implementation block
@property (nonatomic,readonly) NSString * localizedDescription;                               //@synthesize localizedDescription=_localizedDescription - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)passPersonalizationWithPassBundle:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)termsAndConditions;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
-(unsigned long long)requiredPersonalizationFields;
@end

