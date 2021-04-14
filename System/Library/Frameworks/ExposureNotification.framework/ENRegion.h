/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ExposureNotification/ExposureNotification-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ENRegion : NSObject <NSSecureCoding, NSCopying> {

	NSString* _countryCode;
	NSString* _subdivisionCode;

}

@property (nonatomic,copy,readonly) NSString * countryCode;                  //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * subdivisionCode;              //@synthesize subdivisionCode=_subdivisionCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * regionCode; 
+(BOOL)supportsSecureCoding;
+(BOOL)validSubdivisionCode:(id)arg1 forCountryCode:(id)arg2 ;
+(id)regionFromServerResponseDictionary:(id)arg1 ;
+(id)regionWithCode:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)countryCode;
-(NSString *)regionCode;
-(id)initWithCountryCode:(id)arg1 subdivisionCode:(id)arg2 ;
-(id)initWithCountryCode:(id)arg1 ;
-(NSString *)subdivisionCode;
-(BOOL)isCountryCodeEqualToRegion:(id)arg1 ;
-(BOOL)isSubdivisionCodeEqualToRegion:(id)arg1 ;
-(BOOL)validSubdivisionCode;
@end
